#include <iostream>
using namespace std;

class CNum{
private:
    int x;
    static int y; //設一個靜態變數Y
public:
    CNum(int a) {
        x = a;
        y+=x; //每次有一個物件產生後Y就會累加
    }

    static void fun (CNum m){
        cout << m.x << ":" << y << endl;
    }
};
int CNum::y = 2; //靜態變數在class外部設值

int main() {
    CNum f1(4),f2(7);
    CNum::fun(f1);
    CNum::fun(f2);

    return 0;
}

