#include <iostream>
#include <stdlib.h>


#define MAX 1000

using namespace std;

bool has[MAX+1][2];

void insert(int a[], int n)
{

    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            has[a[i]][0] = 1;
        }
        else
        {
            has[abs(a[i])][1] = 1;
        }
    }
}

bool search(int key)
{
    if(key>=0)
    {
        if(has[key][0]==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if(has[abs(key)][1]==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int a[] = {7,4,8,-33,77,54};

    int n = sizeof(a)/sizeof(a[0]);

    insert(a,n);

    int k = -33;

    if(search(k)==true)
    {
        cout<<"Element found";
    }
    else
    {
        cout<<"Element not found";
    }
}
