#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
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

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

ll a1, a0, c, n0;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> a1 >> a0 >> c >> n0;

  if (c < a1) {
    cout << 0;
    return 0;
  }

  if (c == a1 && 0 < a0) {
    cout << 0;
    return 0;
  }

  const auto& v1 = a1 * n0 + a0;
  const auto& v2 = c * n0;

  if (v2 < v1) {
    cout << 0;
    return 0;
  }

  cout << 1;

  return 0;
}