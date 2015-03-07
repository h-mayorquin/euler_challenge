#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::endl;

void print_vector(std::vector<int> vector)
{
  int  n = vector.size();
  std::cout << "Printing vector " << std::endl;
  for(int i=0; i < n; i++){
    std::cout << vector[i] << "\t";
  }
  std::cout << std::endl;
}

int sum_vector(std::vector<int> vector)
{
  int n = vector.size();
  int sum = 0; 

  for(int i=0; i < n; i ++){
    sum += vector[i];
  }

  return sum;

}

int main()
{
  int n = 4000000; // Maximal number up to calculate the integers 
  int result = 0;
  int F_2 = 0;
  int F_1 = 1;
  
  int F = 0; 
  int counter = 0;

  // Let's generate the Finobaci series 
  while(F < n){

    // let's get numbers every time they are even 
    if(counter % 3 == 0){ // Every third element of the series are zero 
      result += F;
    }

    //
    F_2 = F_1; // Increase F_2 by one 
    F_1 = F;  // Increase F_1 by one 
    F = F_1 + F_2;  // This is the n term of the series 

    counter += 1; 
  } 
  cout << result << endl;
  return 0;

}
