#include <bits/stdc++.h>
using namespace std;
main()
{
	long long a,b,x;
  cin >> a >> b >> x;

  long long c;
  if(a % x == 0){
    cout << b/x - a/x + 1 << "\n";
  } else {
    cout << b/x - a/x << "\n";
  }
}
