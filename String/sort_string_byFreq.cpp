#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

string freqSort(string s) {
    unordered_map<char, int> freq;

    for (auto c : s) {
        freq[c]++;
    }

    vector<pair<char, int>> arr(freq.begin(), freq.end());

    sort(arr.begin(), arr.end(),
         [](auto &a, auto &b) {
             return a.second > b.second;
         });

    string ans;

    for (auto &p : arr) {
        ans.append(p.second, p.first);
    }

    return ans;
}

int main() {
    string s = "tree";

    cout << freqSort(s);

    return 0;
}