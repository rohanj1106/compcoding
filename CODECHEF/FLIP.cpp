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
        string a,b;
        cin>>a;
        cin>>b;
        bool seg1=false,seg2=false;
        n=a.length();
        bool state = false;
        ll ans=0;
        for(i=0;i<n;i=i+2){
            if(state){
                if(a[i]==b[i]){
                    state=false;
                }
            }else{
                if(a[i]!=b[i]){
                    //cout<<"i= "<<i<<endl;
                    ans++;
                    state=true;
                }
            }
        }
        //cout<<"ans= "<<ans<<endl;
        state=false;
        for(i=1;i<n;i=i+2){
            if(state){
                if(a[i]==b[i]){
                    state=false;
                }
            }else{
                if(a[i]!=b[i]){
                    ans++;
                    state=true;
                }
            }
        }
        cout<<ans<<endl;
    }
}