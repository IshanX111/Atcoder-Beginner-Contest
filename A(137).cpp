#include<bits/stdc++.h>
using namespace std;
int main(){


    int a,b;
    cin>>a>>b;
    int res;
    res=max((a+b),(a-b));
    res=max((a*b),res);
    cout<<res<<endl;

}


