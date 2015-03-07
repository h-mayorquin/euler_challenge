#include<iostream>
#include<list>
#include<string>


#include "listFunctions.h"

using std::cout;
using std::endl;

void print_list(std::list<int> list, std::list<int>::iterator iter)
{
  // Print the list 
  cout << std::string(10, '-') << endl;
  for(iter=list.begin(); iter != list.end(); iter++){
    cout << (*iter) <<endl;
  }
}
