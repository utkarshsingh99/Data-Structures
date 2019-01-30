#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
	cout<<"Enter number of elements:";
	cin>>n;
    int arr[1000];
	for(int i = 0; i < n; i++)
		cin>>arr[i];
    for(int i = 0; i < n; i++) {
        for(int j = i; j >= 0; j--) {
            if(arr[j] < arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i ++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
