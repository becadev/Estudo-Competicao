#include <bits/stdc++.h>
using namespace std;
// força bruta - O(n)
int main(){
    string taka, menino;
    cin >> taka >> menino;
    if(taka == "fine" && menino == "fine")
        cout << 4 << endl;
    if(taka == "fine" && menino == "sick")
        cout << 3 << endl;
    if(taka == "sick" && menino == "fine")
        cout << 2 << endl;
    if (taka == "sick" && menino == "sick")
        cout << 1 << endl;
    return 0;
}