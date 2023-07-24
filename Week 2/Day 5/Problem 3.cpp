// Problem Link:- https://codeforces.com/problemset/problem/1343/A

#include <bits/stdc++.h>
using namespace std;

int main(){
       
       int t;
       cin>>t;
       while (t--){
       int n;
       cin>>n;
       int x;
       
       for(int k=2; k<=35; k++){
              int den=pow(2,k)-1;
              if(n%den)
              continue;
              
              x=n/den;
              break;
       }
       cout<<x<<endl;
}
       return 0;
}
