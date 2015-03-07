#include <iostream>
#include <vector>

using namespace std; 

void print_vector(std::vector<int> vector){
  cout << string(10, '-') << endl;
  cout << "("; 
  for(int i=0; i < vector.size() - 1; ++i){
    cout << vector[i] << ", ";
  }
  cout << vector[vector.size()];
  cout << ")" << endl;

}

int main()
{
  int i = ; 
  vector<int> vector;
  while(i > 0){
    vector.push_back(i);
    cout << "i= " << i << endl; 
    print_vector(vector);
    --i;
    
  }


  return 0;
}
