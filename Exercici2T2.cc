#include <iostream>
#include <vector>
using namespace std;

// Aquesta és la funció que has d'implementar
int picU(const vector<int>& v);

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];

        cout << picU(v) << endl;
    }
    return 0;
}
