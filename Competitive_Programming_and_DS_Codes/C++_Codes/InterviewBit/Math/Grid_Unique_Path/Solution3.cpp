// https://www.interviewbit.com/problems/grid-unique-paths/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int uniquePaths(int m, int n)
  {


      int dp[n][m];
      dp[0][0] = 0;

      for(int i=1;i<m; i++)
      {
        dp[0][i] = 1;
      }
      for(int j=1;j<n;j++)
      {
        dp[j][0] = 1;
      }

      for(int i=1;i<n;i++)
      {
        for(int j=1;j<m;j++)
        {
          dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
      }

        return dp[n-1][m-1];
    }

};

int main()
{
  Solution s;
  int A = 2;
  int B = 3;
  int k = s.uniquePaths(A,B);

  cout<<k;
  return 0;
}
