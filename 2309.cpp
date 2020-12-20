// https://www.acmicpc.net/problem/2309
// 일곱 난쟁이
// 아홉 개의 줄에 걸쳐 난쟁이들의 키가 주어진다. 주어지는 키는 100을 넘지 않는 자연수이며
// 20 7 23 19 10 15 25 8 13

#include <iostream>
using namespace std;
int arr[9], r_arr[9], chk[9];
int cnt, sum;

void DFS(int level) {
    if(level == 9) {
        for(int j=0; j<9; j++) {
            if (chk[j] == 1) {
                cnt = cnt + chk[j];
            }
        }

        if (cnt == 7) {
            for(int k=0; k<9; k++) {

            }
        }
    } else {
            chk[level] = 0;
            DFS(level+1);
            chk[level] = 1;
            DFS(level+1);
        // }
    }
}

int main() {

    for(int i=0; i<9; i++) {
        cin >> arr[i];
    }

    DFS(1);

    return 0;
}