// https://www.acmicpc.net/problem/2309
// 일곱 난쟁이
// 아홉 개의 줄에 걸쳐 난쟁이들의 키가 주어진다. 주어지는 키는 100을 넘지 않는 자연수이며
// 20 7 23 19 10 15 25 8 13

#include <iostream>
using namespace std;
int arr[9], r_arr[9];
int cnt, sum;

void DFS(int level, int num) {
    if(level == 9) {
        for(int i=0; i<7; i++) {
            cout << arr[i];
        }
    } else {
        for(int i=0; i<9; i++) {
            r_arr[level] = arr[i];
            DFS(level+1, num);
            r_arr[level] = arr[i];
            DFS(level+1, num+1);
            // cnt++;
        }
    }
}

int main() {

    for(int i=0; i<9; i++) {
        cin >> arr[i];
    }

    DFS(0, 0);

    return 0;
}