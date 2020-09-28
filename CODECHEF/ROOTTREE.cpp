#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm> 
#include <numeric>
#include <map>
using namespace std;
#define ll long long int
int main()
{
    ifstream cin("input.txt");
    ll t, n, m, i, j, k, l, x, y, c;
    cin >> t;
    while (t--)
    {
        cin>>n;
        vector<ll> indeg(n+1,0);
        ll ans=0;
        for(i=0;i<n-1;i++){
            cin>>x>>y;
            indeg[y]++;
        }
        for(i=1;i<=n;i++){
            ans+=max((ll)0,indeg[i]-1);
        }
        cout<<ans<<endl;
    }
}