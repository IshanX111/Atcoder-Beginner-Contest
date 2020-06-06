#include<bits/stdc++.h>
using namespace std;
int main(){

    int a;
    double res;
    cin>>a;
    if(a%2==0){
        res=a/2;
    }
    else{
        res=(a/2)+1;
    }
    res=double(res/a);
    printf("%.10f\n",res);





}


