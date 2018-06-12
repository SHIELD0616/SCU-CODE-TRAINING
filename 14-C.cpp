#include<iostream>
#include<cstring>
using namespace std;
char a[100];
char b[100];
int c[100];
int d[100]; 
int ans[100];
int jinwei[100];
int prime[100]={2,3,5,7,11,13,17,19,23,29,31,37,43,47,53,59,61};

int main()
{
	
	while(cin>>a>>b)
	{
		int la=strlen(a);
		int lb=strlen(b);
		
		if(la==1&&la==1&&a[0]=='0'&&b[0]=='0')
		{
			break;
		}
		
		int count=0;
		int count1=0;
		memset(c,0,sizeof(c));
		memset(d,0,sizeof(d));
		memset(ans,0,sizeof(ans));
		memset(jinwei,0,sizeof(jinwei));
		
		for(int i=0;i<la;i++)
		{
			if(a[i]!=',')
			{
				c[count1]=c[count1]*10+a[i]-'0';
			}
			else
			{
				count1++;
			}
		}
		int count2=0;
		for(int i=0;i<lb;i++)
		{
			if(b[i]!=',')
			{
				d[count2]=d[count2]*10+b[i]-'0';
			}
			else
			{
				count2++;
			}
		}
		
		
		if(count1<=count2)
		{
			int j=count2;
			jinwei[0]=0;
			for(int i=count1;i>=0;i--)
			{
				ans[count]=c[i]+d[j]+jinwei[count];
				jinwei[count+1]=ans[count]/prime[count];
				ans[count]%=prime[count];
				j--;
				count++;
			}
			for(int i=j;i>=0;i--)
			{
				ans[count]=d[i]+jinwei[count];
				jinwei[count+1]=ans[count]/prime[count];
				ans[count]%=prime[count];
				count++;
			}
			
		}
		else
		{
			
			int j=count1;
			jinwei[0]=0;
			for(int i=count2;i>=0;i--)
			{
				ans[count]=d[i]+c[j]+jinwei[count];
				jinwei[count+1]=ans[count]/prime[count];
				ans[count]%=prime[count];
				j--;
				count++;
			}
			for(int i=j;i>=0;i--)
			{
				ans[count]=c[i]+jinwei[count];
				jinwei[count+1]=ans[count]/prime[count];
				ans[count]%=prime[count];
				count++;
			}
			
		}
		
		if(jinwei[count]>0)
		{
			ans[count]=jinwei[count];
			count++;
		}
		
		
		for(int i=count-1;i>0;i--)
		{
			cout<<ans[i]<<",";
		}
		cout<<ans[0]<<endl;
		
	}
	
	
 } 
