//week04-3.cpp
//LeedCode 66. Plus One
//1 2 3
//    4最右邊開始，+1完成
//4 3 2 1
//      2最右邊開始，+1完成
//9 4 9
//    0有進位，怎麼辦?不可return繼續做
//  5最右邊+1完成
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();//上週教過 陣列的大小
        for(int i=N-1; i>=0; i--)//到過來的迴圈
        {
            if(digits[i]==9)//要進位，麻煩了(不能結束)
                digits[i] = 0;//設成0，繼續做、不結束
            else //不用進位的話，超爽的!直接++就結束了!!
            {
                digits[i]++;//簡單+1啦
                return digits;//把全部的陣列當答案return
            }
                
        }
        digits.insert(digits.begin(),1);//最左邊要插入1
        return digits;//結束囉
    }
};