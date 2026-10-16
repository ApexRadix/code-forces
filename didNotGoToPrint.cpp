#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> memory; // Acts as our LIFO stack
    vector<bool> printed(n + 1, false);

    for (int i = 1; i <= n; ++i) {
        char cmd = s[i - 1];
        
        if (cmd == '1') {
            memory.push_back(i);
        } else if (cmd == '2') {
            if (!memory.empty()) {
                int top_doc = memory.back();
                memory.pop_back();
                printed[top_doc] = true;
            } else {
                printed[i] = true;
            }
        } else if (cmd == '3') {
            printed[i] = true;
        }
    }

    vector<int> not_printed;
    for (int i = 1; i <= n; ++i) {
        if (!printed[i]) {
            not_printed.push_back(i);
        }
    }

    // Output the count of unprinted documents
    cout << not_printed.size() << "\n";
    
    // Output their 1-based indices in increasing order
    for (int i = 0; i < (int)not_printed.size(); ++i) {
        cout << not_printed[i] << (i + 1 == (int)not_printed.size() ? "" : " ");
    }
    cout << "\n";
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}