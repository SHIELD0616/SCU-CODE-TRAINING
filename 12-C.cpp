#include<iostream>
#include<cstring>
using namespace std;
char a[8][12]=
{"0000000000",
"0--**-**--0",
"0-*-*****-0",
"0-*----**-0",
"0--*--**--0",
"0---***---0",
"0----*----0",
"0000000000"
};
int b[8];


int main()
{
	memset(b,0,sizeof(b));
	for(int i=1;i<7;i++)
	{
		for(int j=1;j<10;j++)
		{
			if(a[i][j]=='*')
			{
				int count=0;
				if(a[i-1][j-1]=='-')
				{
					count++;
				}
				if(a[i-1][j]=='-')
				{
					count++;
				}
				if(a[i-1][j+1]=='-')
				{
					count++;
				}
				if(a[i][j-1]=='-')
				{
					count++;
				}
				if(a[i][j+1]=='-')
				{
					count++;
				}
				if(a[i+1][j-1]=='-')
				{
					count++;
				}
				if(a[i+1][j]=='-')
				{
					count++;
				}
				if(a[i+1][j+1]=='-')
				{
					count++;
				}
				b[count]++;
			}
			
		}
	}
	int n;
	cin>>n;
	if(n>=0&&n<8)
	{
		cout<<b[n]<<endl;
	}
	else
	{
		cout<<"Input Error"<<endl;
	}
	
}
