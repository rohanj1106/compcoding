#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
#define ll long long int
void dfs(vector<vector<ll> >&g,ll node,ll par,ll &ocount,ll &ecount,ll lev){
    ll i;
    if(lev%2==0){
        ecount++;
    }else{
        ocount++;
    }
    for(i=0;i<g[node].size();i++){
        if(g[node][i]!=par){
            dfs(g,g[node][i],node,ocount,ecount,lev+1);
        }
    }
}
ll dfs1(vector<vector<ll> >&g,ll node,ll req,ll &moves,ll par,ll lev,ll &state,string &colors){
    ll i;
    for(i=0;i<g[node].size();i++){
        if(g[node][i]!=par){
            
        }
    }
    if(state==0){
        if(lev%2==0&&colors[lev-1]==1){
            moves++;
        }
    }else{

    }
}
int main() {
    ifstream cin("input.txt");
    ll t,n,m,i,j,k,l,x,y,c;
    vector<ll> arr;
    cin>>t;
    while(t--){
        cin>>n;
        vector<vector<ll> > g(n+1);
        for(i=0;i<n-1;i++){
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        string colors;
        cin>>colors;
        cout<<colors<<endl;
        ll ocount=0,ecount=0,onecount=0,zcount=0,state,moves=0,req=0;
        for(i=0;i<colors.length();i++){
            if(colors[i]==0){
                zcount++;
            }else{
                onecount++;
            }
        }
        if(zcount==ecount){
            state=0;
        }else{
            state=1;
        }
        dfs(g,1,-1,ocount,ecount,0);
        cout<<ocount<<" "<<ecount<<endl;
    }

	return 0;
}
