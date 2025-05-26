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

  const auto output = opt<string>(1);
  const auto filename = "../t-" + output + ".txt";
  printf("Output: %s\n", filename.c_str());
  freopen(filename.c_str(), "w", stdout);

  int n = opt<int>("n");
  int m = opt<int>("m");

  printf("%d\n", n);
  for (int i = 0; i < n; i++) {
    printf("%d%c", rnd.next(1, (int)1e9), " \n"[i + 1 == n]);
  }
  for (int i = 0; i < n; i++) {
    printf("%d%c", rnd.next(1, 3), " \n"[i + 1 == n]);
  }
  for (int i = 0; i < n; i++) {
    printf("%d%c", rnd.next(1, 3), " \n"[i + 1 == n]);
  }
  printf("%d\n", m);
  for (int i = 0; i < m; i++) {
    printf("%d%c", rnd.next(1, 3), " \n"[i + 1 == m]);
  }

  return 0;
}
