#include <bits/stdc++.h>
using namespace std;
main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if ( a == b + c || b == c + a || c == a + b ){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
