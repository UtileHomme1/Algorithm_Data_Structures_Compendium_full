#include <stdio.h>
#include <iostream>

using namespace std;
#define MAX 1111

int main() {
	//code
	int t, size;

	int a[MAX];

	//enter test cases
	scanf("%d",&t);

	while(t--)
	{
	    //enter the size of the array
	    scanf("%d",&size);

	    //enter the elements of this array
	    for(int i=0;i<size;i++)
	    {
	        cin>>a[i];
	    }

	    //no. of passes will be one less than the actual contents of the array
	    for(int k=0;k<size-1;k++)
	    {
	        for(int j=0;j<size-k-1;j++)
	        {
	            if(a[j]>a[j+1])
	            {
	                int temp = a[j];
	                a[j] = a[j+1];
	                a[j+1]= temp;
	            }
	        }
	    }

	   for(int i=0;i<size;i++)
	   {
	       cout<<a[i]<<endl;
	   }

	}
	return 0;
}
