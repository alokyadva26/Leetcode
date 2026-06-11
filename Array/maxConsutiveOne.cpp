#include <iostream>
#include <algorithm>
using namespace std;

int maxOne(int arr[], int n) {
    int count = 0;
    int maxi = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
            maxi = max(maxi, count);
        } else {
            count = 0;
        }
    }

    return maxi;
}

int main() {
    int arr[] = {1, 1, 1, 0, 0, 1};

    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxOne(arr, n);

    cout << result;

    return 0;
}