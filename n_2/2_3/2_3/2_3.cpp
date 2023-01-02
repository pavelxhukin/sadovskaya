#include <iostream>
using namespace std;

int goFind(int input) {
    int n = 1,x = input,sum = 0;
    while ((x /= 10) > 0) {
        n++;
    }

    for (;n>0;n--) {
        sum += input % 10;
        input /= 10;
    }
    sum += input;
    return sum;
}

int main()
{
    int x;
    cout << "write x:";cin >> x;
    int aimSum = goFind(x);
    
    for (int i = 1; i < x; i++) {
        if (goFind(i) == aimSum) {
            cout <<i<<endl;
        }

    }
    
    return 0;
}