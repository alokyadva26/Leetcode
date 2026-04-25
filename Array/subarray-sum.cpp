#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int countSubarrays(vector<int>& arr, int k)
{
    int n = arr.size();
    if(n == 0) return 0;

    int count = 0;

    vector<int> prefixsum(n, 0);
    prefixsum[0] = arr[0];

    for(int i = 1; i < n; i++){
        prefixsum[i] = prefixsum[i-1] + arr[i];
    }

    unordered_map<int, int> m;

    for(int i = 0; i < n; i++){
        if(prefixsum[i] == k) count++;

        if(m.find(prefixsum[i] - k) != m.end()){
            count += m[prefixsum[i] - k];
        }

        m[prefixsum[i]]++;
    }

    return count;
}

int main(){
    vector<int> arr = {1, 2, 3, -2, 5};
    int k = 5;

    int result = countSubarrays(arr, k);

    cout << "Number of subarrays with sum " << k << " = " << result << endl;

    return 0;
}