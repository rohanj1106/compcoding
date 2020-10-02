#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
#define ll long long int

ll natSum(ll n){
    return ((n*(n+1))/2);
}

ll partition(ll n){
    ll sum = natSum(n);
    if(sum%2==1){
        return -1;
    }
    ll l=1,h=n;
    while(l<=h){
        ll mid=l+(((h-l))/2);
        ll diff = (sum/2)-natSum(mid);
        cout<<mid<<" "<<diff<<" "<<natSum(mid)<<" "<<sum<<endl;
        if(diff>=1&&diff<=(n-1)){
            return mid;
        }else if(diff>(n-1)){
            l=mid+1;
        }else{
            h=mid-1;
        }
    }
    return -1;
}
int main()
{
    ifstream cin("input.txt");
    ll t, n, m, i, j, k, l, x, y, c;
    cin>>t;
    //cout<<t<<endl;
    while (t--)
    {
        cin>>n;
        cout<<partition(n)<<endl;
    }
}