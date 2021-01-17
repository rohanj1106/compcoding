#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
#define ll long long int
int main()
{
    ifstream cin("input.txt");
    ll t, n, m, i, j, k, l, x, y, c, q, v;
    cin >> t;
    while (t--)
    {
        cin>>n>>m;
        vector<vector<ll>> arr(n,vector<ll>(m,0));
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>arr[n][m];
            }
        }
        cin>>q;
        for(i=0;i<q;i++){
            cin>>x>>y>>v;
        }
        
    }
}