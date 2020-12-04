#include <iostream>
#include <vector>
#include <fstream>
#include <queue>
#include <math.h>
using namespace std;
#define ll long long int
void primeFactors(priority_queue<ll,vector<ll>,greater<ll> > &pq,ll x){
    ll y=x;
    for(ll i=2;i<=sqrt(x);i++){
        ll temp=1;
        while(x%i==0){
            temp=temp*i;
            x=x/i;
        }
        if(temp!=1){
            pq.push(temp);
        }
    }
    if(x>2){
        pq.push(x);
    }
}
int main()
{
    ifstream cin("input.txt");
    ll t, n, m, i, j, k, l, x, y, c;
    cin >> t;
    while (t--)
    {
        cin>>k>>x;
        priority_queue<ll,vector<ll>,greater<ll> > pq;
        primeFactors(pq,x);
        ll ans=0;
        /*while(!pq.empty()){
            cout<<pq.top()<<endl;
            pq.pop();
        }*/
        if(k>=pq.size()){
            for(i=0;i<k-pq.size();i++){
                ans+=1;
            }
            while(!pq.empty()){
                ans+=pq.top();
                pq.pop();
            }
        }else{
            while(pq.size()>k){
                ll temp1=pq.top();
                pq.pop();
                ll temp2=pq.top();
                pq.pop();
                pq.push(temp1*temp2);
            }
            while(!pq.empty()){
                ans+=pq.top();
                pq.pop();
            }
        }
        cout<<ans<<endl;
    }
}