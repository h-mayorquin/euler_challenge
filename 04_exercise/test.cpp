#include <iostream>
#include <vector>
#include <iterator>
#include <cmath>
#include <algorithm>

#include "vector.h"

using namespace std;

std::vector<int> decimal_representation(int n){

  vector<int> decimal_rep;
  int max_digit = log10(n);
  int i = max_digit;
  int residue;
  int digit; 
  while(i >= 0){
    residue = n / pow(10, i); // calculate the residue 
    digit = residue % 10; 
    decimal_rep.push_back(digit); 
    i--;
  }

  return decimal_rep;

}

bool is_palindrome(std::vector<int> vector){
  int vector_size = vector.size(); 
  bool palindrome = true; 
  for(int i=0; i<vector_size;  ++i){
    if(vector[i] != vector[vector_size - 1 - i]){
      palindrome = false;
      break;
    }
  }
  return palindrome; 
}



int main()
{
  // We write first a rotuine to see if a number is a palindrome 
  vector<int> decimal_rep;
  vector<int> palindrome_collection; 
  int first_product = 999; 
  int second_product = 999;
  int product; 
  bool palindrome;

  while(first_product > 99){
    while(second_product > 99){
      product = first_product * second_product;
      decimal_rep = decimal_representation(product);
      palindrome = is_palindrome(decimal_rep);
      if(palindrome){
	cout << "Palindrome found " << product << endl;
	cout << "First product " << first_product << " Second product" << second_product << endl;
	palindrome_collection.push_back(product);	
      }
      // Print here the progress 
      
      // Decrease the values 
      --second_product;
    }
    --first_product;
    second_product = first_product; 
  }

  // Sort and print the palindromes 
  sort(palindrome_collection.begin(), palindrome_collection.end());
  print_vector(palindrome_collection);



  return 0;
}



