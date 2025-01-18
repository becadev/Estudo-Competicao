// Declaração de Problema
// Você recebe três inteiros 
// ABC. Determine se é possível dividir esses três inteiros em dois ou mais grupos para que esses grupos tenham somas iguais.

# include <iostream>
using namespace std;


bool grupy( int a, int b, int c){
    if (a + b == c || a + c == b || b + c == a )
        return true;
    if (a == b && b == c & c == a)
        return true;
    return false;
}

int main(){
    int a, b, c, cont;
    cin >> a >> b >> c;
    if(grupy(a,b,c))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}