#include <bits/stdc++.h>
using namespace std;
main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if ( a == b && b == c){
    cout << 1 << endl;
  } else if ( a == b || b == c || c == a ){
    cout << 2 << endl;
  } else {
    cout << 3 << endl;
  }
}
