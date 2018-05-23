#include <iostream>
using namespace std;

int main() {
	// your code goes

	int a[] = {64,25,12,22,11};

	//calculating size of the array
	int n = sizeof(a)/sizeof(a[0]);

	int min;

	//array before sorting
	for(int k=0;k<n;k++)
	{
		cout<<a[k]<<" ";
	}
	//'n-1' because by the end of this for loop we will have the largest element in the end.. so no need for comparing
	for(int i=0;i<n-1;i++)
	{
		//assume the first element is the minimum;
		min=i;

		//'j=i+1' because we want to start from the element next to the one that we have considered as minimum element
		//by the end of this loop we must have found the MINIMUM ELEMENT
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}

		}

		//since 'min' is the index of the actual lowest element and 'i' is the index of the assumed lowest element, swap them
		int temp = a[min];
		a[min]=a[i];
		a[i]=temp;

	}
	cout<<endl;
	//array after sorting
	for(int k=0;k<n;k++)
	{
		cout<<a[k]<<" ";
	}

	return 0;
}

// Time Complexity - O(n^2)
