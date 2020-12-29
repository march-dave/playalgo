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

int L, C; // L = 4 , C = 6
char arr[20];
char passW[4];

void DFS(int level, int num, int vowel, int consonant) {
    if (level == L) {
        if ( vowel >= 1 && consonant >= 2) {
            for(int i=0; i<L; i++) {
                cout << passW[i];
            }
            // cout << " vowel: " << vowel;
            // cout << " consonant: " << consonant;
            cout << "\n";
        }
    } else {
        for(int i=num; i<C; i++) {
            if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
                passW[level] = arr[i];
                DFS(level+1, i+1, vowel+1, consonant);
            } else {
                passW[level] = arr[i];
                DFS(level+1, i+1, vowel, consonant+1);
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
    DFS(0, 0, 0, 0);

    return 0;
}


#include <cstdio>
#include <algorithm>
using namespace std;

int main() {

  int sum = 0;
  int i, j, k, n = 9;
  int arr[n];
  arr[0] = 0;

  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }

  sort(arr, arr+n);

  for (i = 0; i < n; i++) {
    for (j = i+1; j < n; j++) {
      if (sum - arr[i] - arr[j] == 100) {
        for (k = 0; k < n; k++) {
          if (k == i || k == j) continue;
          printf("%d\n", arr[k]);
        }
        return 0;
      }
    }
  }

  return 0;
}