#include<iostream>
using namespace std;
int a[4]={1,3,5,7};

int main()
{
	int n;
	cin>>n;
	int flag;
	if(n<=1)
	{
		cout<<n<<" "<<1<<" "<<3<<" "<<5<<" "<<7<<endl;
	}
	else if(n<=3)
	{
		cout<<1<<" "<<n<<" "<<3<<" "<<5<<" "<<7<<endl;
	}
	else if(n<=5)
	{
		cout<<1<<" "<<3<<" "<<n<<" "<<5<<" "<<7<<endl;
	}
	else if(n<=7)
	{
		cout<<1<<" "<<3<<" "<<5<<" "<<n<<" "<<7<<endl;
	}
	else
	{
		cout<<1<<" "<<3<<" "<<5<<" "<<7<<" "<<n<<endl;
	}
	
}
