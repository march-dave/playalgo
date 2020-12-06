// https://www.acmicpc.net/problem/1759
// L = 4 C = 6
// arr = [ a t c i s w ]
// passw = [100];

// acis
// acit
// aciw
// ....

#include <iostream>
#include <algorithm> // sort
using namespace std;

int L, C;
char arr[20];
char passW[4];

void DFS(int level, int num) {
    if (level == 4) {
        for(int i=0; i<4; i++) {
            cout << passW[i];
        }
    } else {
        for(int i=num; i<L; i++) {
            passW[level] = arr[i];
            DFS(level+1, i+1);
        }
    }
}

int main() {

    cin >> L;
    cin >> C;

    for (int i=0; i<C; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+C);

    DFS(0, 0);

    return 0;
}


