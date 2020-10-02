#include <iostream>
#include <vector>
#include <fstream>
#include <set>
using namespace std;
#define ll long long int
int main()
{
    ifstream cin("input.txt");
    ll t, n, m, i, j, k, l, x, y, c;
    cin>>t;
    while (t--)
    {
        cin>>n>>k>>x>>y;
        ll curr = x;
        set<ll> se;
        se.insert(curr);
        if(x==y){
            cout<<"YES\n";
            continue;
        }
        ll flag=0;
        for(i=1;i<=n;i++){
            curr=(curr+k)%n;
            if(curr==y){
                cout<<"YES\n";
                flag=1;
                break;
            }
            if(se.find(curr)!=se.end()){
                break;
            }
            se.insert(curr);
        }
        if(!flag){
            cout<<"NO\n";
        }
    }
}