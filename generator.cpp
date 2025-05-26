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

  printf("%d %d\n", n, m);
  for (int i = 0; i < m; i++) {
    printf("%d %d\n", rnd.next(1, (int)1e9), rnd.next(1, (int)1e9));
  }

  return 0;
}
