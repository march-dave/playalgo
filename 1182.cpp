//https://www.acmicpc.net/problem/1182

#include <iostream>
using namespace std;

int N, S;
int arr[20];
int ans;

void DFS(int level, int sum) {
    if(level == N) {
        if (sum == S) {
            ans = ans + 1;
        }
    } else {
        DFS(level+1, sum);
        DFS(level+1, sum+arr[level]);    
    }
}

int main() {

    cin >> N >> S;
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }

    DFS(0, 0);
    cout << ans - (S == 0);
    return 0;
}