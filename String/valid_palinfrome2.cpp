#include <iostream>
using namespace std;

bool isPlaindrome(string s , int i , int j){
    while(i< j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
        
    }
    return true;
}

bool validPlaindrome(string s){
    int i = 0 , j = s.size() - 1;
    while( i < j){
        if(s[i]!= s[j]){
            return isPlaindrome(s , i+1 , j) || isPlaindrome(s , i , j-1);
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    string s = "abcba";
    bool result = validPlaindrome(s);
    cout<< result <<endl;
}