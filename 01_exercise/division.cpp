#include<iostream>
#include<vector>
#include<string>

void print_vector(std::vector<int> vector)
{
  int  n = vector.size();
  std::cout << "Printing vector " << std::endl;
  for(int i=0; i < n; i++){
    std::cout << vector[i] << "\t";
  }
  std::cout << std::endl;
}

int main()
{
  int n = 100; // Maximal number up to calculate the integers 
  std::vector<int> divisors_five;
  std::vector<int> divisors_three; 
  int test_values;

  for(int i=0; i < n; i++){
    if(i % 5 == 0){
      divisors_five.push_back(i);
	}
    if (i % 3 ==0){
      divisors_three.push_back(i);
    }
  }

  // Count the values 
  
  std::cout << divisors_five.size() << std::endl;
  std::cout << divisors_three.size() << std::endl;

  // Print the values 
  print_vector(divisors_five);
  print_vector(divisors_three);

  return 0;

}
