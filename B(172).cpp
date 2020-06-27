#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    string s,t;
    cin>>s>>t;
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s.at(i)!=t.at(i)){
            c++;
        }
    }
    cout<<c<<endl;





}

