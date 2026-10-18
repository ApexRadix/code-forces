#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    if (a <= b) {
        cout << -1 << "\n";
    } else {
        cout << min(b, a - b) << "\n";
    }
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}