#include <iostream>
using namespace std;

int main() {
	int size;
	int arr[] = {1,2,3};
	int duplicados = 0;
	int res = 0;

	for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
		int x = arr[i] + 1;
		for (int j = 0; j < sizeof(arr)/sizeof(arr[0]); j++){
			if(arr[i] == arr[j] && i != j){
				duplicados++;
			}
			
			if(arr[j] == x){
				res++;
				break;
			}
		}
	}

	cout<<"Output: "<<res<<endl;
}