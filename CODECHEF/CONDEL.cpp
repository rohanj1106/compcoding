#include <iostream>
#include <vector>
#include <fstream>
#include <climits>
using namespace std;
#define ll long long int
int main()
{
    ifstream cin("input.txt");
    ll t, n, m, i, j, k, l, x, y, c;
    cin >> t;
    while (t--)
    {
        cin>>n>>k;
        vector<ll> arr(n);
        ll oneCount = 0;
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1){
                oneCount++;
            }
        }
        if(k==1||oneCount==0){
            cout<<oneCount<<endl;
            continue;
        }
        ll ans = 0,l=0,r=0,currOneCount=0,minOneCount=INT_MAX;
        while(r<=k-1){
            if(arr[r]==1){
                currOneCount++;
            }
            r++;
        }
        minOneCount = currOneCount;
        r--;
        while(r<n-1){
            if(arr[l]==1){
                currOneCount--;
            }
            l++;
            r++;
            if(arr[r]==1){
                currOneCount++;
            }
            minOneCount=min(minOneCount,currOneCount);
        }
        ans+=(minOneCount*(minOneCount+1))/2;
        ans+=oneCount-minOneCount;
        cout<<ans<<endl;
    }
}