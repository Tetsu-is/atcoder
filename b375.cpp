#include <bits/stdc++.h>
using namespace std;

double calc_cost(double a, double b, double c, double d)
{
  double dx = a - c;
  double dy = b - d;
  return sqrt(pow(dx, 2) + pow(dy, 2));
}

int main()
{
  int n;
  double x = 0, y = 0;
  double t_x = 0, t_y = 0;
  double total = 0;

  scanf("%d", &n);
  for (size_t i = 0; i < n; i++)
  {
    scanf("%lf %lf", &t_x, &t_y);
    double ret = calc_cost(x, y, t_x, t_y);
    total += ret;
    x = t_x;
    y = t_y;
  }

  double ret = calc_cost(x, y, 0, 0);
  total += ret;

  printf("%lf\n", total);

  return 0;
}
