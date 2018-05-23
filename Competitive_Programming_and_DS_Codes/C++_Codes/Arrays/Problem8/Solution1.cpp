#include <iostream>
using namespace std;

int bsearch(int a[],int l,int h,int k)
{
	//check if the lower bound is less than the upper bound or not
	if(h<l)
	{
		return -1;
	}

	//calculate the middle value between the two bounds
	int mid = l + (h-l)/2;

	//if the number to be searched is found at the mid, then return that position
	if(a[mid]==k)
	{
		return mid;
	}

	//if the current position value is less than the value to be searched, increase the value of lower bound
	else if(a[mid]<k)
	{
		return bsearch(a,mid+1,h,k);
	}

	//if the current position value is more than the value to be searched, decrease the value of upper bound
	else
	{
		return bsearch(a,l,mid-1,k);
	}
}

int SortedDelete(int a[], int n, int key)
{
	//get the index from binary search
	int pos = bsearch(a,0,n-1,key);

	//if "-1" is returned, then the element has not been found
	if(pos==-1)
	{
		cout<<"Element not found";
		return n;
	}

	//Start from the position return till the end
	//Since we have to delete the element at the "pos" , replace it with the next element
	//do this for all elements after "pos"

	for(int i=pos;i<n;i++)
	{
		a[i] = a[i+1];
	}

	//return the new element size since the element has been deleted
	return n-1;
}

int main() {
	// your code goes here

	int a[] = {2,3,5,6,88,99};

	int n = sizeof(a)/sizeof(a[0]);

	int key = 5;

	n = SortedDelete(a,n,key);

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}

	return 0;
}
