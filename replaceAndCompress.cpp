#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();

    bool can_increase = false; // Checks if we can get compressed length L + 2
    bool can_decrease = false; // Checks if we can get compressed length L - 2

    for (int i = 1; i < n - 1; ++i) {
        if (s[i - 1] == s[i] && s[i] == s[i + 1]) {
            // Pattern "000" -> "010" or "111" -> "101"
            can_increase = true;
        }
        if (s[i - 1] == s[i + 1] && s[i] != s[i - 1]) {
            // Pattern "010" -> "000" or "101" -> "111"
            can_decrease = true;
        }
    }

    // 1 is for the original compressed string (length L)
    int ans = 1 + (can_increase ? 1 : 0) + (can_decrease ? 1 : 0);
    cout << ans << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}