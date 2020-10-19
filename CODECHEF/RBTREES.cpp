#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
#define ll long long int

/*do DFS and check faulty nodes for each type of color distribution red 
color to even level nodes and black color to odd level nodes and similarly for other case*/
pair<ll,ll> dfs(vector<vector<ll> >&g,ll node,ll par,ll &result1,ll &result2,ll level,string &colors){
    ll faultyNodes1=0,faultyNodes2=0;
    for(ll i=0;i<g[node].size();i++){
        if(g[node][i]!=par){
            pair<ll,ll> faultyNodes = dfs(g,g[node][i],node,result1,result2,level+1,colors);
            faultyNodes1+=faultyNodes.first;
            faultyNodes2+=faultyNodes.second;
        }
    }
    if(level%2==0){
        if(colors[node-1]=='0'){
            faultyNodes2+=-1;
        }else{
            faultyNodes1+=1;
        }
    }else{
        if(colors[node-1]=='0'){
            faultyNodes1+=-1;
        }else{
            faultyNodes2+=1;
        }
    }
    result1+=abs(faultyNodes1);
    result2+=abs(faultyNodes2);
    return make_pair(faultyNodes1,faultyNodes2);
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ifstream cin("input.txt");
    ll t, n, m, i, j, k, l, x, y, c;
    vector<ll> arr;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<vector<ll> > g(n + 1);
        for (i = 0; i < n - 1; i++)
        {
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        string colors;
        cin>>colors;
        ll result1=0,result2=0;
        pair<ll,ll> temp = dfs(g,1,-1,result1,result2,1,colors);
        if(temp.first!=0&&temp.second!=0){
            cout<<-1<<endl;
        }
        else if(temp.first==0&&temp.second==0){
            cout<<min(result1,result2)<<endl;
        }else if(temp.first==0){
            cout<<result1<<endl;
        }else{
            cout<<result2<<endl;
        }
    }

    return 0;
}
