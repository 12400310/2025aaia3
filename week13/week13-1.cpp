//week13-1.cpp 聖誕倒數寫程式Advent of Code 2025 第1天第1題
//Moodle點擊adventofvode.com網址 可看到黑底、白字的題目
//在LeedCode的My Playgrount我的遊戲場，可以寫程式
//LeedCode 幫你把#include全部加好了，你不用寫#include
//右下角stdin可貼上你的城市Input
//在AdentofCode.com登入你的GitHub帳號後，便可看到你的專屬謎題Input
//貼到右下角stdin後，再執行，看你的答案是多少(每個人都不一樣)
int main() {
    char c;//字母，對應方向L左轉 R右轉
    int d;//數字，要轉動幾格
    int now = 50;//一開始的密碼鎖，指向50
    int ans = 0;//轉動時有幾次停在0的地方?(我們的通關密碼)
    while(cin >> c >> d)//一直讀資料:讀字母、讀數字
    {
        //if(c=='L')
            //cout << "往左轉" << d << "格\n";
        //if(c=='R')
            //cout << "往右轉" << d << "格\n";
        //把上面兩行的中文訊息註解掉
        if(c=='L')
            now = now - d;//減掉
        if(c=='R')
            now = now + d;//加上
        
        now = (now%100 + 100) % 100;//太大的、太小的，都限制在0~99間
        //cout << "現在的刻度是:" << now << "\n";
        if(now==0)
            ans++;//轉動時，停在0的地方(我們的通關密碼)
    }
    cout << "答案是" << ans;
}

/*
Input:
L68
L30
R48
L5
R60
L55
L1
L99
R14
L82
*/