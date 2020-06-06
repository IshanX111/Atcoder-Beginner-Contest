#include<bits/stdc++.h>
using namespace std;
int main(){

   int x,a,b,i,c;
   cin>>x>>a>>b;
   c=0;
   for(i=a;i<=b;i++){
        if(i%x==0){
            c++;
            break;
        }
   }
   if(c==0){
    cout<<"NG"<<endl;
   }
   else{
        cout<<"OK"<<endl;
   }



}
