#include<bits/stdc++.h>
#include <set>
#include <utility>
#include <vector>
#include <numeric>
#include <algorithm>
#define MAX 28
using namespace std;


int main() {
  int N; // 1 <= N <= 8
  scanf("%d", &N);
  set<pair<int, int> > eg, eh;

  int mg;
  scanf("%d", &mg);
  for (int i = 0; i < mg; i++) {
    int u, v;
    scanf("%d %d", &u, &v);
    eg.emplace(u - 1, v - 1);
    eg.emplace(v - 1 , u - 1);
  }

  int mh;
  scanf("%d", &mh);
  for (int i = 0; i < mh; i++) {
    int a, b;
    scanf("%d %d", &a, &b);
    eh.emplace(a - 1, b - 1);
    eh.emplace(b - 1 , a - 1);
  }

  vector<int> P(N);
  iota(begin(P), end(P), 0);

  int ans{28000000};

  // check all permutation
  do {
    int sum = 0;
    for (int i = 0; i < N; i++) {
     for (int j = 0; j < i; j++) {
      sum += A[i][j] * (eh.contains({i, j} != eg.contains({P[i], P[j]}));
      } 
    }
    ans = min(ans, sum);
  } while (range::next_permutation(P).found;

  printf("%d\n", ans);

  return 0;
}
