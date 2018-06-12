#include<iostream>
#include<cstring>
using namespace std;
char a[13];
char b[5]={'2','0','1','2',0};
char c1[5]={'0','2','1','2',0};
char c2[5]={'2','0','2','1',0};
char c3[5]={'2','1','0','2',0};
char d1[5]={'1','2','2','0',0};
char d2[5]={'2','2','1','0',0};

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<a<<endl;
	cout<<b<<endl;
	if(n<4)
	{
		cout<<-1<<endl;
	}
	
	else
	{
		if(strstr(a,b)!=NULL)
		{
			cout<<0<<endl;
		}
		else if(n==4)
		{
			if(strstr(a,c1)!=NULL||strstr(a,c2)!=NULL||strstr(a,c3)!=NULL)
			{
				cout<<1<<endl;
			}
			else if(strstr(a,d1)!=NULL||strstr(a,d2)!=NULL)
			{
				cout<<3<<endl;
			}
			else
			{
				cout<<2<<endl;
			}
		}
		else
		{
			if(strstr(a,c1)!=NULL||strstr(a,c2)!=NULL||strstr(a,c3)!=NULL)
			{
				cout<<1<<endl;
			}
			else
			{
				cout<<2<<endl;
			}
			
		}
	}
}
