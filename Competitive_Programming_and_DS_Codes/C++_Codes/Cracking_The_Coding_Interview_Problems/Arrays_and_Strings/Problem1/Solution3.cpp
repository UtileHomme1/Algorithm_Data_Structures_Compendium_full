#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isUnique(string str)
{
  sort(str.begin(), str.end());

  for(int i=0;i<str.length();i++)
  {
    if(str[i]==str[i+1])
    {
      return false;
    }
  }

  return true;
}

int main()
{
  vector <string> str{"abcde","jatin", "geeksforgeeks"};

  for(auto i: str)
  {
    cout<<i<<" has unique value as "<<isUnique(i)<<endl;
  }

return 0;
}
