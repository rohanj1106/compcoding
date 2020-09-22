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
        ll ans=0,count=0;
        vector<ll> arr(n);
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>0){
                ans+=arr[i];
                count++;
            }
        }
        if(ans==0){
            cout<<0<<endl<<0<<endl;
            continue;
        }
        vector<ll> temp;
        for(i=0;i<count;i++){
            if(arr[i]<=0){
                temp.push_back(i+1);
            }
        }
        for(i=count;i<n;i++){
            if(arr[i]>0){
                temp.push_back(i+1);
            }
        }
        cout<<ans<<endl;
        cout<<temp.size()<<" ";
        for(i=0;i<temp.size();i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;
    }
}