#include<iostream>  
#include<algorithm>  
#include<cstring>  
#include<vector>  
using namespace std;  
int vis[2005];  
int flag[2005];  
struct Key  
{  
    int id;  
    int st;  
    int ed;  
} key[2005],kk[2005],d[2005];  
int cmp(Key a,Key b)  
{  
    return a.st<b.st;  
}  
int cmp2(Key a,Key b)  
{  
    if(a.ed==b.ed)  
        return a.id<b.id;  
    return a.ed<b.ed;  
}  
int main()  
{  
    int n,k;  
    cin>>n>>k; 
    vector<int>V;  
    V.clear();  
    for(int i=1; i<=n; i++)  
    {  
        V.push_back(i);  
    }  
    memset(vis,0,sizeof(vis)); 
    memset(flag,1,sizeof(flag)); 
    int c;  
    for(int i=1; i<=k; i++)  
    {  
        cin>>key[i].id>>key[i].st>>c;  
        key[i].ed=key[i].st+c;  
    }  
    sort(key+1,key+k+1,cmp);  
  
    int ans=0,t=0;  
    for(int i=1; i<=k; i++)  
    {  
        ans=0;  
        for(int j=1; j<i; j++)  
        {  
            if(vis[j])continue;  
            if(key[j].ed<=key[i].st)  
            {  
                vis[j]=1;
                d[ans].id=key[j].id;  
                d[ans++].ed=key[j].ed;  
                flag[key[j].id]=1;  
            }  
        }  
        sort(d,d+ans,cmp2);  
        t=0;  
        if(ans)  
        {  
            for(int j=0; j<V.size()&&t<ans; j++)  
            {  
                if(V[j]<0&&d[t].id)  
                {  
                    V[j]=d[t++].id;  
                }  
  
            }  
        }  
        for(int j=0; j<V.size(); j++)  
        {  
            if(V[j]==key[i].id)  
            {  
                flag[key[i].id]=0; 
                V[j]=-1;  
                break;  
            }  
        }  
         
    }  
    ans=0;  
    for(int i=1; i<=k; i++)  
    {  
        if(!vis[i])kk[ans++]=key[i];  
    }  
    sort(kk,kk+ans,cmp2);  
    for(int i=0; i<ans; i++) 
    {  
        if(!flag[kk[i].id])  
        {  
  
            for(int j=0; j<V.size(); j++)  
            {  
                if(V[j]<0)  
                {  
                    V[j]=kk[i].id;  
                    flag[kk[i].id]=1;  
                    break;  
                }  
            }  
        }  
    }  
    cout<<V[0];  
    for(int j=1; j<V.size(); j++)  
    {  
        cout<<" "<<V[j];  
    }  
    cout<<endl;  
  
}  
