#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
#define ll long long int
void swap_rows(vector<vector<ll> >&mat,ll r1,ll r2){

}
ll forwardElimination(vector<vector<ll> >& mat){
    ll n = mat.size();
    for(ll i=0;i<n;i++){
        ll max_pivot=i,pivot_val=mat[i][i];
        for(ll j=i+1;j<n;j++){
            if(mat[j][i]>pivot_val){
                pivot_val = mat[j][i];
                max_pivot = j;
            }
        }
        if(!mat){

        }
        if(max_pivot!=i){
            swap_rows(mat,i,max_pivot);
        }
    }
}
void gaussElimination(vector<vector<ll> >& mat,vector<ll>& ans){
    ll singular_flag=forwardElimination(mat);
}
int main()
{
    ifstream cin("input.txt");
    ll t, n, m, i, j, k, l, x, y, c;
    cin >> t;
    while (t--)
    {
        
    }
}