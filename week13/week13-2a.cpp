//week13-2a.cpp 學習計畫 Linked List 第1題
//21. Merge Two Sorted Lists 左邊lists1 右邊list2 合起來
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //練習寫看看資料結構怎麼寫程式
        ListNode* ans = new ListNode(999);//老師故意亂寫999
        ListNode* ans2 = new ListNode(888);//老師故意亂寫888
        ans->next = ans2;//把它們接起來
        //先寫4行，熟悉一下資料結構怎麼new新的節點、怎麼接起來
        return ans;
    }
};