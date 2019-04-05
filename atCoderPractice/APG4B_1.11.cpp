#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  // ここにプログラムを追記
    string op;
    int b;
  for(int i = 1;i <= N;i ++){
    cin >> op >> b;
    if(op == "+"){
      cout << i << ":";
      A += b;
      cout << A << endl;
    }else if(op == "-"){
      cout << i << ":";
      A -= b;
      cout << A << endl;
    }else if(op == "*"){
      cout << i << ":";
      A *= b;
      cout << A << endl;
    }else if(op == "/" && b != 0){
      cout << i << ":";
      A /= b;
      cout << A << endl;
    }else{
      cout << "error" << endl;
      break;
    }
  }
}
