// https://www.acmicpc.net/problem/1759
// L = 4 C = 6
// arr = [ a t c i s w ]
// passw = [100];

// acis
// acit
// aciw
// ....

#include <iostream>
#include <algorithm> // sort
using namespace std;

int L, C; // L =4 , C = 6
char arr[20];
char passW[4];
int vowel, consonant;

void DFS(int level, int num) {
    if (level == L) {
        if ( vowel >= 1 && consonant >= 2) {
            for(int i=0; i<4; i++) {
                cout << passW[i];
            }
        }
    } else {
        for(int i=num; i<L; i++) {
            if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
                passW[level] = arr[i];
                vowel = vowel + 1;
                DFS(level+1, i+1);
            } else {
                passW[level] = arr[i];
                consonant = consonant + 1;
                DFS(level+1, i+1);
            }
        }
    }
}

int main() {

    cin >> L;
    cin >> C;

    for (int i=0; i<C; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+C);

    DFS(0, 0);

    return 0;
}


