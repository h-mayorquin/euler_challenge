#include <iostream>
#include <string> 
#include <vector>

#include "vector.h"

using namespace std; 

void print_vector(std::vector<int> vector){
  cout << string(10, '-') << endl;
  cout << "("; 
  for(int i=0; i < vector.size() - 1; ++i){
    cout << vector[i] << ", ";
  }
  cout << vector[vector.size() - 1];
  cout << ")" << endl;

}

