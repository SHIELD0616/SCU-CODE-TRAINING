#include <iostream>     
using namespace std;
int a[108][108];
int b[108][108];  
   
int main()  
{  
    int n, m, k;  
    int i, j, ii, jj;  
    int min, sum, area;  
   
    while (cin>>n>>m>>k)  
    {  
        for(i=0; i<n; i++)  
        {  
            for (j=0; j<m; j++)  
            {  
                scanf("%d", &a[i][j]);  
                if (i == 0)  
                    b[i][j] = a[i][j];  
                else  
                    b[i][j] = b[i-1][j] + a[i][j];  
            }  
        }  
   
        min = 108*108+1;  
        for(i=0; i<n; i++)  
        {  
            for (j=0; j<m; j++)  
            {  
                for (ii=i; ii<n; ii++)  
                {  
                    sum = 0;  
                    for (jj=j; jj<m; jj++)  
                    {  
                        area = (ii-i+1)*(jj-j+1);  
                        if (area >= min)  
                            break;  
                        sum += b[ii][jj];  
                        if (i > 0)  
                            sum -= b[i-1][jj];  
                        if (sum >= k)  
                            min = area;  
                    }  
                }  
            }  
        }  
   
        if (min == 108*108+1)  
            min = -1;  
        cout<<min<<endl; 
    }  
   
    return 0;  
}  
