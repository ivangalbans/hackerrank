// https://www.hackerrank.com/challenges/camelcase/problem

#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s) {
  return 1 + count_if(begin(s), end(s), [](char c) { return isupper(c); });
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string s;
  getline(cin, s);

  int result = camelcase(s);

  fout << result << "\n";

  fout.close();

  return 0;
}
