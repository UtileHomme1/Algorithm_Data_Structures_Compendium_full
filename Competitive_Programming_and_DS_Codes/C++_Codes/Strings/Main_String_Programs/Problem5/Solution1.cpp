#include <iostream>
#include <string.h>

using namespace std;

bool checkPalindrome(char a[])
{
    int start = 0;
    int end = strlen(a)-1;
    while(start<end)
    {
        if(a[start]==a[end])
        {
            start++;
            end--;
        }
        else
        {
            cout<<"hello";
            return false;
        }
    }

    return true;
}

int main()
{
    char a[] = "naman";

    int len = strlen(a);
    int output = checkPalindrome(a);
    cout<<output<<endl;
    if(output==0)
    {
        cout<<"Not a palindrome";
    }
    else
    {
        cout<<"Palindrome found";
    }
}
