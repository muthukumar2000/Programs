#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int MOD=1e9+7;
int main()
{
    ll n,a,sum=1;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        sum=(2*sum)%MOD;
    }
    cout<<sum;
}