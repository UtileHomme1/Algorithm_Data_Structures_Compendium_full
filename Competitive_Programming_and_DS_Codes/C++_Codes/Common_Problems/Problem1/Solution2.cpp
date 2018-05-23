#include <iostream>

using namespace std;

int fibonacci(int n)
{
    int fib[n+1];

    fib[0] = 0;
    fib[1] = 1;

    for(int i=2;i<=n;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    return fib[n];


}

int main()
{
    int k = 4;

    int nth = fibonacci(k);

    cout<<nth;

    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(n)
