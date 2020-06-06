#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int d;
    d=n%10;
    if(d==2 || d==4 || d==5 ||d==7 || d==9){
        cout<<"hon"<<endl;
    }
    else if(d==0 || d==1 || d==6 || d==8){
            cout<<"pon"<<endl;
    }
    else{
        cout<<"bon"<<endl;
    }

}

