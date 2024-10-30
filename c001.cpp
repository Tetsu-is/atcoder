#include <bits/stdc++.h>
using namespace std;

struct Edge {
  int p;
  int c;
 }; 

int main (int argc, char *argv[]) {
  int n, mg, mh;
  int t1, t2;
  int a[8][8]

  vector<Edge> g[28];
  vector<Edge> h[28];

  cin >> n >> mg;
  for (int i = 0; i <= mg ; i++) {
      cin >> t1 >> t2;
      Edge e;
      e.p = t1;
      e.c = t2;
      g.push_back(e);
  }

  cin >> mh;
  for (int i = 0; i < mh; i++) {
    cin >> t1 >> t2;
    Edge e;
    e.p = t1;
    e.c = t2;
    h.push_back(e)
  }

  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j++) {
      cin >> a[i][j];
    }
  }

  // here

  
  return 0;
}
