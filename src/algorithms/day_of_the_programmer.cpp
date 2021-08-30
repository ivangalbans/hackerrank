// https://www.hackerrank.com/challenges/day-of-the-programmer/problem
#include <bits/stdc++.h>
#include <string>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */

bool is_gregorian_leap_year(int year) {
  return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

bool is_julian_leap_year(int year) { return year % 4 == 0; }

string dayOfProgrammer(int year) {
  if (year == 1918)
    return "26.09.1918";

  string d =
      (year <= 1917 ? is_julian_leap_year(year) : is_gregorian_leap_year(year))
          ? "12"
          : "13";
  string m = "09";
  string y = to_string(year);
  return d + "." + m + "." + y;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string year_temp;
  getline(cin, year_temp);

  int year = stoi(ltrim(rtrim(year_temp)));

  string result = dayOfProgrammer(year);

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
