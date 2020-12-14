// https://www.acmicpc.net/problem/2661
// 숫자 1, 2, 3으로만 이루어지는 수열이 있다
// 입력은 숫자 N하나로 이루어진다. N은 1 이상 80 이하이다.

#include <iostream>
using namespace std;

int N; // 1<= N <= 80 scope
int arr[80];
// N = 7

// 1213121 finally we are expected this number.
bool valid(int level) {
    int cnt = 0;
    for(int i=2; i<=level/2; i++) {
        for(int j=1; j<=level-1; j++) {
            cnt = 0;
            for(int k=j; k<i+j; k++) {
                if(i+k > level) continue;
                if(arr[k] == arr[i+k])
                cnt++;
            }
            if(cnt==i) return 0;
        }
    }

    return 1;
}

void DFS(int level) {
    if(level-1 == N) {
        for(int i=0; i<N; i++) {
            cout << arr[i];
        }
        exit(0);
    } else {

        for(int i=1; i<3; i++) {
            if(arr[level-1] == i) continue;            
            arr[level] = i;
            if (valid(level)) DFS(level+1);
        }
    }
}

int main() {
    cin >> N;
    DFS(1);

    return 0;
}