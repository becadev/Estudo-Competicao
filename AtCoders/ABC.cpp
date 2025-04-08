#include <bits/stdc++.h>
using namespace std;
// O(n³)
int main(){
    string abc;
    cin >> abc;
    string resposta = "ABC";
    // int tam = size(abc);
    int tam;
    int cont = 0;
    for (int i = 0; i < tam ;i++){
        for(int j = i+1 ; j < tam ; j++){
            for(int k = j+1 ; k < tam ; k++){
                if((abc[i] == 'A' && abc[j] == 'B'  && abc[k] == 'C') && (j-i == k-j)){
                    cont++;
                    break;
                }
            }
        }
    }
    cout << cont << endl;
    return 0;
}