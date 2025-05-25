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
  int m = opt<int>(2);
  printf("%d %d\n", n, m);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      putchar(rnd.next(0, 1) ? '#' : '.');
    }
    puts("");
  }

  return 0;
}
