#include<bits/stdc++.h>
using namespace std;
int main(){

    string s1,s2;
    cin>>s1>>s2;
    int l=s1.size();
    int c=0;
    for(int i=0;i<l;i++){
        if(s1.at(i)!=s2.at(i)){
            c++;
            break;
        }
    }
    if(c==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }





}
