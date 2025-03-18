#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n;

    vector<long long> custos1(n + 1, 0), custos2(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        long long valor;
        cin >> valor;
        custos1[i] = custos1[i - 1] + valor;
    }

    vector<long long> sorted_custos(n);
    for (int i = 0; i < n; i++) sorted_custos[i] = custos1[i + 1] - custos1[i];  
    sort(sorted_custos.begin(), sorted_custos.end());

    for (int i = 1; i <= n; i++) {
        custos2[i] = custos2[i - 1] + sorted_custos[i - 1];
    }

    cin >> m;
    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1)
            cout << custos1[r] - custos1[l - 1] << "\n";
        else
            cout << custos2[r] - custos2[l - 1] << "\n";
    }

    return 0;
}
