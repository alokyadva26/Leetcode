#include<iostream>
using namespace std;

bool isPalindrome(string s){
    string str = "";
    for(char ch : s){
        ch = tolower(ch);
        if(isalnum(ch)){
            str += ch;
        }
    }
    int i = 0 , j = str.size()-1;
    while (i < j) {

            if (str[i] != str[j]) {
                return false;
            }

            i++;
            j--;
        }

        return true;
}
int main(){
    string s = "A man, a plan, a canal: Panama";
    bool result = isPalindrome(s);
    cout<< result <<endl;
}