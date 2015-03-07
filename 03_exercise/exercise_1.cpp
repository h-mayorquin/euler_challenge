#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <vector>
#include <algorithm>

 using std::cout;
 using std::endl;
 using std::sqrt;


void print_vector(std::vector<long> vector, std::vector<long>::iterator iter){
   //prints list 
  cout << std::string(10, '-') << endl;
   for(iter=vector.begin(); iter != vector.end(); ++iter){
     cout << (*iter) << endl;
   }  
}


 int main()
 {
   long n = 600851475143;
   // long n = 5273 * 11 * 5  * 13 * 17 ; // Its factor should be 5, 7, 13 , 29 600851475143 
   std::vector<long> primes;
   std::vector<long>::iterator iter; 
   bool prime = true;
   
   int max_prime = 1; 
   primes.push_back(2);

   int bound = n;
   for(int i=3; i < n; i++){
     prime = true; // assume the number is prime 
     for(iter=primes.begin(); iter != primes.end(); ++iter){
       
       if( i % (*iter) == 0){ // If the number is divisible by another prime 
	 prime = false;  // then is not a prime 
	 continue;

       }
     }
     if(prime == true){
       primes.push_back(i); // store the prime 
       if(n % i == 0){
	 max_prime = i; 
	 n = n / i;  // Reduce scope of search 
	 cout << "uper bound changed by " << i << endl;
	 cout << "new upper bound " << n << endl;
       }
     }
   }
   //print_vector(primes, iter);
   cout << "max prime " << max_prime << endl;

   return 0;
}
