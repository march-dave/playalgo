// https://www.acmicpc.net/problem/1759
// L = 4 C = 6
// arr = [ a t c i s w ]
// passw = [100];

// acis
// acit
// aciw
// ....

// select 6 numbers from the set, Carefully review Edge case
// K = 7, S = [1 2 3 4 5 6 7]

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

// sort(vec[i].begin(), vec[i].end());
// DFS 탐색 후 chk 다시 reset
// memset(chk, false, sizeof(chk));

int main() {

    cin >> L;
    cin >> C;

    for (int i=0; i<C; i++) {
        cin >> arr[i];
    }

    // 정렬 한번 해주고!! 조건에서 작은 번호 부터 방문
    // for (int i = 1; i <= v; i++)
    //     sort(arr[i].begin(), arr[i].end());

    DFS(0, 0);

    return 0;
}


