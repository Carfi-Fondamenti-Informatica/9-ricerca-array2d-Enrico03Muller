#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char lista [10][20];
    char nome [1][20];
    int pos = 0;

    //Ingresso lista nomi
    for (int i = 0; i < 10; i++){
        cin >> lista [i];
    }

    //Ingresso nome da cercare
    cin >> nome [0];

    if (controllo(lista, nome, pos)){
        cout << pos;
    }else{
        cout << "non presente";
    }
    return 0;
}
