#include <iostream>
#include <vector>
#include <fstream>
#include <set>
using namespace std;
#define ll long long int
int main()
{
    ifstream cin("input.txt");
    ll t, n, m, i, j, k, l, x, y, c;
    cin >> t;
    while (t--)
    {
        cin>>n;
        string str;
        cin>>str;
        set<char> se;
        for(i=0;i<str.length()-1;i++){
            se.insert(str[i]);
        }
        if(se.find(str[n-1])!=se.end()){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}