#include<stdio.h>  
#include<string.h>  
#include<iostream>  
using namespace std;  
      
int main()  
{  
    int n;  
    cin>>n;   
    int str1[1001],str2[1001];  
    for(int i=0;i<n;i++)
	{
		cin>>str1[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>str2[i];
	}  
    int LCS[n+1][n+1];  
    memset(LCS,0,sizeof(LCS));
	int i=1,j=1;  
    for(i;i<=n;i++)  
    {  
        if(LCS[i-1][j]+i<n+1)
        {
        	for(j=1;j<=n;j++)  
	        {  
	            if(str1[i-1]==str2[j-1])  
	                LCS[i][j] = LCS[i-1][j-1] + 1;  
	            else  
	                LCS[i][j] = LCS[i][j-1]>LCS[i-1][j] ? LCS[i][j-1] : LCS[i-1][j];            
	        }
		}
		else
		{
			break;
		}
		  
    }  
    cout<<LCS[n][n]<<endl; 
}  



