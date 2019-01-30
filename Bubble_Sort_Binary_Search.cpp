#include<bits/stdc++.h>
using namespace std;
int search(int beg, int end, int *arr, int num);
int main() {
	int n;
	cout<<"Enter number of elements:";
	cin>>n;
    int arr[1000];
	for(int i = 0; i < n; i++)
		cin>>arr[i];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i; j++) {
            if(arr[j] < arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Are you ready for Binary Search?!\nOksy, enter a number to find: ";
    int num;
    cin>>num;
    cout<<"Index Value: "<<search(0, n-1, arr, num)<<endl;
}

int search(int beg, int end, int arr[], int num) {
    int *a = arr;
    // int beg = &arr;
    // int end = &arr + n;
    if(beg > end) {
        return -1;
    }
    int mid;
    mid = (beg + end)/2;
    if(a[mid] == num) {
        return mid;
    } else if(a[mid] < num) {
        search(mid, end, arr, num);
    } else if(arr[mid] > num) {
        search(beg, mid, arr, num);
    }
}
