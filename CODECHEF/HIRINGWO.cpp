#include <iostream>
#include <vector>
#include <fstream>
#include <queue>
#include <math.h>
using namespace std;
#define ll long long int
void primeFactors(ll x,vector<ll>& pf){
    for(ll i=2;i<=sqrt(x)+1;i++){
        ll temp = 1;
        while(x%i==0){
            temp=temp*i;
            x=x/i;
        }
        if(temp!=1){
            pf.push_back(temp);
        }
    }
    if(x>2){
        pf.push_back(x);
    }
}
void mergeFactorsHelper(vector<ll> &factors,vector<ll> &groups,ll &minSum,ll currIdx){
    if(currIdx==factors.size()){
        //cout<<"currIDx "<<currIdx<<endl;
        ll sum=0;
        //cout<<"start\n";
        for(ll i=0;i<groups.size();i++){
            //cout<<groups[i]<<" ";
            sum+=groups[i];
        }
        //cout<<"\nendl\n";
        minSum=min(minSum,sum);
        return;
    }
    for(ll i=0;i<groups.size();i++){
        groups[i]=groups[i]*factors[currIdx];
        mergeFactorsHelper(factors,groups,minSum,currIdx+1);
        groups[i]=groups[i]/factors[currIdx];
    }
}
ll mergeFactors(vector<ll>& factors,ll &reqFactorCount){
    ll minSum=INT_MAX;
    vector<ll> groups(reqFactorCount,1);
    mergeFactorsHelper(factors,groups,minSum,0);
    return minSum;
}
int main()
{
    ifstream cin("input.txt");
    ll t, n, m, i, j, k, l, x, y, c;
    cin>>t;
    while (t--)
    {
        cin>>k>>x;
        vector<ll> pf;
        primeFactors(x,pf);
        ll ans = 0;
        /*for(i=0;i<pf.size();i++){
            cout<<pf[i]<<" ";
        } 
        cout<<endl;*/
        if(k>=pf.size()){
            //cout<<"start1\n";
            for(i=0;i<pf.size();i++){
                //cout<<pf[i]<<" ";
                ans+=pf[i];
            }
            //cout<<endl;
            //cout<<"end1\n";
            ans+=k-pf.size();
        }else{
            ans = mergeFactors(pf,k);
        }
        cout<<ans<<endl;
    }
}