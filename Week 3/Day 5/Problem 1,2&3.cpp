//Problem Link:- https://codeforces.com/problemset/problem/1633/C

#include<bits/stdc++.h>
using namespace std;

void solve()
{
  long long int h1, p1, h2, p2;
  cin >> h1 >> p1 >> h2 >> p2;
  int k, attack, health;
  cin >> k >> attack >> health;
  for(int i = 0; i <= k; i++) {
   long long int na = h1 + (i * health);
   long long int nb = p1 + ((k - i) * attack);
   long long int ans1 = (h2 / nb) + (h2 % nb != 0);
   long long int ans2 = (na / p2) + (na % p2 != 0);
    if(ans1 <= ans2) {
        cout << "YES\n";
        return;
    }
  }
  cout << "NO\n";
}

int main(){
       int t;
       cin>>t;
       while(t--){
              solve();
       }
       return 0;
}


//yt refernce video :-https://youtu.be/l1pwMhXLm4k
