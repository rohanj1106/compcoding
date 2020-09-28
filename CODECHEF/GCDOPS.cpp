#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm> 
#include <numeric>
using namespace std;
#define ll long long int
int gcd(int a, int b)
{
    // Everything divides 0 
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
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
        bool flag = true;
        for(i=0;i<n;i++){
            if((i+1)%arr[i]!=0){
                flag=false;
                //cout<<i<<endl;
                break;
            }
        }
        string ans = flag ? "YES\n" : "NO\n";
        cout<<ans;
    }
}