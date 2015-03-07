#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::sqrt;

using std::vector;

void print_vector(std::vector<long> vector, std::vector<long>::iterator iter){
   //prints list 
  cout << std::string(10, '-') << endl;
   for(iter=vector.begin(); iter != vector.end(); ++iter){
     cout << (*iter) << endl;
   }  
}


int main(){
  //  long n = 11 * 13 * 101; 
  long n = 600851475143 ; // Its factor should be 5, 7, 13 , 29 600851475143    
  long aux = n; 

  vector<long> factors;
  vector<long>::iterator iter; 

  long probable_factor = 2;
  long max_factor = 2; 

  while( n > 1){
    if( n % probable_factor == 0){ // If n is divided by a number
      factors.push_back(probable_factor); // Add factor 
      max_factor = probable_factor; //store the last value 
      n = n / probable_factor;
      cout << "n new value is " << n << endl;
    }
    
    ++probable_factor; // probable factor increases 
  }

  print_vector(factors, iter);
  cout << "maximum factor " << max_factor << endl;
  
  long product = 1;
  for(iter = factors.begin(); iter != factors.end(); ++iter){
    product = product * (*iter); // multiply all the products 
  }
  
  cout << "product " << product << endl;
  cout << "n = " << aux << endl;

  if(product == aux){
    cout << "The algorith is all right" << endl;
  }

  
  return 0;
}
