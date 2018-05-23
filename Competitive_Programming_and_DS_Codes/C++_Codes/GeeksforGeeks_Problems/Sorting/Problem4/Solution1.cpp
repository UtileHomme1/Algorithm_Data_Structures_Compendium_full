// https://ideone.com/7I8N81

#include <iostream>
using namespace std;

#define MAX 1111

int partition(int a[], int low, int high)
{
    int i = low;
    int pivot = a[high];

    for(int j=low;j<=(high-1);j++)
    {
        if(a[j]<=pivot)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
        }
    }

    int temp = a[i];
    a[i] = a[high];
    a[high] = temp;

    return i;
}

void Quicksort(int a[], int low, int high)
{
    if(low<high)
    {
        int part = partition(a, low, high);

        Quicksort(a, low, part-1);
        Quicksort(a, part+1, high);
    }
}

int main() {
	//code

    int t,len;
	int a[MAX];

	//enter the number of test cases
	cin>>t;

	while(t--)
	{
	    cin>>len;

	    for(int i=0;i<len;i++)
	    {
	        cin>>a[i];
	    }

	    int low = 0;
	    int high = len-1;

	    Quicksort(a,low,high);

	    for(int i=0;i<len;i++)
	    {
	        cout<<a[i]<<" ";
	    }

	    cout<<endl;
	}
	return 0;
}
