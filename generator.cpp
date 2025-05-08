#include <cstdio>
#include <numeric>
#include "testlib.h"

using namespace std;

int main(const int argc, char **argv) {
  registerGen(argc, argv, 1);

  const auto output = opt<int>(1);
  const auto filename = "../t-" + to_string(output) + ".txt";
  printf("Output: %s\n", filename.c_str());
  freopen(filename.c_str(), "w", stdout);

  int t = output;
  printf("%d\n", t);
  for (int i = 0; i < t; i++) {
    const int MIN_VAL = 1;
    const int MAX_VAL = 1000000000;

    int a, p;
    do {
      a = rnd.next(MIN_VAL, MAX_VAL);
      p = rnd.next(MIN_VAL, MAX_VAL);
    } while (gcd(a, p) != 1); // 直到找到互质对

    printf("%d %d %d %d\n", a, rnd.next(1, p - 1), p, rnd.next(0, MAX_VAL));
  }

  return 0;
}
