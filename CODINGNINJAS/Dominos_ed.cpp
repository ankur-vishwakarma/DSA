#include<bits/stdc++.h>
#include<vector>
#include<stack>
using namespace std;
void dfs(vector<int>*v,bool*visited,int sv,stack<int>&s)
{
    visited[sv]=true;
    for(int i=0;i<v[sv].size();i++)
    {
        int next=v[sv][i];
        if(!visited[next])
        {
            //cout<<next<<endl;
            dfs(v,visited,next,s);
            s.push(next);
        }
    }
}
void DFS(vector<int>*v,int sv,bool*visited)
{
    visited[sv]=true;
    for(int i=0;i<v[sv].size();i++)
    {
        int next=v[sv][i];
        if(!visited[next])
        {
            DFS(v,next,visited);
        }
    }
}
int main()
{
    stack<int> s;
    int t;
    cin>>t;
    while(t--)
    {
    int n,x;
    cin>>n>>x;
    vector<int>*v=new vector<int>[n+1];
  //  vector<int>*t=new vector<int>[n+1];
        while(x--)
        {
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
        }
            bool*visited=new bool[n+1];
            for(int i=0;i<n+1;i++)
                visited[i]=false;
            stack<int>s;
            for(int i=1;i<n+1;i++)
            {
                if(!visited[i])
                {
                    dfs(v,visited,i,s);
                    s.push(i);
                 
                    }
            }
    
            for(int i=0;i<n+1;i++)
                visited[i]=false;
        int count=0;
        while(s.size()!=0)
        {
            int f=s.top();
            s.pop();
            if(visited[f]==0)
            {
                count++;
                 DFS(v,f,visited);
                
            }
        }
       
        cout<<count<<endl;
    }
    return 0;
} 
