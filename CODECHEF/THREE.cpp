#include <iostream>
#include <vector>
#include <algorithm>
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
        string str;
        cin>>str;
        vector<ll> arr(30,0);
        ll ans=0;
        for(i=0;i<str.length();i++){
            arr[str[i]-'a']++;
        }
        ll two_cnt=0,one_cnt=0;
        for(i=0;i<30;i++){
            two_cnt += (arr[i]/2);
            if(arr[i]%2==1){
                one_cnt++;
            }
        }
        while(two_cnt!=0){
            if(one_cnt==0&&two_cnt==1){
                break;
            }
            if(one_cnt!=0){
                ans++;
                two_cnt--;
                one_cnt--;
            }else{
                two_cnt--;
                one_cnt+=2;
                ans++;
                two_cnt--;
                one_cnt--;
            }
        }
        cout<<ans<<endl;
    }
}