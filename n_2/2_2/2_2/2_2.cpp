#include <iostream>
using namespace std;

int ifthereSum(int gog) {
    int sum = 0;

    for (int i = 1; i <= gog / 2; i++) {
        if (gog % i == 0) {
            sum += 1;
        }
    }

    return sum;
}


int main()
{   
    int m;
    cout << "m=";cin >> m;
    int n;
    cout << "n=";cin >> n;
    
    int max = 0;

    for (int i = m; i <= n; i++) {
        if (ifthereSum(i) > max) {
            max = ifthereSum(i);
        }
    }
    for (int i = m; i <= n; i++) {
        if (ifthereSum(i) == max) {
            cout << i << endl;
        }
    }
    
    return 0;
}
