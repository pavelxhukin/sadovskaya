#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    setlocale(0,"");
    int i = 0;
    double s = 0;
    double x;
    cout << "x=";cin >> x;
    double eps;
    cout << "eps=";cin >> eps;

    while (fabs(s) <= eps) {
        s += pow(x,1+(i*2)) / (1 + (i * 2));
        ++i;
    }
    cout <<"arctg(x)=" << atan(x)<<endl;
    cout << "s=" << s << endl << "i=" << i << endl;
}
