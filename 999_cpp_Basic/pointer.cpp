#include <iostream>
using namespace std;

int i = 20;
int& r = i;
    
void Swap(int &a, int& b ){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 0;
    int b = 2;

    int* p = &a;

    /*
        参照渡し
            Swapの引数が参照私になっているため、変数を受け取ると、変数に対して変更を行う。
            上記例でいえば、Swap内でReturnなどを行っていないが、本の変数に対して変更を行うため
            Swap関数の処理後、本の変数はSwap内での処理の影響を受けていることが確認できる。

        値渡し
            参照渡しとは対称に、変数ではなく直接値として受け取る方式。
    */
    Swap(a, b);
    cout << a <<b << endl;
    
    /*
        adrressの表示
            &a: 変数ａのアドレスを表示している。
            p: 変数aのポインタなので、変数aのアドレスが格納されている。
            &p: ポインタp自身のアドレスを表示している。    
    */ 
    cout << &a << endl;
    cout << &b << endl;
    cout << p << endl;
    cout << &p << endl;
    
    /*
        間接参照
            ポインタを介して参照先である変数aの値を変更している。
    */
    *p = 42;
    
    Swap(a, b);
    cout << a <<b << endl;
    
    
    /*
        ヌルポインタ
            ポインタを初期化する際はnullptrを指定する。
            間接参照するとクラッシュするため注意。
    */
    char* ptr = nullptr;
    
    return 0;

}