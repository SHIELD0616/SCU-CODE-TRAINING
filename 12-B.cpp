#include<iostream>
using namespace std;
char a[7][11]=
{"000000000",
"0--**-**--",
"0-*--*--*-",
"0-*-----*-",
"0--*---*--",
"0---*-*---",
"0----*----"
};

int main()
{
	int x,y,w,h;
	cin>>x>>y>>w>>h;
	if(1<=x&&x<=9&&1<=y&&y<=6&&1<=w&&w<=9&&1<=h&&h<=6&&2<=x+w&&x+w<=10&&2<=y+h&&y+h<=7)
	{
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{
				cout<<a[i+y][j+x];
			}
			cout<<endl;
		}
	}
	else
	{
		cout<<"Input Error"<<endl;
	}
	return 0;
}
