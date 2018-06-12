#include<iostream>  
using namespace std;  
    
void func(int n)  
{  
    int a=0,r;  
    while((1<<a)<=n) 
	{
		a++;
	}
    a--;  
    
    if(a==0) 
	{
		cout<<"2(0)";	
	}
    
	else if(a==1) 
	{
		cout<<"2"; 	
	}
	 
    else 
	{
		cout<<"2(";
		func(a);
		cout<<")";
	} 
	
    r=n-(1<<a); 
    
	if(r) 
	{
		cout<<"+";
		func(r); 	
	} 
	
}  

int main()  
{  
    int n;  
 	cin>>n;
	func(n);
	cout<<endl;  
    return 0;  
}  
