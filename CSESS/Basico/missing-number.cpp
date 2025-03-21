#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int n;
    cin >> n;
    std::vector<unsigned int> num(n);
    num[0] = 0;

    for(int i = 1 ; i < n ; i++)
        cin >> num[i];
    sort(num.begin(), num.end());

    for(unsigned int i = 0; i <= n ; i++ ){
        if(num[i] != i){
            cout << i << "\n";
            break;
        }
    }
    return 0;
}