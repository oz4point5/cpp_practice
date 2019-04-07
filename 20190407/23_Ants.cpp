#include<bits/stdc++.h>
using namespace std;

int main(){

  int L,n;
  scanf("%d%d",&L,&n);
  int x[n];
  for(int i=0;i<n;i++){
    scanf("%d",&x[i]);
  }

  int minTime = 0;
  int maxTime = 0;

  for(int i=0;i<n;i++){
    minTime = max(minTime,min(x[i],L-x[i]));
  }
  cout << minTime << endl;

  for(int i=0;i<n;i++){
    maxTime = max(maxTime,max(x[i],L-x[i]));
  }
  cout << maxTime << endl;

}
