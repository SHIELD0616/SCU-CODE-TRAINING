#include<iostream>
using namespace std;
bool a[10000];

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int l,m,ans=0;
		cin>>l>>m;
		for(int k=0;k<=l;k++)
		{
			a[k]=false;
		}
		for(int j=0;j<m;j++)
		{
			int start,end;
			cin>>start>>end;
			for(int k=start;k<=end;k++)
			{
				if(a[k]==false)
				{
					a[k]=true;
				}
			}
		}
		for(int k=0;k<=l;k++)
		{
			if(a[k]==true)
			{
				ans++;
			}
		}
		cout<<l+1-ans<<endl;
	 } 
 } 
