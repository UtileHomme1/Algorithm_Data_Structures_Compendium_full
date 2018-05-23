// https://www.geeksforgeeks.org/converting-string-to-number-and-vice-versa-in-c/

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    int num = 2016;

    ostringstream str1;

    //sending a number as a stream into input string
    str1 << num;

    //the str() converts the number into string
    string geek = str1.str();

    cout<<"The newly formed string from number is: "<<endl;
    cout<<geek<<endl;

    return 0;
}
