// https://www.hackerrank.com/challenges/two-characters/problem

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'alternate' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

bool is_alternate(string s) {

  if (s.size() <= 1)
    return false;

  for (int i = 1; i < s.size(); ++i)
    if (s[i] == s[i - 1])
      return false;

  return true;
}

int alternate(string s) {
  int ans = 0;

  for (char c1 = 'a'; c1 <= 'z'; ++c1) {
    for (char c2 = c1 + 1; c2 <= 'z'; ++c2) {
      string newS = "";

      for (char c : s)
        if (c == c1 || c == c2)
          newS += c;

      if (is_alternate(newS))
        ans = max(ans, (int)newS.size());
    }
  }

  return ans;
}

int main() {

  ofstream fout(getenv("OUTPUT_PATH"));

  string l_temp;
  getline(cin, l_temp);

  int l = stoi(ltrim(rtrim(l_temp)));

  string s;
  getline(cin, s);

  int result = alternate(s);

  fout << result << "\n";

  fout.close();

  return 0;
}

string ltrim(const string &str) {
  string s(str);

  s.erase(s.begin(),
          find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

  return s;
}

string rtrim(const string &str) {
  string s(str);

  s.erase(
      find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
      s.end());

  return s;
}
