//week10-2.cpp
//LeedCode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        double total = 0;//把薪水都加起來
        int N = salary.size();//總共有N個人
        int M = salary[0], m = salary[0];//把第0個人，先當最大值、最小值
        for(int i=0; i<N; i++)
        {
            total += salary[i];//把薪水都加起來
            if(salary[i]>M)
                M = salary[i];//比最大值更大，最大值換人
            if(salary[i]<m)
                m = salary[i];//比最小值更小，最小值換人
        }
        //return total / N; //不可以直接全部都除，要先扣掉最大值、最小值
        return (total- M -m) / (N - 2);//去除2個人(最大值、最小值)再除
    }
};