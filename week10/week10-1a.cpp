//week10-1a.cpp 寫2次，第1次，用for迴圈，第2次用數學
//1523. Count Odd Numbers in an Interval Range
//從low ... high od奇數
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        for(int i=low; i<=high; i++)
        {
            if(i%2==1)
                ans++;
        }
        return ans;
    }
};