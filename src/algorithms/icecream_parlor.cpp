#include <bits/stdc++.h>
#include <utility>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'icecreamParlor' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER m
 *  2. INTEGER_ARRAY arr
 */

vector<int> icecreamParlor(int m, vector<int> arr) {
  int l = 0, r = arr.size() - 1, n = arr.size();

  vector<pair<int, int>> a(n);
  for (int i = 0; i < n; ++i)
    a[i] = make_pair(arr[i], i + 1);

  sort(begin(a), end(a));

  while (l < r) {
    if (a[l].first + a[r].first == m)
      return {min(a[l].second, a[r].second), max(a[l].second, a[r].second)};
    else if (a[l].first + a[r].first < m)
      ++l;
    else
      --r;
  }
  return {-1, -1};
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string t_temp;
  getline(cin, t_temp);

  int t = stoi(ltrim(rtrim(t_temp)));

  for (int t_itr = 0; t_itr < t; t_itr++) {
    string m_temp;
    getline(cin, m_temp);

    int m = stoi(ltrim(rtrim(m_temp)));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
      int arr_item = stoi(arr_temp[i]);

      arr[i] = arr_item;
    }

    vector<int> result = icecreamParlor(m, arr);

    for (size_t i = 0; i < result.size(); i++) {
      fout << result[i];

      if (i != result.size() - 1) {
        fout << " ";
      }
    }

    fout << "\n";
  }

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

vector<string> split(const string &str) {
  vector<string> tokens;

  string::size_type start = 0;
  string::size_type end = 0;

  while ((end = str.find(" ", start)) != string::npos) {
    tokens.push_back(str.substr(start, end - start));

    start = end + 1;
  }

  tokens.push_back(str.substr(start));

  return tokens;
}
