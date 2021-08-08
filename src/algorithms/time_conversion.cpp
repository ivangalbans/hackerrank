// https://www.hackerrank.com/challenges/time-conversion/problem

#include <bits/stdc++.h>
#include <string>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string t) {
  string h = to_string(t[0] - '0') + to_string(t[1] - '0');
  string m = to_string(t[3] - '0') + to_string(t[4] - '0');
  string s = to_string(t[6] - '0') + to_string(t[7] - '0');
  bool am = t[8] == 'A';

  string ans = "";

  if (am)
    ans += (h == "12" ? "00" : h);
  else
    ans += (h == "12" ? "12" : to_string(atoi(h.c_str()) + 12));

  ans += ":" + m + ":" + s;

  return ans;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string s;
  getline(cin, s);

  string result = timeConversion(s);

  fout << result << "\n";

  fout.close();

  return 0;
}
