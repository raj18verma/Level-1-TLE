//Problem Link:- https://codeforces.com/problemset/problem/703/A

#include<bits/stdc++.h>
using namespace std;

int main(){
       
       int t;
       cin>>t;
       int a,b,count=0;
       while(t--){
              cin>>a>>b;
              if(a>b)
              count++;
              else if(b>a)
              count--;
       }
       if(count==0){
              cout<<"Friendship is magic!^^"<<endl;
       }else if(count>0){
              cout<<"Mishka"<<endl;
       }else{
              cout<<"Chris"<<endl;
       }
       
       return 0;
}
