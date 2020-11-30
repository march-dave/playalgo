// https://www.acmicpc.net/problem/6603
// select 6 numbers from the set, Carefully review Edge case
// K = 7, S = [1 2 3 4 5 6 7], 

#include <iostream>
using namespace std;

int K, S;
int arr[20];
// int ans;

void DFS(int level, int sum) {
    if(level == S) {
        // if (sum == S) {
        //     ans = ans + 1;
        // }
    } else {
        DFS(level+1, sum);
        DFS(level+1, sum+arr[level]);    
    }
}

int main() {

    cin >> K >> S;
    for (int i=0; i<K; i++) {
        cin >> arr[i];
    }

    DFS(0, 0);
    // cout << "kk" << (S == 0);
    // cout << ans - (S == 0);

    for(int j=0; j<S; j++) {
        cout << arr[j];
    }
    // if (S == 0) {
    //     cout << ans - 1;
    // } else {
    //     cout << ans;
    // }
    return 0;
}