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
        vector<ll> arr(n);
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        bool temp=false;
        for(i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                temp=true;
            }
        }
        if(temp){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
}