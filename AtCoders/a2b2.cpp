#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a;
    cin >> a;
    set<long long> perfectsquare;
    for(long long i = 0 ; i < a ; i++) {
        for(long long k = i ; k < a ; k++) {
            long long x = abs((1LL << i) * (k * k));
            if( x % 2 == 0 && x < a && x > 1) 
                perfectsquare.insert(x);
            if(x >= a) break;
        }
    }
    cout << perfectsquare.size() << "\n";
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     double a;
//     cin >> a;
//     set<long long> perfectsquare;
//     for(long long i = 0 ; i < a ; i++) {
//         for(long long k = i ; k < a ; k++) {
//             long long x = (pow(2,i) *(k*k)) +  0.000001;
//             if(x%2 == 0 && x < a && x > 1) 
//                 perfectsquare.insert(x);
//             if(x >= a) break;
//         }
//     }
//     cout << perfectsquare.size() << "\n";
//     return 0;
// }
