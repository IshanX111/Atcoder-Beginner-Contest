#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    ll x,c1=0,c2=0;
    cin>>x;

    c1=x/500;

    ll rem=x%500;
    c2=rem/5;
    cout<<(c1*1000)+(c2*5)<<endl;


}
