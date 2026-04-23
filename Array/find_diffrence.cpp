#include<iostream>
#include <algorithm>
using namespace std;


// this is not the optimal solution as we are using sort function which is 0(nlogn)
char duplicate(string a , string b){
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());

    for(int i = 0 ; i < a.size(); i++){
        if(a[i]!=b[i]){
            return b[i];
        }
    }

    return b[b.size()-1];
}

int main(){
    string s = "";
    string t = "y";
    char result = duplicate(s,t);
    cout<< "duplicate character is: "<< result << endl;
    return 0;
}