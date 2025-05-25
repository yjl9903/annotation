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

  int n = opt<int>("n");
  int t = opt<int>("t");
  int k = opt<int>("k");
  int q = opt<int>("q");

  printf("%d\n", t);
  for (int i = 0; i < t; i++) {
    printf("%d %d\n", n, k);
    for (int i = 0; i < n; i++) {
      printf("%c", 'a' + rnd.next(0, 25));
    }
    puts("");

    vector<int> bound;
    for (int i = 0; i < n; i++) {
      bound.push_back(i + 1);
    }
    shuffle(bound.begin(), bound.end());
    bound.resize(k - 1);
    sort(bound.begin(), bound.end());
    for (int i = 0; i < k; i++) {
      printf("%d%c", i == 0 ? 1 : bound[i - 1], " \n"[i + 1 == k]);
    }
    for (int i = 0; i < k; i++) {
      printf("%d%c", i == k - 1 ? n : bound[i], " \n"[i + 1 == k]);
    }
    printf("%d\n", q);
    for (int i = 0; i < q; i++) {
      printf("%d%c", rnd.next(1, n), " \n"[i + 1 == q]);
    }
  }

  return 0;
}
