#include <bits/stdc++.h>
using namespace std;

int repetitions(int tam, string dna) { // O(n)
    int maior_seq = 1;
    int seq_ante = 1;
    for( int k = 0 ; k < tam-1 ; k++) {
        if(dna[k] == dna[k+1]) seq_ante++;
            else {
                maior_seq = max(maior_seq,seq_ante);
                seq_ante = 1;
            }
        }
    return max(maior_seq,seq_ante);
}
int main() {
    string dna;
    cin >> dna;
    int tam = dna.size();
    cout << repetitions(tam, dna) << endl;
    return 0;
}

    // if(tam > 0){
    //     for(int i = 1 ; i < tam ; i ++){
    //         if(dna[i] == dna[i-1]){
    //             qtd_seq++;
    //             continue;
    //         }
    //         if(dna[i] != dna[i-1]) {
    //             qtds.push_back(qtd_seq);
    //         }
    //     }
    //     auto maior_seq = max_element(qtds.begin(), qtds.end()); // retorna um iterator apontando para o maior valor do vector
    //     std::cout << *maior_seq  << endl; // o * desreferencia o iterator para obter um valor
    // }