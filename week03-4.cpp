//week03-4.cpp
//LeedCode 挑戰題(賺金幣題) 120. Triangle 找到最上面往下走的最小值
class Solution {//使用動態規劃慢慢更新陣列就好了
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //triangle[i][j] 第i層的第j個數
        int N = triangle.size();//總共有幾層
        //從下往上查，最下面的第N-1層，沒問題，就是本身的最小值 所以N-2往上更新
        for(int i=N-2; i>=0; i--)//倒過來的迴圈從N-2往上
        {
            for(int j=0; j<=i; j++)
                triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
                //每個人，要看它下面2個選擇(正下方、下方偏右)，找最小的那一個
        }
        return triangle[0][0];
    }
};