// https://atcoder.jp/contests/abc392/tasks/abc392_c
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int pessoa[n], babador[n], respost[n];
    
    for(int i = 0 ; i < n ; i++)
        cin >> pessoa[i];
        
    for(int i = 0 ; i < n ; i++)
        cin >> babador[i];
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(babador[j] == i){
                cout << babador[pessoa[j]] << " ";
        
            }
        }
    }
    return 0;
}
