///week05-2.cpp
///熟悉 stringstream
#include <iostream> ///cin, cout getline 讀寫資料
#include <sstream> ///stringstream需要它
#include <string> ///我們的字串string
using namespace std;
int main()
{
    cout << "請輸入一段英文，裡面可有空格:";
    string s; ///字串s
    getline(cin, s); ///一次讀入一整行，放入s
    cout << "讀到了s字串：" << s << endl;

    stringstream ss(s); ///將字串s變成ss
    string word; ///字串word
    while(ss >> word)
    {
        cout << "有1個字：" << word << endl;
    }

}