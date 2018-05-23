#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Solution
{
public:
  string decimaltobinary(int A)
  {
    string s="";

    if(A>0)
    {
      decimaltobinary(A/2);
      cout<<to_string(A%2);
    }

    return s;
  }
};

int main()
{

  Solution s;

  int n = 13;

  string k = s.decimaltobinary(n);

  cout<<k;

  return 0;
}
