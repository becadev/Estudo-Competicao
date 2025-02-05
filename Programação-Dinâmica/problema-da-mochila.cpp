// Desempenho Big(O) -> O(n)
/*
Você tem uma mochila com capacidade limitada de peso a ser carregado e possui n itens que gostaria de levar em uma viagem. 
Cada item possui um peso e um valor. Como há uma limitação na capacidade da mochila você gostaria 
de saber qual o valor máximo que você consegue colocar na mochila, respeitando a capacidade.
Escreva um programa que leia a capacidade da mochila, os itens que você possui e mostre o valor máximo capaz de levar na mochila com os itens que você possui.
Input
A primeira linha da entrada possui dois números inteiros n e c (1 ≤ n ≤ 18 e 10 ≤ c ≤ 1000), a quantidade de itens e a capacidade da mochila.
As próximas n linhas possuem, cada, um inteiro pi (1 ≤ pi ≤ 1000), o peso do item e um valor real vi (10.00 ≤ vi ≤ 2000.00), o valor do item.
Output
Seu programa deve mostrar apenas um valor real, com 2 (duas) casas decimais, o valor máximo que você pode colocar na mochila.

/*Caso Teste1
input:
4 10
7 42.00
3 12.00
4 40.00
5 25.00
output: 65.00
*/
# include <iostream>
# include <vector>
# include <algorithm>
# include <iomanip>
using namespace std;

struct item{
    int peso;
    double valor;
};
// q = qtd de itens
double mochila_r(vector<item> & itens, int q, int peso, double v){
    if(peso < 0 || q < 0) return 0.00;
    if(q == 0) return v;
    double r1 = mochila_r(itens, q-1, peso - itens[q-1].peso, v + itens[q-1].valor);
    double r2 = mochila_r(itens, q-1, peso, v);
    return max({r1,r2});
} // retorna qual o maior valor

double mochila(vector<item> & itens, int q, int peso){
    double valor = mochila_r(itens, q, peso, 0.00);
    return valor;
}
int main(){
    int n, peso_maximo;
    cin >> n >> peso_maximo;
    vector<item>itens(n);
    for(item & i : itens)
        cin >> i.peso >> i.valor;
    double valor = mochila(itens, n, peso_maximo);
    cout << fixed << setprecision(2) << valor << endl;
    return 0;
}
