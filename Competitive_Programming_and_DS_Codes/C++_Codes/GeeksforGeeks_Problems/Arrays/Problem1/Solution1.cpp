#include <iostream>

using namespace std;

#define MAX 1111

int MissingNo(int a[], int size)
{
    int t_sum = ((size+1)*(size+2))/2;

    int a_sum = 0;
    for(int i=0;i<size;i++)
    {
        a_sum = a_sum + a[i];
    }

    int missing_no = t_sum - a_sum;
    return missing_no;
}

int main() {
	//code

	int t,size;
	int a[MAX];

	//enter the test cases
	cin>>t;

	while(t--)
	{
	    //enter the number of elements in the array
	    cin>>size;

	    //enter the elements in the array
	    for(int i=0;i<size-1;i++)
	    {
	        cin>>a[i];
	    }

	    int mno = MissingNo(a,size-1);

	    cout<<mno<<endl;
	}
	return 0;
}
