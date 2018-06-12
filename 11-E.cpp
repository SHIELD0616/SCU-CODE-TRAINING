#include<iostream>
#include<cstring>
using namespace std;
#define maxn 10000
int a[maxn][maxn];

int main()
{
	int n,m;
	cin>>n>>m;
	memset(a,0,sizeof(a));
	for(int i=0;i<m;i++)
	{
		char ch;
		cin>>ch;
		if(ch=='Q')
		{
			int x,y;
			cin>>x>>y;
			if(a[x][y]==0&&a[y][x]==0)
			{
				cout<<"N"<<endl;
			}
			else
			{
				cout<<"Y"<<endl;
			}
		}
		else
		{
			int x,y;
			cin>>x>>y;
			a[x][y]=1;
			a[y][x]=1;
		}
	}
	
	
	
}
