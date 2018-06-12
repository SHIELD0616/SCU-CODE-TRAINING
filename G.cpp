#include<iostream>
using namespace std;
int a[100000];
int len[100000];

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		len[i]=1;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			if((a[i] > a[j]) && len[j]+1 > len[i]) {
                len[i] = len[j]+1;  
            }
		}	
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(ans<len[i])
		{
			ans=len[i];
		}
	}
	
	cout<<ans<<endl;
 } 
