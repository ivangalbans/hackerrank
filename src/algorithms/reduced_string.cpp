// https://www.hackerrank.com/challenges/reduced-string/problem

#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

bool is_different(string s) {
  for (int i = 1; i < s.size(); ++i)
    if (s[i] == s[i - 1])
      return false;
  return true;
}

string superReducedString(string s) {
  if (is_different(s))
    return s == "" ? "Empty String" : s;

  int n = s.size();
  vector<bool> mk(n);

  for (int i = 1; i < n; ++i)
    if (s[i] == s[i - 1] && !mk[i - 1])
      mk[i] = mk[i - 1] = true;

  string newS = "";
  for (int i = 0; i < n; ++i)
    if (!mk[i])
      newS += s[i];

  return superReducedString(newS);
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string s;
  getline(cin, s);

  string result = superReducedString(s);

  fout << result << "\n";

  fout.close();

  return 0;
}
