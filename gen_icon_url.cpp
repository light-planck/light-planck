#include <bits/stdc++.h>
using namespace std;


int main() {
  string icon;
  cout << "enter icon: ";
  cin >> icon;

  string color;
  cout << "enter color: ";
  cin >> color;
  color[0] = '-';

  string res = "https://img.shields.io/badge/-";
  res += icon + color + ".svg?logo=" + icon + "&style==style=for-the-badge&logoColor=white";
  cout << res << endl;
  return 0;
}