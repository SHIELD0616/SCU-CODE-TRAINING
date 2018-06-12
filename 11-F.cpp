#include<iostream>
using namespace std;
int a[1000000];

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int buf=a[i];
				a[i]=a[j];
				a[j]=buf;
			}
		}
	}
	
	
}
