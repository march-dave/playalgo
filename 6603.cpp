// https://www.acmicpc.net/problem/6603
// select 6 numbers from the set, Carefully review Edge case
// K = 7, S = [1 2 3 4 5 6 7]

#include <iostream>
using namespace std;

int K;
int S[13], arr[20];
// int ans;

// void DFS(int level, int sum) {
//     if(level == S.size()) {
//         // if (sum == S) {
//         //     ans = ans + 1;
//         // }
//     } else {
//         DFS(level+1, sum);
//         DFS(level+1, sum+arr[level]);    
//     }
// }

int main() {

    cin >> K;
    for (int i=0; i<K; i++) {
        cin >> S[i];
    }

    // DFS(0, 0);
    // cout << "kk" << (S == 0);
    // cout << ans - (S == 0);

    for(int j=0; j<S.size(); j++) {
        cout << arr[j];
    }
    // if (S == 0) {
    //     cout << ans - 1;
    // } else {
    //     cout << ans;
    // }
    return 0;
}