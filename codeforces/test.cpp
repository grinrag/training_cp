#include <iostream>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>
#include <deque>

#define mp make_pair
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
int32_t main() {
    IOS;
    int n, m, k;

    multiset<int> taken;

    taken.insert(5);
    taken.insert(6);
    taken.insert(5);

    taken.erase(6);
    for(auto v: taken)
        cout << v << endl;
    return 0;
}