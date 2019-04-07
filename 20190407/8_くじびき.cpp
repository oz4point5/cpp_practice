#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 50;

int main(){

  int n,m;
  int k[MAX_N];

  scanf("%d%d",&n,&m);
  for (int i = 0; i < n; i ++){
    scanf("%d",&k[i]);
  }

  bool ans = false;

  for(int a = 0; a < n; a ++){
    for(int b = 0; b < n; b++){
      for(int c = 0; c < n; c++){
        for(int d = 0; d < n; d++){
          if(k[a]+k[b]+k[c]+k[d] == m){
            ans = true;
          }
        }
      }
    }
  }

  if (ans) puts("Yes");
  else puts("No");

}
