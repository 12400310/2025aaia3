///week02-3.cpp 使用 C++ 2011 年新版的字串 ()功能
///在CodeBlocks 裡，必須開啟 Setting-Compiler... 把 c++11 打勾勾
///SOII106_ADVANCE_001 Using C++
#include <iostream> /// cin cout 讀入資料、印出資料
#include <string> /// string 字串的功能
using namespace std; /// 使用命名空間標準的 std
int main()
{
	string a; ///宣告字串
	cin >> a; ///讀入字串

	string ans; /// 宣告字串 ans 放答案用的
	int N = a.length(); /// 字串a的長度
	for(int i=N-1; i>=0; i--)///倒過來的迴圈
	{
		ans += a[i];///在迴圈哩，把 a[i]塞到ans的後面
	}
	cout << a << '+' << stoi(ans) << '='
	<< stoi(a) + stoi(ans) << endl;
	///stoi() is "string to int" 把字串變成整數
}
