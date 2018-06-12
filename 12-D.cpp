#include <iostream>  
#include <cstring>
using namespace std;
char a[40];  
char eof[]={"End"};
      
bool IsValidIp(char* str)  
{  
    if(str == NULL)  
    {  
        return false;  
    }  
    
    int a[5];  
    
    if(sscanf(str,"%d.%d.%d.%d",&a[0],&a[1],&a[2],&a[3]) != 4)  
    {  
        return false;  
    } 
      
    for(int i = 0; i < 4; ++i)  
    {  
        if(a[i] < 0 || a[i] > 255)  
        {  
            return false;  
        }  
    }  
    return true;  
}  
      
int main()  
{      
 	while(cin>>a)
 	{
	 	if(strcmp(a,eof)!=0)
	 	{
	 		if(IsValidIp(a))
	 		{
	 			cout<<"YES"<<endl;
			}
			else if(!IsValidIp(a))
			{
				cout<<"NO"<<endl;
			}
			memset(a,0,sizeof(a)); 
		}	
		else
		{
			break;
		}
	}
 	
    return 0;  
}  
