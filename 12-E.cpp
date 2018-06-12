#include<iostream>
#include<cstring>
using namespace std;
int mid[10000];

void dectobin(int n,int count,int mid[])
{
	mid[count*8+0]=n/128;
	n=n-128*mid[count*8+0];
	mid[count*8+1]=n/64;
	n=n-64*mid[count*8+1];
	mid[count*8+2]=n/32;
	n=n-32*mid[count*8+2];
	mid[count*8+3]=n/16;
	n=n-16*mid[count*8+3];
	mid[count*8+4]=n/8;
	n=n-8*mid[count*8+4];
	mid[count*8+5]=n/4;
	n=n-4*mid[count*8+5];
	mid[count*8+6]=n/2;
	n=n-2*mid[count*8+6];
	mid[count*8+7]=n;
};

int main()
{
	int n;
	cin>>n;
	n/=8;
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		dectobin(k,i,mid);
	}
	
	
	n*=8;
	int count=0;
	
	for(int i=0;i<n-1;i++)
	{
		if(mid[i+1]==mid[i])
		{
			count++;
		}
		else
		{
			if(mid[i]==0)
			{
				cout<<count+1<<" ";
				count=0;
			}
			else
			{
				cout<<count+129<<" ";
				count=0;
			}
		}
	}
	if(mid[n-2]!=mid[n-1]) 
	{
		if(mid[n-1]==0)
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"129"<<endl;
		}
	}
	else
	{
		if(mid[n-1]==0)
		{
			cout<<count+1<<" ";
			count=0;
		}
		else
		{
			cout<<count+129<<" ";
			count=0;
		}
	}
	
}
