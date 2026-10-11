#include <iostream>
#include <cmath>

using namespace std;

void solve() {
    int x0, y0, R;
    cin >> x0 >> y0 >> R;
    
    for (int dx = -R; dx <= R; ++dx) {
        int rem = R * R - dx * dx;
        if (rem >= 0) {
            int dy = round(sqrt(rem));
            if (dy * dy == rem) {
                cout << x0 + dx << " " << y0 + dy << "\n";
                return; // Found a valid point, move to the next test case
            }
        }
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