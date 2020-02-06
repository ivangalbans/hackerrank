// https://www.hackerrank.com/challenges/magic-square-forming/problem

#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int cost(vector<vector<int>> &s, vector<int> &v)
{
  return  abs(s[0][0]-v[0]) + abs(s[0][1]-v[1]) + abs(s[0][2]-v[2]) +
          abs(s[1][0]-v[3]) + abs(s[1][1] - 5)  + abs(s[1][2]-v[4]) +
          abs(s[2][0]-v[5]) + abs(s[2][1]-v[6]) + abs(s[2][2]-v[7]);
}

//  { {v[0], v[1], v[2]},
//  {v[3],    5, v[4]},
//  {v[5], v[6], v[7]} };
bool magic(vector<int> &v)
{
  return v[0] + v[1] + v[2] == 15 &&
         v[3] +   5  + v[4] == 15 &&
         v[5] + v[6] + v[7] == 15 &&
         v[0] + v[3] + v[5] == 15 &&
         v[1] +   5  + v[6] == 15 &&
         v[2] + v[4] + v[7] == 15 &&
         v[0] +   5  + v[7] == 15 &&
         v[2] +   5  + v[5] == 15;
}

// Complete the formingMagicSquare function below.
int formingMagicSquare(vector<vector<int>> s) {
  vector<int> v = {1, 2, 3, 4, 6, 7, 8, 9};
  vector<vector<int>> tmp;
  int min_cost = 999999;

  for(int i = 0; i < 40320; ++i) {
    if(magic(v))
      min_cost = min(min_cost, cost(s, v));
    next_permutation(begin(v), end(v));
  }

  return min_cost;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);
    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> s[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = formingMagicSquare(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
