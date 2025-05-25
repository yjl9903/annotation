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

  int m = output;
  int n = rnd.next(1, (int)5e7);

  printf("%d %d\n", m, n);
  for (int i = 0; i < m; i++) {
    for (int i = 0; i < m; i++) {
      printf("%c", '0' + rnd.next(0, 9));
    }
    puts("");
  }

  return 0;
}
