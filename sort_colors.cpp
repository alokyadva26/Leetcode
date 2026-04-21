#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortcolors(vector<int>& arr){
    sort(arr.begin(), arr.end());
    vector<int> result = arr;
    return arr;
    
}
// using sort function but the main question is to not use sort function
int main(){
    vector<int> arr = {2,0,2,1,1,0};
    vector<int> sorted_arr = sortcolors(arr);

    cout<< "sorted array: ";
    for(int val : sorted_arr){
        cout<<val<<" ";
    }
    return 0;
}