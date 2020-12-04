#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
#define ll long long int
ll chCnt(vector<vector<ll> >& g,ll node,vector<ll>& nodeCnt){
    ll sum=0;
    for(ll i=0;i<g[node].size();i++){
        sum+=chCnt(g,g[node][i],nodeCnt);
    }
    return nodeCnt[node]=1+sum;
}
ll dfs(vector<vector<ll> >&g,vector<ll>&nodeCnt,ll node){
    ll ans=nodeCnt[node],temp=0;
    for(ll i=0;i<g[node].size();i++){
        temp=max(temp,dfs(g,nodeCnt,g[node][i]));
    }
    return ans+temp;
}
int main()
{
    ifstream cin("input.txt");
    ll t, n, m, i, j, k, l, x, y, c;
    cin >> t;
    while (t--)
    {
        cin>>n;
        vector<ll> par(n-1);
        vector<vector<ll> > g(n+1);
        vector<ll> nodeCnt(n+1,0);
        for(i=0;i<n-1;i++){
            cin>>par[i];
            g[par[i]].push_back(i+2);
        }
        chCnt(g,1,nodeCnt);
        cout<<dfs(g,nodeCnt,1)<<endl;
    }
}