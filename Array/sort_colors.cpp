#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// using sort function but the main question is to not use sort function
// vector<int> sortcolors(vector<int>& arr){
//     sort(arr.begin(), arr.end());
//     vector<int> result = arr;
//     return arr;
    
// }

//Approach without using sort function: 
vector<int> sortcolors(vector<int>& arr){
    int low = 0 , mid = 0 , high = arr.size()-1;

    while(mid<= high){
        if(arr[mid]>= arr[high]){
            swap(arr[mid], arr[high]);
            high--;
        }else if(arr[mid]==0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }else{
            mid++;
        }
    }
    return vector<int> (arr);
    
}



int main(){
    vector<int> arr = {2,0,2,1,1,0};
    vector<int> sorted_arr = sortcolors(arr);

    cout<< "sorted array: ";
    for(int val : sorted_arr){
        cout<<val<<" ";
    }
    return 0;
}


