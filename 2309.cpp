// https://www.acmicpc.net/problem/2309
// 일곱 난쟁이
// 아홉 개의 줄에 걸쳐 난쟁이들의 키가 주어진다. 주어지는 키는 100을 넘지 않는 자연수이며

#include <iostream>
using namespace std;
int arr[9];

void DFS(int level, int num) {
    if(level == 9) {

    } else {
        DFS(level+1, num);
        DFS(level+1, num+1);
    }
}

int main() {

    for(int i=0; i<9; i++) {
        cin >> arr[i];
    }

    DFS(0, 0);

    return 0;
}