///week03-1.cpp 學習C++的陣列 vector<int> a;
///File-Save As 存檔十，要把檔名寫齊
#include <iostream> ///C++的cin cout
#include <vector>///C++的陣列vector
using namespace std;
int main()
{
    vector<int> a(2);///有個陣列，裡面有2格(陣列大小是2)

    for(int i=0; i<a.size(); i++) cout << a[i] << ' ';///印出陣列
    cout << endl;///跳行

    a.push_back(99);///把99推到陣列a的更後面
    a.push_back(77);///把77推到陣列a的更後面

    for(int i=0; i<a.size(); i++) cout << a[i] << ' '; ///印出陣列
    cout << endl;///跳行
}