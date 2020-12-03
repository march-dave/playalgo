// https://www.acmicpc.net/problem/6603
// select 6 numbers from the set, Carefully review Edge case
// K = 7, S = [1 2 3 4 5 6 7]

#include <iostream>
using namespace std;

int K;
int S[13], lotto[20];
int combi[200];
// int ans;

void DFS(int level, int sum) {
    if(level == 6) {
        // if (sum == S) {
        //     ans = ans + 1;
        // }
    } else {
        for(int i=sum; i<K; i++) {
            combi[level] = lotto[i];
            DFS(level+1, i+1);
        }
    }
}

int main() {

    while(cin >> K && K) {
        for (int i=0; i<K; i++) {
            cin >> S[i];
        }
    }

    DFS(0, 0);

    for(int j=0; j<6; j++) {
        cout << combi[j];
    }
    return 0;
}