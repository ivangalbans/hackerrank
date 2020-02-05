// https://www.hackerrank.com/challenges/2d-array/problem

#include <bits/stdc++.h>

using namespace std;

bool valid(int x, int y, int n, int m)
{
  return x > 0 && x < n-1 && y > 0 && y < m-1;
}

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
  int ans = -999999;
  int dx[] = {-1, -1, -1, 0, 1, 1, 1};
  int dy[] = {-1, 0, 1, 0, -1, 0, 1};

  for(int i = 0, n = arr.size(); i < n; ++i)
    for(int j = 0, m = arr[i].size(); j < m; ++j)
      if(valid(i, j, n, m)) {
        int sum = 0;
        for(int k = 0; k < 7; ++k)
          sum += arr[i + dx[k]][j + dy[k]];
        ans = max(ans, sum);
      }

  return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
