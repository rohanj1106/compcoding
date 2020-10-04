#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
#define ll long long int
int main()
{
    ifstream cin("input.txt");
    ll t, n, m, i, j, k, l, x, y, c,q;
    cin >> t;
    while (t--)
    {
        cin>>n>>k;
        ll sum=0,prevReq=0;
        bool flag = false;
        for(i=0;i<n;i++){
            cin>>q;
            if(q+prevReq<k){
                cout<<i+1<<endl;
                flag=true;
                break;
            }else{
                prevReq=q+prevReq-k;
            }
        }
        if(!flag){
            cout<<n+(prevReq/k)+1<<endl;
        }
    }
}