#include <iostream>
using namespace std;

#define MAX 1111

int main() {
	//code

	int t,size,k,z=0;
	int a[MAX];

	//enter the number of test cases

	cin>>t;

	int i=0;
	while(z<t)
	{
	    //input the size of the array
	    cin>>size;

	    //input the element to be searched
	    cin>>k;



	    //input the array elements
	    for(i=0;i<size;i++)
	    {
	        cin>>a[i];
	    }

	    int pos = 0;

	    for(i=0;i<size;i++)
	    {
	        if(a[i]==k)
	        {
	            pos = i+1;
	            break;
	        }
	    }

	    if(pos>0)
	    {
	        cout<<pos<<endl;
	    }
	    else
	    {
	        cout<<"-1"<<endl;
	    }

	    z++;
	}
	return 0;
}
