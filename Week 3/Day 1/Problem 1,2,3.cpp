//Problem link:- https://codeforces.com/problemset/problem/1535/A

#include<bits/stdc++.h>
using namespace std;

int main(){
       int t;
       cin>>t;
       
       while(t--){
              int arr[4];
              for(int i=0; i<4; i++){
                     cin>>arr[i];
              }
              int a=max(arr[0],arr[1]);
              int b=max(arr[2],arr[3]);
              
              sort(arr,arr+4);
              
              if(a>b){
                     swap(a,b);
              }
              if(a==arr[2] && b==arr[3])
              cout<<"YES"<<endl;
              else
              cout<<"NO"<<endl;
       }
       return 0;
}


// yt refer video link:- https://youtu.be/3HUG4qemQH0
