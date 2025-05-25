#include <cstdio>
#include <set>
#include <vector>
#include <utility>
#include <numeric>
#include "testlib.h"

using namespace std;

constexpr int maxn = 1e6 + 5;

bool vis[maxn];

int main(const int argc, char **argv) {
  registerGen(argc, argv, 1);

  const auto output = opt<int>(1);
  const auto filename = "../t-" + to_string(output) + ".txt";
  printf("Output: %s\n", filename.c_str());
  freopen(filename.c_str(), "w", stdout);

  int n = output;
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    p[i] = i + 1;
  }
  shuffle(p.begin(), p.end());
  // vector<int> p {1, 2, 3, 4, 7, 5, 6};

  n = p.size();
  vector<int> a(n);

  // for (int i = 0; i < n; i++) {
  //   printf("%d%c", p[i], " \n"[i == n - 1]);
  // }

  for (int i = 0; i < n; i++) {
    bool found = false;
    for (int j = 0; j < n; j++) {
      if (p[i] < p[j] && !vis[j]) {
        found = true;
        a[i] = j + 1;
        vis[j] = true;
        break;
      }
    }
    if (!found) {
      a[i] = -1;
    }
  }

  printf("%d\n", n);
  for (int i = 0; i < n; i++) {
    printf("%d%c", a[i], " \n"[i == n - 1]);
  }

  return 0;
}
