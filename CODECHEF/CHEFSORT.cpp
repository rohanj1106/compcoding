#include <iostream>
#include <vector>
#include <fstream>
#include <math.h>
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
        ll cnt1=0,cnt2=0;
        for(i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                cnt1++;
            }else if(arr[i]>arr[i-1]){
                cnt2++;
            }
        }
        if(cnt1<=(n/2)){
            cout<<cnt1<<endl;
        }else{
            cout<<cnt2+1<<endl;
            ll k = pow(2,30)-1;
            cout<<3<<" "<<n<<" "<<k<<endl;
            for(i=0;i<n;i++){
                arr[i]=arr[i]^k;
            }
        }
        for(i=n-1;i>=1;i--){
            if(arr[i]<arr[i-1]){
                cout<<2<<" "<<i+1<<" "<<arr[i-1]-arr[i]<<endl;
            }
        }
    }
}