#include <iostream>
#include <vector>
#include <fstream>
#include <math.h>
using namespace std;
#define ll long long int
bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
int main()
{
    ifstream cin("input.txt");
    ll t, n, m, i, j, k, l, x, y, c;
    cin >> t;
    while (t--)
    {
        cin>>n;
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        if(isPowerOfTwo(n)){
            cout<<-1<<endl;
            continue;
        }
        cout<<2<<" "<<3<<" "<<1<<" ";
        for(i=4;i<=n;i++){
            if(isPowerOfTwo(i)){
                cout<<i+1<<" "<<i<<" ";
                i++;
                continue;
            }else{
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}