http://ide.geeksforgeeks.org/oRzzaD

#include <iostream>
using namespace std;

int calc(int a, int b, int c)
{
    int k = ((1-c)*a) + (c*b);
    return k;
}

int main() {

	int a=5, b=10, c=0;

	int y = calc(a,b,c);
	cout<<y;

	return 0;
}
