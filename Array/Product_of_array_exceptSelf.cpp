#include<iostream>
#include<vector>
using namespace std;

vector<int > product(vector<int>& arr){
    int n = arr.size();
    vector<int> ans(n, 1);

    int leftProduct = 1;
    for( int i = 0 ; i < n ; i++){
        ans[i] = leftProduct;
        leftProduct *= arr[i];
    }

    int rightProduct = 1 ;
    for(int i = n - 1; i >= 0 ; i--){
        ans[i] *= rightProduct;
        rightProduct *= arr[i];
    }
    return ans;
}


int main(){
    vector<int> nums = {1 , 2 , 3, 4};
    vector <int> result = product(nums);

    cout<< "product is: ";
    for(int num: result){
        cout<<num<<" ";
    }

    return 0;
}