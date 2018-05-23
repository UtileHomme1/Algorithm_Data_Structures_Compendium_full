// https://www.geeksforgeeks.org/interesting-facts-bitwise-operators-c/

#include <iostream>

using namespace std;

int main()
{

  int x = 19;
  (x & 1)?cout<<"Odd":cout<<"Even";

  return 0;
}
