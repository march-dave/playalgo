// https://www.acmicpc.net/problem/2661
// 숫자 1, 2, 3으로만 이루어지는 수열이 있다
// 입력은 숫자 N하나로 이루어진다. N은 1 이상 80 이하이다.

#include <iostream>
using namespace std;

int N; // 1<= N <= 80 scope
// N = 7

// 1213121 finally we are expected this number.

void DFS(int level, int num) {
    if(level == N) {

    } else {

        for(int i=num; i<N; i++) {
            DFS(level+1, i+1);
        }
    }

}

int main() {
    cin >> N;
    DFS(0, 0);

    return 0;
}