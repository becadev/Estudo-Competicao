#include <bits/stdc++.h>
using namespace std;
const double INF = pow(10,9);

// Usa double pq o int e long long sao menores do que 10^9, e o double é um tamanho maior
int main() {
    double a,b;
    cin >> a >> b;
    double x = 0;
    for(long long i = 0 ; i <= b ; i++) {
        x += std::pow(a,i);
    }
    if(x <= std::pow(10,9)) cout << (long long) x << "\n";
    else cout << "inf" << "\n";
    return 0;
}