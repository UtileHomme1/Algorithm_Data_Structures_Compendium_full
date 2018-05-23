// http://ide.geeksforgeeks.org/5Vsykf

#include <iostream>
using namespace std;

int calc(int a, int b, int c)
{
    int k = (a+b) - (!c*b) - (c*a);
    return k;
}

int main() {

	int a=5, b=10, c=1;

	int y = calc(a,b,c);
	cout<<y;

	return 0;
}
