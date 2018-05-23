#include <iostream>

using namespace std;

int main() {
	//code

	int t,n,m,g,s;


	//enter the test cases
	cin>>t;

	int i=0;

	while(i<t)
	{

	//tg = time taken by gautam to complete the linear search
	//ts = time taken by saurabh to complete the binary search
	int tg, ts=0;

	//enter the total names, position to be searched, time by gautam to search
	//one name, time by sauarabh to search one name
	cin>>n>>m>>g>>s;

	//since tg takes g time for each name and the position to be searched is x,
	//for linear search, total time taken is below
	tg = m*g;

	int l=1;
	int h = n;
	while(l<=h)
	{
		//for every iteration of not having found the name, we increment the total time by saurabh
	    ts = ts+s;

	    int mid = l+(h-l)/2;
	    if(m<mid)
	    {
	        h = mid-1;
	    }
	    else if (m>mid)
	    {
	        l = mid+1;
	    }
	    else
	    {
	        break;
	    }
	}

// 	cout<<tg<<" "<<ts<<endl;
	if(tg>ts)
	{
	    cout<<"1"<<endl;
	}
	else
	{
	    cout<<"2"<<endl;
	}
	i++;
	}
	return 0;
}
