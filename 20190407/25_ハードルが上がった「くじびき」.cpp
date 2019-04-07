#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 50;

bool binary_search(int x);
void output(int *k);
int n,m;

int main(){

  int n,m;
  scanf("%d%d",&n,&m);
  int k[n];
  for(int i=0;i<n;i++){
    scanf("%d",&k[i]);
  }

  output(k);

}

void output(int *k){
  for(int i = 0; i < n; i ++){
    cout << k[i] << endl;
  }
}

bool binary_serach(int x,int *k){
  int left = 0;
  int right = 0;
  while(right - left >= 1){
    int i = (left + right) / 2;
    if(k[i] == x){
      return true;
    } else if(k[i] > x){
      left = i + 1;
    } else {
      right = i;
    }
  }
  return false;
}
