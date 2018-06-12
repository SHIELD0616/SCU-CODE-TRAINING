#include <iostream>  
using namespace std; 
#define MAXN 100
int dp[MAXN] = {0};   
int a[MAXN];  
  
int main()  
{  
    int n; 
	cin >> n;  
    for(int i=1; i<=n; i++) 
	{
		cin>>a[n-i+1]; 	
	} 
	
    dp[1] = 1; 
	int maxV=0;
	int k=0;
	 
    for(int i=2; i<=n; i++)  
    {  
        maxV = 0;  
        for(int j=1; j<i; j++)  
        {  
            if(maxV<dp[j] && a[j]<=a[i]) maxV = dp[j];  
        }  
        dp[i] = maxV + 1;  
        if(k<dp[i]) k = dp[i];  
    }  
    
	cout << k;  
    return 0;  
}  
