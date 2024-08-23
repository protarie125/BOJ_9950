#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll l, w, a;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  while (true) {
    cin >> l >> w >> a;
    if (0 == l && 0 == w && 0 == a) break;

    if (0 == l) {
      l = a / w;
    }

    if (0 == w) {
      w = a / l;
    }

    if (0 == a) {
      a = l * w;
    }

    cout << l << ' ' << w << ' ' << a << '\n';
  }

  return 0;
}