#include<iostream>
using namespace std;

int a[15][15];

int function(int n,int m)
{
    if(n<0) 
	{
		return 0;
	}
	else if(n==0||m==1) 
	{
		return 1;
	}
	
    return function(n,m-1)+function(n-m,m);
}

int main()
{
    int n,m;
	cin>>n>>m;
	cout<<function(n,m)<<endl;
    return 0;
}
