//
// Created by Enrico Muller on 11/12/2021.
//

#include "lib.h"
#include <cstring>

bool controllo (char lista[4][20], char nome[1][20], int &x){
    for (int i = 0; i < 4; i++) {
        if (strcmp (lista [i], nome [0]) == 0) {
            x = i;
            return true;
        }
    }
    return false;
}
