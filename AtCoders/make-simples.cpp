// https://atcoder.jp/contests/abc393/tasks/abc393_c
// grafos
#include <bits/stdc++.h>
using namespace std;
std::vector<std::vector<int>> grafo;

// set não permite repetiçoes
// armazena em pares

int main(){
    int n,m; // n = vertices | m = arestas
    cin >> n >> m;
    int remover = 0;
    set<pair<int,int>> arestas;
    grafo.resize(m,std::vector<int>(2));

    for(int i = 0 ; i < m ; i ++){
        int v1,v2;
        cin >> v1 >> v2;
        if(v1 == v2) {
            remover++;
            continue; // precisa do continue para voltar ao inicio do loop sem executar o que vem depois desse if
        }
        pair<int,int> arest = {min(v1,v2),max(v1,v2)}; // ordena os pares

        if(arestas.count(arest)) remover++;
        else arestas.insert(arest);
    }
    cout << remover << "\n";
    return 0;
}


/*
Essa versão de TLE por ser O(n²) e em uma entrada muito grande(10^5) o numero de operações chega a 10^10
int make_simples(int m) { // O(n²)
    int remover = 0;
    for(int i = 0; i < m ; i++) {
        for(int k = i+1 ; k < m; k++) {

            if ((grafo[i][0] == grafo[k][1] and grafo[i][1] == grafo[k][0]) 
                or (grafo[i][0] == grafo[k][0] and grafo[i][1] == grafo[k][1])) remover++;
        }
        
        if (grafo [i][0] == grafo[i][1]) remover++;
    }
    return remover;
}
int main(){
    int n,m; // n = vertices | m = arestas
    cin >> n >> m;
    grafo.resize(m,std::vector<int>(2));
    for(int i = 0 ; i < m ; i ++){
        cin >> grafo[i][0] >> grafo[i][1];
    }
    cout << make_simples(m) << "\n";
    return 0;
}

Identificar auto-loops:
    Qualquer aresta do tipo 
    (𝑥,𝑥)
    (x,x) deve ser removida, pois é um auto-loop.

Identificar múltiplas arestas:
    Se dois nós 𝑢u e 𝑣v estão conectados por mais de uma aresta, precisamos remover as arestas excedentes.

Contar o número mínimo de remoções:
    Precisamos remover apenas o necessário para tornar o grafo simples.
*/