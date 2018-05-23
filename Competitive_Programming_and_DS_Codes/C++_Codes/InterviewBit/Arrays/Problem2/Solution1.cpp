#include <iostream>
#include <vector>

using namespace std;

void reverseRowsInMatrix(vector <vector <int>> &A)
{
  vector <vector <int>> B;

  B.resize(A.size());

  for(int i=0; i<A.size();i++)
  {
    B[i].resize(A[i].size());
    for(int j=0;j<A[i].size();j++)
    {
      B[i][A[i].size()-1-j] = A[i][j];
    }
  }

  for(int i=0;i<B.size();i++)
  {
    for(int j=0;j<B[i].size();j++)
    {
      cout<<B[i][j]<<" ";
    }

    cout<<endl;
  }
}

int main()
{
  vector <vector <int>> A {{1,2,3,4}, {5,6,7,8,9},{10,11,12,13}};

  reverseRowsInMatrix(A);

  return 0;
}
