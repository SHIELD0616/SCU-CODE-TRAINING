#include<iostream>
using namespace std;
int a[9][9];
int b[9][9];

int main()
{
	int n;
	cin>>n;
	int flag=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>b[i][j];
		}
	}
	
	int check=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==b[i][j])
			{
				check++;
			}
			else
			{
				goto ckpoint1;
			}
		}
	}
	ckpoint1:
	if(check==n*n)
	{
		cout<<0<<endl;
		flag=1;
		goto finalcheck;
	}
	
	check=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==b[n+1-i][n+1-j])
			{
				check++;
			}
			else
			{
				goto ckpoint2;
			}
		}
	}
	ckpoint2:
	if(check==n*n)
	{
		cout<<180<<endl;
		flag=1;
		goto finalcheck;
	}
	
	check=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==b[j][n-i+1])
			{
				check++;
			}
			else
			{
				goto ckpoint3;
			}
		}
	}
	ckpoint3:
	if(check==n*n)
	{
		cout<<90<<endl;
		flag=1;
		goto finalcheck;
	}
	
	check=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==b[n+1-j][i])
			{
				check++;
			}
			else
			{
				goto ckpoint4;
			}
		}
	}
	ckpoint4:
	if(check==n*n)
	{
		cout<<270<<endl;
		flag=1;
		goto finalcheck;
	}
	
	finalcheck:
	if(!flag)
	{
		cout<<-1<<endl;
	}
	
}
