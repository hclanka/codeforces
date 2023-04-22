#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int a[n][3];
  int sum = 0;
  int b[n];

  for (int i = 0; i < n; i++)
  {
    b[i] = 0;
    for (int j = 0; j < 3; j++)
    {
      cin >> a[i][j];
      b[i] = b[i] + a[i][j];
    }
    if (b[i] >= 2)
    {
      sum += 1;
    }
  }

  cout << sum;
}
