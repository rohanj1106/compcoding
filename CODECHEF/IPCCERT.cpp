#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
#define ll long long int
int main()
{
    ifstream cin("input.txt");
    ll t, n, m, i, j, k, l, x, y, c;
    cin>>n>>m>>k;
    ll ans=0;
    for(i=0;i<n;i++){
        ll sum=0;
        for(j=0;j<k;j++){
            cin>>x;
            sum+=x;
        }
        cin>>y;
        if(sum>=m&&y<=10){
            ans++;
        }
    }
    cout<<ans<<endl;
}