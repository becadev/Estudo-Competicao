// 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r=1, maior;
    cin >> n;
    std::vector<int> p(n);
    std::vector<int> cadeira(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> p[i];
    }
    // sort(p.rbegin(),p.rend()); // ordena e inverte a ordem
    for(int i = 0; i < n ; i++){
        r = 1;
        for(int k = i+1 ; k < n ; k++) {
            if(p[i] < p[k]){
                maior = p[k];
            }
        }
        cout  << r << "\n";
    }
    return 0;
}