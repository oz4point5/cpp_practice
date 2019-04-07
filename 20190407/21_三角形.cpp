#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  scanf("%d",&n);
  int a[n];
  for(int i = 0;i < n;i++){
    scanf("%d",&a[i]);
  }

  int ans = 0;

  for(int i = 0;i < n;i++){
    for(int j = i + 1;j < n;j++){
      for(int k = j + 1;k < n;k++){
        int max_len = max(max(a[i],a[j]),a[k]);
        if(max_len * 2 < a[i] + a[j] + a[k]){
          ans = max(ans,a[i]+a[j]+a[k]);
        }
      }
    }
  }

  cout << ans << endl;

}
