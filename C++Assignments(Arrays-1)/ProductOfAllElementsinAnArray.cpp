#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int product = 1;
    for(int i = 0; i <= n-1; i++) {
        product *= arr[i];
    }
    cout << product;
}