// // https://www.acmicpc.net/problem/2309
// // 일곱 난쟁이
// // 아홉 개의 줄에 걸쳐 난쟁이들의 키가 주어진다. 주어지는 키는 100을 넘지 않는 자연수이며
// // 20 7 23 19 10 15 25 8 13

// #include <iostream>
// #include<algorithm>
// using namespace std;
// int arr[9], r_arr[9], chk[9];
// int cnt, sum;

// void DFS(int level) {
//     if(level == 9) {
//         for(int j=0; j<9; j++) {
//             if (chk[j] == 1) {
//                 cnt = cnt + chk[j];
//             }
//         }

//         if (cnt == 7) {
//             for(int k=0; k<9; k++) {
//                 if (chk[k] == 1) {
//                     r_arr[k] = arr[k];
//                 }
//             }
//         }

//         for(int m=0; m<7; m++) {
//            sum = sum + r_arr[m];
//         }

//         if (sum  == 100) {
//             for(int m=0; m<7; m++) {
//                 cout << r_arr[m] << ' ';
//             }
//         }

//         cnt = 0;
//     } else {
//             chk[level] = 0;
//             DFS(level+1);
//             chk[level] = 1;
//             DFS(level+1);
//         // }
//     }
// }

// int main() {

//     for(int i=0; i<9; i++) {
//         cin >> arr[i];
//     }

//     sort(arr, arr+9); //오름차순으로 정렬

//     DFS(1);

//     return 0;
// }

#include <iostream>
#include<algorithm>
using namespace std;
int arr[9];
int sum;

void Sum() {

    for(int i=0; i<9; i++) {
        for(int j=i+1; j<9; j++) {
            if (sum - arr[i] - arr[j] == 100) {

                for(int k=0; k<9; k++) {
                    if (i == k || j == k) continue;
                    cout << arr[k] << "\n";
                }
                return;
            }
                
        }
    }
}

int main() {
    for(int i=0; i<9; i++) {
        cin >> arr[i];
    }

    for(int j=0; j<9; j++) {
        sum = sum + arr[j];
    }

    sort(arr, arr+9); // 오름차순으로 정렬
    Sum();
    return 0;
}