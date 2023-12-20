/*
基於題目6-4所寫的MaxHeap類別，新增int Delete()函式，可以刪除根節點，並依照最大堆積樹的規則調整位置，最後回傳刪除的值。

系統輸入：
第一行，Insert()的執行次數
第二行，依序傳入Insert()的參數
第三行，Delete()的執行次數

結果輸出：
函式Print()的執行結果

輸入範例：
9
9 4 2 5 1 8 11 22 10
3

輸出範例：
9 5 8 4 1 2
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{   
    MaxHeap tree1;
    int times, input;
    for(cin >> times; times > 0; times--) {cin >> input; tree1.Insert(input);}
    for(cin >> times; times > 0; times--) {tree1.Delete();}
	tree1.Print();
}