// https://www.hackerrank.com/challenges/strong-password/problem

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password) {
  // Return the minimum number of characters to make the password strong
  bool digit = false, lower = false, upper = false, special = false;
  string special_characters = "!@#$%^&*()-+";

  for (auto x : password) {
    digit |= isdigit(x);
    lower |= islower(x);
    upper |= isupper(x);
    special |= special_characters.find(x) != string::npos;
  }

  int to_add = !digit + !lower + !upper + !special;
  int newLength = password.length() + to_add;
  return to_add + (newLength >= 6 ? 0 : 6 - newLength);
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string n_temp;
  getline(cin, n_temp);

  int n = stoi(ltrim(rtrim(n_temp)));

  string password;
  getline(cin, password);

  int answer = minimumNumber(n, password);

  fout << answer << "\n";

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
