#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& num1 , int m, vector<int>& num2 , int n){
    int i = m - 1;
    int j = n- 1;
    int idx = m + n - 1;

    while(i >=0 && j >=0){
        if(num1[i] <= num2[j]){
            num1[idx--]=num2[j--];
        }
        else{
            num1[idx--]= num2[i--];
        }
    }

    while(j >= 0){
        num1[idx--] = num2[i--];
    }

}

int main(){
    vector<int> num1 = {1, 2, 3, 0, 0, 0};
    vector<int> num2 = {2, 5, 6};
    int m = 3;
    int n = 3;

    merge(num1 , m ,num2 , n);
    cout << "Merged array: ";
    for ( int num : num1){
        cout<< num << " ";
    }
    return 0;
}