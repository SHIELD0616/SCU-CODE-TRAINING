#include<iostream>
#include<cstring>
int a[1000000];
using namespace std;

int main()
{
	int n;
	cin>>n;
	memset(a,0,sizeof(a));
	int count=0;
	int count2=0;
	for(int i=0;i<n;i++)
	{
		char ch;
		cin>>ch;
		if(ch=='I')
		{
			cin>>a[count++];
		}
		if(ch=='Q')
		{
			cout<<a[count2++]<<endl;		
		}
	}
}
