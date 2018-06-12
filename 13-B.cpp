#include<iostream>
using namespace std;
int a[50001];


int main()
{
	int n;
	cin>>n;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		ans-=a[i];
		if(ans<0)
		{
			ans=0;
		}
	}
	cout<<ans<<endl;
}
