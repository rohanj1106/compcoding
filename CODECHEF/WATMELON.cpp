#include <iostream>
#include <vector>
#include <fstream>
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
        ll sum=0;
        for(i=0;i<n;i++){
            cin>>x;
            sum+=x;
        }
        if(sum>=0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}