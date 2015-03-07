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
  int n = 1000; // Maximal number up to calculate the integers 
  std::vector<int> divisors_five;
  std::vector<int> divisors_three; 
  std::vector<int> divisors_fifteen;
  int test_values, sum_three, sum_five, sum_fifteen;

  for(int i=0; i < n; i++){
    if(i % 5 == 0){    // Divisors of five 
      divisors_five.push_back(i);
	}
    if(i % 3 ==0){   // Divisors of three 
      divisors_three.push_back(i);
    }
    if(i % 15 ==0){  //Divisors of fifteen
      divisors_fifteen.push_back(i);
    }
  }

  // Count the values 
  
  std::cout << divisors_five.size() << std::endl;
  std::cout << divisors_three.size() << std::endl;
  std::cout << divisors_fifteen.size() << std::endl;

  // Print the values 
  sum_three =sum_vector(divisors_three);
  sum_five = sum_vector(divisors_five);
  sum_fifteen = sum_vector(divisors_fifteen);

  std::cout << sum_three << std::endl;
  std::cout << sum_five << std::endl;
  std::cout << sum_fifteen << std::endl;

  int result = sum_three + sum_five - sum_fifteen; 

  std::cout << std::string(10, '-') << std::endl;
  std::cout << "The result is " <<  result << std::endl;

  return 0;

}
