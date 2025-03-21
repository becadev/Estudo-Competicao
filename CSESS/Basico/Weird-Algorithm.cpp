#include <bits/stdc++.h>
using namespace std;

void weird_algorithm(unsigned long long n) {
    cout << n << " ";
    while(n != 1){
        if(n%2 == 0){
            n = n/2;
        }else{
            n = (3*n) + 1;
        }
        cout << n << " ";
    }
    cout << "\n";
}
// unsigned long long para garantir que você tenha mais capacidade para armazenar números grandes, ou então adicionar verificações no código para evitar que o valor ultrapasse o limite.
int main(){
    unsigned long long n;
    cin >> n;
    weird_algorithm(n);
}

