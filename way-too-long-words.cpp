#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
  int n;
  cin >> n;
 
  string a[n];
 
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
 
  for (int i = 0; i < n; i++) {
    if (a[i].size() > 10) {
      cout << a[i][0] << (a[i].size()-2) << a[i].back() << endl;
    } else {
      cout << a[i] << endl;
    }
  }
}
