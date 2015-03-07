#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <list>

#include "listFunctions.h"

using std::cout;
using std::endl;
using std::sqrt;


void print_list(std::list<int> list, std::list<int>::iterator iter)
{
  // Print the list 
  cout << std::string(10, '-') << endl;
  for(iter=list.begin(); iter != list.end(); iter++){
    cout << (*iter) <<endl;
  }
}


std::list<int> sieve_list(std::list<int> list, std::list<int>::iterator iter, int n)
{
  // Apply Erasthenes Sieve
  std::cout << std::string(10, '-') << std::endl;
  int square_root = (int) sqrt(n); // Get the square root 
  for(int i=2; i <= square_root ; i++){
    int j = i*i;
    iter = list.begin();
    while(j < n){
      //std::advance(iter, 1);
      iter = list.erase(iter);
      cout << 'i' << i;
      cout << (*iter) << endl;
      cout << 'j' << endl;
      j += i;
    }
     
  }

  return list;
}

int main()
{
  int i; //counter
 
  // Prime to factor 
  // long prime = 600851475153; // Its factor should be 5, 7, 13 , 29 600851475143 
  long n = 100;
  int square_root = (int) sqrt(n); 
  
  // First we need to find the primes until square_root
  std::list<int> primes;
  std::list<int>::iterator iter;

  // Create a list with of integers 
  for(i=2; i <= n; i++){
    primes.push_back(i);
  }

  print_list(primes, iter);
  primes = sieve_list(primes, iter, n);
  print_list(primes, iter);
 
  
  int biggest_factor; 
  // Now we test divisibility for the numbers from the biggest to the samllest
  std::cout << std::string(10, '-') << std::endl;
  iter = primes.end();
  while(iter != primes.begin()){
    iter--;
    if(n % (*iter) == 0){
      biggest_factor = (*iter);
      break; 
    }
  }
  

  cout << biggest_factor << endl;

  return 0;
}
