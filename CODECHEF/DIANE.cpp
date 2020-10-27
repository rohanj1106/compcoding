#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
#define ll long long int
ll p=99991;
int main()
{
    ifstream cin("input.txt");
    ll t, n, m, i, j, k, l, x, y, c, d;
    cin >> t;
    while (t--)
    {
        cin>>d;
        if(d%(p-1)==0){
            n=1+(d/(p-1));
            cout<<n<<endl;
            cout<<p<<" ";
            for(i=0;i<n-1;i++){
                cout<<100000<<" ";
            }
        }else{
            ll n1=(d/(p-1));
            ll n = 1+(d/(p-1))+(n1==0?1:3);
            cout<<n<<endl;
            cout<<p<<" ";
            for(i=0;i<(d/(p-1));i++){
                cout<<100000<<" ";
            }
            if(n1!=0){
                cout<<1<<" "<<p<<" ";
            }
            cout<<(d%(p-1))+1<<endl;
        }
    }
}