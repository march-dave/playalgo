// https://www.acmicpc.net/problem/6603
// select 6 numbers from the set, Carefully review Edge case
// K = 7, S = [1 2 3 4 5 6 7]

#include <iostream>
using namespace std;

int K;
int S[20];
int lotto[200];

void DFS(int level, int num) {
    if(level == 6) {
        for(int i=0; i<6; i++) {
            cout << lotto[i] << ' ';
        }
        cout << "\n";
    } else {
        for(int i=num; i<K; i++) {
            lotto[level] = S[i];
            DFS(level+1, i+1);
        }
    }
}

int main() {
    
    while(cin >> K && K) {
        for (int i=0; i<K; i++) {
            cin >> S[i];
        }
        DFS(0, 0);
        cout << "\n";
    }

    return 0;
}