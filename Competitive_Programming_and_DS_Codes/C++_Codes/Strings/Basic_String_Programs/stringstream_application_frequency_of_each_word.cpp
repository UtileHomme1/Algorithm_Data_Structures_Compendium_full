// https://www.geeksforgeeks.org/stringstream-c-applications/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printFrequency(string st)
{
  map <string, int> FW;

  stringstream ss(st);

  string word;

  while(ss>>word)
  {
    FW[word]++;
  }

  map<string,int>::iterator m;

  for(m=FW.begin(); m!=FW.end();m++)
  {
    cout<<m->first<<"->"<<m->second<<endl;
  }
}

int main()
{
  string s="geeks for geeks geeks";

  printFrequency(s);
}
