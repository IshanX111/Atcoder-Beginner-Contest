#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
    int l=s.size();
    int c=0;
    for(int i=0;i<l;i++){
        if(s.at(i)=='7'){
            c++;
            break;
        }
    }
    if(c!=0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }



}




