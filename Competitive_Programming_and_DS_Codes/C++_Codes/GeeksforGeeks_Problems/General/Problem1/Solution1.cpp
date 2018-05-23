// http://ide.geeksforgeeks.org/3xqDD3

#include <iostream>
using namespace std;

int assignvalue(int a, int b, int x)
{
    int arr[2];
    arr[0] = a;
    arr[1] = b;

    int y = arr[x];

    return y;
}
int main() {

	int a= 5;
	int b = 10;
	int x = 0;

	cout<<"Value assigned to y is "<<assignvalue(a,b,x);

	return 0;
}
