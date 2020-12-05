// https://www.acmicpc.net/problem/1759
// L = 4 C = 6
// arr = [ a t c i s w ]

// acis
// acit
// aciw
// ....

// select 6 numbers from the set, Carefully review Edge case
// K = 7, S = [1 2 3 4 5 6 7]

#include <iostream>
using namespace std;


int L, C;
char arr[20];

int main() {

    cin >> L;
    cin >> C;

    for (int i=0; i<C; i++) {
        cin >> arr[i];
    }

    return 0;
}


