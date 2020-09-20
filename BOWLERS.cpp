#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
#define ll long long int
int main() {
    ifstream cin("input.txt");
    ll t,n,m,i,j,k,l,x,y,c;
    cin>>t;
    while(t--){
        cin>>n>>k>>l;
        if((k*l)<n||(k==1&&n>1)){
            cout<<-1<<endl;
        }else{
            for(i=0;i<n;){
                for(j=1;j<=k&&i<n;j++,i++){
                    cout<<j<<" ";
                }
            }
            cout<<endl;
        }
    }
}