//week05-4.cpp
//LeedCode Built.In Funtion 第2題 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.length(); i++)//每一個字母
            s[i] = tolower(s[i]);//變小寫
        //每個字母，都變成小寫(完整版要#include <ctype.h>
        //或是用#include <cctype>兩個是同一個檔案啦
        return s;//答案送出去
    }
};