/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* The task is to complete select() which is used
   as shown below to implement selectionSort()

A function to implement selection sort

void selectionSort(int arr[], int n) {
   int i, j;
   for (i = n-1; i >=0; i--)     {
        int j = select(arr, i);
        swap(&arr[i], &arr[j]);
   }
}
*/
int select(int arr[], int i)
{
    // Your code here
    int max = i;

    for(int j=i-1; j>=0;j--)
    {
        if(arr[j]>arr[max])
        {
            max = j;
        }
    }
    return max;
}
