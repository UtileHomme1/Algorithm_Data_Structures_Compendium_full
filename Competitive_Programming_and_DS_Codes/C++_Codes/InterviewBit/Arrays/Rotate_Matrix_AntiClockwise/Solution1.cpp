// https://www.interviewbit.com/problems/rotate-matrix/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  vector < vector <int>> rotate(vector <vector <int>> &A)
  {
    vector <vector <int>> B = A;

    int N = A.size();

    for(int x=0;x<A.size();x++)
    {
      for(int y=0;y<A[0].size();y++)
      {
        B[y][x] = A[x][N-y-1];
      }
    }

    return B;
  }
};

int main()
{
  vector <vector <int>> A = {{1, 2, 3, 4}, {5, 6, 7, 8},
                            {9, 10, 11, 12},{13, 14, 15, 16}};

  Solution s;

  vector <vector <int>> B = s.rotate(A);

  for(int i=0;i<B.size();i++)
  {
    for(int j=0;j<B.size();j++)
    {
      cout<<B[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
