#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
#define ll long long int
int main()
{
    ifstream cin("input.txt");
    ll t, n, m, i, j, k, l, x, y, c, p;
    cin >> t;
    while (t--)
    {
        cin>>n>>x>>p>>k;
        ll elementsLessThanX=0,elementsGreaterThanX=0;
        vector<ll> arr(n);
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<x){
                elementsLessThanX++;
            }
            if(arr[i]>x){
                elementsGreaterThanX++;
            }
        }
        ll ans=0;
        if(elementsLessThanX>(p-1)){
            if(k<=elementsLessThanX && (elementsLessThanX-k+1)>=(elementsLessThanX-(p-1))){
                ans=elementsLessThanX-(p-1);
            }else{
                ans=-1;
            }
        }
        else if(elementsGreaterThanX>(n-p)){
            if(k>(n-elementsGreaterThanX) && (k-(n-elementsGreaterThanX))>=(elementsGreaterThanX-(n-p))){
                ans=(elementsGreaterThanX-(n-p));    
            }else{
                ans=-1;
            }
        }
        cout<<ans<<endl;
    }
}