#include<iostream>
using namespace std;
int a[10000];

int main()
{
	int n;
	cin>>n;
	int count=0;
	for(int i=0;i<n;i++)
	{
		char ch;
		cin>>ch;
		if(ch=='I')
		{
			cin>>a[count++];
		}
		else if(ch=='D')
		{
			int min=a[0];
			for(int i=1;i<count;i++)
			{
				if(a[i]<min)
				{
					min=a[i];
				}
			}
			for(int i=0;i<count;i++)
			{
				if(a[i]==min)
				{
					a[i]=99999999;
					break;
				}
			}
		}
		else
		{
			int min=a[0];
			for(int i=1;i<count;i++)
			{
				if(a[i]<min)
				{
					min=a[i];
				}
			}
			cout<<min<<endl;
		}
	}
	
	
}
