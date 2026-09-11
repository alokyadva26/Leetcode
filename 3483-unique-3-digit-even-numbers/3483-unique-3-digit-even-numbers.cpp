
class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);
        for (int digit : digits) freq[digit]++;

        int count = 0;

        for (int num = 100; num <= 999; num++) {
            if (num % 2 != 0) continue; 

            int a = num % 10;   // ones
            int b = (num / 10) % 10; // tens
            int c = num / 100;  // hundreds

            
            vector<int> need(10, 0);
            need[a]++; need[b]++; need[c]++;

            bool possible = true;
            for (int d = 0; d < 10; d++) {
                if (need[d] > freq[d]) {
                    possible = false;
                    break;
                }
            }

            if (possible) count++;
        }

        return count;
    }
};

