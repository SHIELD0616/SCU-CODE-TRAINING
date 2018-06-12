#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,ans=0;
		cin>>a;
		for(int j=1;j<=a;j++)
		{
			if(a%j==0)
			{
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}
