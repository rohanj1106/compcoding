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
        ll L,R;
        cin>>L>>R;
        if(R<2*L){
            cout<<R<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}