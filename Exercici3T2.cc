#include <iostream>
#include <vector>
using namespace std;

// Funció a implementar
int bocins_ordenats(const vector<int>& v);

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];

        cout << bocins_ordenats(v) << '\n';
    }
    return 0;
}
