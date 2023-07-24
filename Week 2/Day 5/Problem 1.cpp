//Problem link:- https://codeforces.com/problemset/problem/1360/A

#include<bits/stdc++.h>
using namespace std;

int main(){
       
       long long t;
       cin>>t;
       while(t--){
              long long a,b;
              cin>>a>>b;
              
              long long mini=min(a,b);
              long long maxi=max(a,b);
              long long ans=max(mini*2,maxi);
              cout<<ans*ans<<endl;
       }
       
       return 0;
}
