

#include <bits/stdc++.h>
using namespace std;

int arr[88];
int n;

bool valid(int idx){
	int cnt = 0;
	for(int i=2; i<=idx/2; i++){ //dist
		for(int j=1; j<=idx-i; j++){ //start
			cnt = 0;
			for(int k=j; k<i+j; k++){
				if(i+k > idx) continue;
				if(arr[k] == arr[i+k]) cnt++;
			}
			if(cnt == i) return 0;
		}
	}
	return 1;
}

void f(int idx){
	if(idx > n){
		for(int i=1; i<=n; i++) cout << arr[i];
		exit(0);
	}
	for(int i=1; i<=3; i++){
		if(arr[idx-1] == i) continue;
		arr[idx] = i;
		if(valid(idx)) f(idx+1);
	}
}

int main(){
	cin >> n;
	f(1);
}