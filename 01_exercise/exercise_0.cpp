#include <iostream>

double formula(int n)
{
  return (n * (n + 1)) / 2;
}

int main()
{
  std::cout << "Calculate the number" << std::endl;
  
  // This is a comment 
  int n = 15;
  double formula_value = formula(n);
  double sum = 0; 


  for(int i=0; i <=n; i++){
    sum += i;
    std::cout << "The result is " << sum << " \t";
    std::cout << "The formula gives " << formula(i) << std::endl;

  }


  

  return 0; 
}
