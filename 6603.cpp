// https://www.acmicpc.net/problem/6603
// select 6 numbers from the set, Carefully review Edge case
// K = 7, S = [1 2 3 4 5 6 7]

#include <iostream>
using namespace std;

int K;
int S[20];
int combi[200];

void DFS(int level, int sum) {
    if(level == 6) {
        for(int i=0; i<6; i++) {
            cout << combi[i] << ' ';
        }
        cout << "\n";
    } else {
        for(int i=sum; i<K; i++) {
            combi[level] = S[i];
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