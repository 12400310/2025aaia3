// week03-2b.cpp 二合一要寫2次(不要真的乘numes[i] 只乘+1,-1,0)
//LeedCode 學習計畫第8題 1822. Sign of the Product of an Array
//把陣列程起來，看是正數、負數，還是0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; //因為0乘任何數，都會變成0，只有1最乖乘什麼變什麼
        for(int i=0; i<nums.size(); i++)//看有幾個數，迴圈跑幾次
        {
            if(nums[i]>0) ans *= +1;
            if(nums[i]<0) ans *= -1;
            if(nums[i]==0) ans *= 0;
            //ans *= nums[i]; // 每次把num[i]乘誰ans裡
        }//數字越乘越大，1000個數字，乘到一半，就爆炸了，所以乘試錯了，嗚嗚嗚
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};