http://ide.geeksforgeeks.org/HFX9lH

#include <iostream>
using namespace std;

int calculate(int a, int b, int c)
{
int arr[] = {a, b};
return *(arr + c);
}

int main()
{
int a = 5, b = 10, c = 1;

int x = calculate(a, b, c);
cout << x << endl;

return 0;
}
