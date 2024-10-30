#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
  int m;
  double km;
  int vv;
  cin >> m;
  
  km = (double) m / 1000;

  if (km < 0.1) {
    vv = 0;
  } else if(km <= 5) {
    vv = km * 10;
  } else if(6 <= km && km <= 30) {
    vv = km + 50;
  } else if (35 <= km && km <= 70) {
    vv = (km - 30) / 5 + 80; 
  } else if (70 < km) {
    vv = 89;
  }

  printf("%02d\n", vv);
  return 0;
}
