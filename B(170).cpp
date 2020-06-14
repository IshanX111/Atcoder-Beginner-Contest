#include<bits/stdc++.h>
using namespace std;
int main(){

    int x,y;
    cin>>x>>y;
    int res1=x*2;
    int res2=x*4;
    if(y>=res1 && y<=res2){

        if(y%2==0 || y%4==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
    else{
        cout<<"No"<<endl;
    }





}

