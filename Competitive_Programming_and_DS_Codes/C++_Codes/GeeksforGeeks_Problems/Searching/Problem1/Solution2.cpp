// https://ideone.com/Z91NF3

#include <iostream>

using namespace std;

int lsearch(int *a, int size, int k)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]==k)
        {
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int n, t, *arr, k;

    //input the array
    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>k;

        //inputing the address of new array into a variable
        arr = new int[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        cout<<lsearch(arr,n,k)<<endl;
    }
}
