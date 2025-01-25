#include <iostream>
using namespace std;

int main(){

    /*
        動的メモリを割り当てたINT型の型定義と解除
    */
    int* dynamicint = new int;
    int dynI = 1024024;
    cout << dynI << endl;
    delete  dynamicint; // メモリリークを防ぐために使い終わったら削除する必要がある。

    /*
        配列にも動的メモリを定義可能
    */
    char* dynArray = new char[4*1024*1024];
    dynArray[0] = 1;

    cout << dynArray[0] << endl;
    delete[] dynArray; // 動的もメモリを割り当てた配列の削除は delete[] である点に注意

    return 0;
}