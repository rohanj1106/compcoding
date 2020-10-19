#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
#define ll long long int
void dfs(vector<vector<ll> >&g,ll node,ll par,bool parity,vector<ll>& ans){
    if(parity){
        ans[node]=1;
    }else{
        ans[node]=2;
    }
    //cout<<node<<" "<<parity<<endl;
    for(ll i=0;i<g[node].size();i++){
        if(g[node][i]!=par){
            dfs(g,g[node][i],node,!parity,ans);
        }
    }
}
int main()
{
    ifstream cin("input.txt");
    ll t, n, m, i, j, k, l, x, y, c;
    cin >> t;
    while (t--)
    {
        cin>>n;
        vector<vector<ll> >g(n+1);
        for(i=0;i<n-1;i++){
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        vector<ll> ans(n+1,-1);
        dfs(g,1,-1,true,ans);
        for(i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}