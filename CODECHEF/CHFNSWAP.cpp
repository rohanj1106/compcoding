#include <iostream>
#include <vector>
#include <fstream>
#include <math.h>
using namespace std;
#define ll long long int

ll sumOfNaturalNumbers(ll n){
    return ((n*(n+1))/2);
}
ll getHalfSumPoint(ll n){
    ll sum = sumOfNaturalNumbers(n);
    double D = sqrt(1.0+(4.0)*(double)(sum));
    return ((D-1)/2);
}
ll nc2(ll n){
    return ((n*(n-1))/2);
}
int main()
{
    ifstream cin("input.txt");
    ll t, n, m, i, j, k, l, x, y, c;
    cin>>t;
    while (t--)
    {
        cin>>n;
        ll sum = sumOfNaturalNumbers(n);
        if(sum%2==1){
            cout<<0<<endl;
            continue;
        }
        ll halfSumPoint = getHalfSumPoint(n);
        //cout<<halfSumPoint<<" "<<sumOfNaturalNumbers(halfSumPoint)<<" "<<sumOfNaturalNumbers(n)<<endl;
        if(sum==2*sumOfNaturalNumbers(halfSumPoint)){
            cout<<nc2(halfSumPoint)+nc2(n-halfSumPoint)+(n-halfSumPoint)<<endl;
        }else{
            cout<<(n-halfSumPoint)<<endl;
        }
    }
}