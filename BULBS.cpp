#include <iostream>
#include <vector>
#include <fstream>
#include <utility> 
using namespace std;
#define ll long long int
ll n;
bool comp(pair<ll,ll> p1,pair<ll,ll> p2){
    if((p1.second-p1.first)==(p2.second-p2.first)){
        if(p1.first==0||p1.second==(n-1)){
            return true;
        }
        return false;
    }
    return (p1.second-p1.first)>(p2.second-p2.first);
}
int main() {
    ifstream cin("input.txt");
    ll t,m,i,j,k,l,x,y,c;
    cin>>t;
    while(t--){
        cin>>n>>k;
        string str;
        cin>>str;
        vector<pair<ll,ll> > arr;
        ll l=0,r=0,ans=0;
        for(i=0;i<str.length();i++){
            if(str[i]=='0'){
                ans++;
            }
            if(str[i]=='0'){
                if(i==0||str[i-1]=='1'){
                    l=i;
                    r=i;
                }else{
                    r++;
                }
            }else{
                if(str[l]=='0'){
                    arr.push_back(make_pair(l,r));
                }
                
                l=i;
                r=i;
            }
        }
        if(str[l]=='0'){
            arr.push_back(make_pair(l,r));
        }
        //cout<<ans<<endl;
        sort(arr.begin(),arr.end(),comp);
        for(i=0;i<arr.size();i++){
            cout<<arr[i].first<<" "<<arr[i].second<<endl;
            if(k==0){
                break;
            }
            if(arr[i].first==0||arr[i].second==(n-1)){
                k--;
                ans=ans-(arr[i].second-arr[i].first+1);
            }else if(k>=2){
                k=k-2;
                ans=ans-(arr[i].second-arr[i].first+1);
            }
        }
        cout<<ans<<endl;
    }
}