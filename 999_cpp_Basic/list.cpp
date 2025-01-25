#include <iostream>
using namespace std;

void initMatrix(float m[4][4])
{
    for (int i=0; i < 4; i++)
    {
        for (int j=0;j<4;j++)
        {
            m[i][j] = 0;
        }
    }
}

int main(){


    /*
        配列の定義
        配列の要素への代入
    */
    int a[10];
    a[0] = 50;

    /*
        初期化子による配列の初期化を伴う定義
     */
    int fib[5] = {0, 1, 2, 3, 4};

    /*
         配列のloop処理による初期化
    */
    int array[2];
    for (int i = 0; i < 2; i++)
    {
        array[i] = 0;

    }
    
    /*
        配列の各要素のアドレス指定
        配列の大きさを超えてもエラーは返されない。
    */
    cout << &array[0] << endl;
    cout << &array[1] << endl;
    cout << &array[2] << endl;
    cout << &array[3] << endl;
    cout << &array[4] << endl;

    cout << array[0] << endl;
    cout << array[1] << endl;
    cout << array[2] << endl;
    cout << array[3] << endl;
    cout << array[4] << endl;

    /*
        配列の添え字を書かない場合は配列の先頭のアドレスとなる
    */
    cout << &array << endl;
    cout << &array[0] << endl;

    /*
        多次元配列
    */
   float matrix[4][4] = {
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4}
    };
    
    for (int i=0; i < 4; i++){
        for(int j=0; j < 4; j++){
            cout << matrix[i][j] << endl;
        }
    }

    initMatrix(matrix);

    for (int i=0; i < 4; i++){
        for(int j=0; j < 4; j++){
            cout << matrix[i][j] << endl;
        }
    }


    return 0;
}