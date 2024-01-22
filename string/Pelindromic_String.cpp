#include<bits/stdc++.h>

using namespace std;
bool checkPal(int i, int j, string str) {

  while (i < j) {
    if (str[i] != str[j]) return false;
    i++;
    j--;
  }
  return true;
}

int countSubstrings(string s) {
  int n = s.length();
  int sum = 0;
  for (int i = 0; i < n; i++) {
    for (int p = i; p < n; p++) {
      if (checkPal(i, p, s) == true) {
        sum++;
      }
    }
  }

  return sum;
}
int main() {
  string s = "abc";
  cout << countSubstrings(s);
  return 0;
}