// https://www.acmicpc.net/problem/2661
// 숫자 1, 2, 3으로만 이루어지는 수열이 있다
// 입력은 숫자 N하나로 이루어진다. N은 1 이상 80 이하이다.

#include <iostream>
using namespace std;

int N; // 1<= N <= 80 scope
// N = 7
// 1213121 finally we are expected this number.

void DFS(int level, int num) {
    if(level == N) {

    } else {

        for(int i=num; i<N; i++) {
            DFS(level+1, i+1);
        }
    }

}

int main() {
    cin >> N;
    DFS(0, 0);

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int arr[88];
// int n;

// bool valid(int idx){
// 	int cnt = 0;
// 	for(int i=2; i<=idx/2; i++){ //dist
// 		for(int j=1; j<=idx-i; j++){ //start
// 			cnt = 0;
// 			for(int k=j; k<i+j; k++){
// 				if(i+k > idx) continue;
// 				if(arr[k] == arr[i+k]) cnt++;
// 			}
// 			if(cnt == i) return 0;
// 		}
// 	}
// 	return 1;
// }

// void f(int idx){
// 	if(idx > n){
// 		for(int i=1; i<=n; i++) cout << arr[i];
// 		exit(0);
// 	}
// 	for(int i=1; i<=3; i++){
// 		if(arr[idx-1] == i) continue;
// 		arr[idx] = i;
// 		if(valid(idx)) f(idx+1);
// 	}
// }

// int main(){
// 	cin >> n;
// 	f(1);
// }