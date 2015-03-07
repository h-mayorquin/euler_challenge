#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <vector>
#include <algorithm>

 using std::cout;
 using std::endl;
 using std::sqrt;


void print_list(std::vector<long> vector, std::vector<long>::iterator iter){
   //prints list 
  cout << std::string(10, '-') << endl;
   for(iter=vector.begin(); iter != vector.end(); ++iter){
     cout << (*iter) << endl;
   }  
}


 int main()
 {
   long n = 600851475153; // Its factor should be 5, 7, 13 , 29 600851475143    
   //long n = 600; // Its factor should be 5, 7, 13 , 29 600851475143 
   std::vector<long> primes;
   std::vector<long> to_erase;
   std::vector<long>::iterator iter; 
   


   // Make a list 
   for(int i=2; i < n; ++i){
     primes.push_back(i);
   }
   
/   print_list(primes, iter);

   
   int j; // Declare the second counter 
   // Sieve
   for(int i=2; i < sqrt(n); ++i){
     j = i*i; 
     while(j < n){
       //iter = primes.begin() + j;
       primes[j] = 0;
       j += i; //increase by multiples of i, 2*i, 3*i, ...
     }
   }



   //print_list(primes, iter);
   std::sort(primes.begin(), primes.end());
   //print_list(primes, iter);
   
   int maximum_divisor; // Here we will store the biggest divisor 

   // Test for divisibility 
   for(iter=primes.end() - 1; iter != primes.begin(); --iter){
     if( n % (*iter) == 0){ 
       maximum_divisor = *iter;
       break;
     }
   }
   
   cout << "The maximum divisor is " << maximum_divisor << endl;

   return 0;
}
