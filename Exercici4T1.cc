#include <iostream>
#include <vector>
#include <utility>
using namespace std;

typedef vector<vector<int>> Matriu;

// Funció a implementar
vector<pair<int,int>> deps_funcionals(const Matriu& M);

int main() {
    int r, c;
    while (cin >> r >> c) {
        Matriu M(r, vector<int>(c));
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) cin >> M[i][j];
        }

        vector<pair<int,int>> res = deps_funcionals(M);

        if (res.empty()) {
            cout << "cap\n";
        } else {
            for (auto [i, j] : res) {
                cout << (i + 1) << " -> " << (j + 1) << "\n";
            }
        }
    }
    return 0;
}
