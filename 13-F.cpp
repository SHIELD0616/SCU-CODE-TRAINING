#include<iostream>
using namespace std;
int a[108];
int b[108];

int main()
{
	int k,n,weishu;
	cin>>k>>n;
	a[0]=k*n%10;
	b[0]=k*n/10;
	for(int i=1;i<n;i++)
	{
		a[i]=(k*(n-i)+b[i-1])%10;
		b[i]=(k*(n-i)+b[i-1])/10;
	}
	for(int i=n;;i++)
	{
		if(b[i-1])
		{
			a[i]=b[i-1]%10;
			b[i]=b[i-1]/10;
		}
		else
		{
			weishu=i-1;
			break;
		}
	}
	for(int i=weishu;i>=0;i--)
	{
		cout<<a[i];
	}
}
