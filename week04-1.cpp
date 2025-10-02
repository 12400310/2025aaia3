// week04-1.cpp 模擬題，照著題目寫程式
//LeedCode 挑戰題 3100. Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;//一開始就喝了這麼多瓶
        while(numBottles >= numExchange)//如果瓶子數>=兌換量，就兌換
        {
            numBottles = numBottles - numExchange + 1;// 兌換1瓶飲料
            ans++;//多喝一瓶
            numExchange++;//兌換標準多一瓶
        }
        return ans;
    }
};