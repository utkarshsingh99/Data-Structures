#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[7] = {12, 1, 24, 46, 2, 23, 21};
    for(int i = 0; i < 7; i++) {
        for(int j = i; j >= 0; j--) {
            if(arr[j] < arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    for(int i = 0; i < 7; i ++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
