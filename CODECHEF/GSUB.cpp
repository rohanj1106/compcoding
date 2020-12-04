#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
#define ll long long int
int main()
{
    ifstream cin("input.txt");
    ll t, n, m, i, j, k, l, x, y, c, q;
    cin >> t;
    while (t--)
    {
        cin>>n>>q;
        vector<ll> arr(n+1);
        for(i=1;i<=n;i++){
            cin>>arr[i];
        }
        ll currSeq=0,temp=-1;
        for(i=1;i<=n;i++){
            if(arr[i]!=temp){
                currSeq++;
                temp=arr[i];
            }
        }
        for(i=0;i<q;i++){
            cin>>x>>y;
            if(x==1){
                if(arr[x]!=arr[x+1]&&y==arr[x+1]){
                    currSeq--;
                }else if(arr[x]==arr[x+1]&&y!=arr[x+1]){
                    currSeq++;
                }
            }else if(x==n){
                if(arr[x]!=arr[x-1]&&y==arr[x-1]){
                    currSeq--;
                }else if(arr[x]==arr[x-1]&&y!=arr[x-1]){
                    currSeq++;
                }
            }else{
                if(arr[x]!=arr[x-1]&&arr[x]!=arr[x+1]&&(y==arr[x-1]||y==arr[x+1])){
                    if(y==arr[x-1]&&y==arr[x+1]){
                        currSeq=currSeq-2;
                    }else{
                        currSeq--;
                    }
                }else if((arr[x]==arr[x-1]||arr[x]==arr[x+1])&&y!=arr[x-1]&&y!=arr[x+1]){
                    if(y==arr[x-1]&&y==arr[x+1]){
                        currSeq=currSeq+2;
                    }else{
                        currSeq++;
                    }
                }
            }
            arr[x]=y;
            cout<<currSeq<<endl;
        }
    }
}