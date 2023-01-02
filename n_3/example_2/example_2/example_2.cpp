#include <iostream>
using namespace std;

int main()
{
    const int len = 4;
    int arr[len][len];
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            arr[i][j] = (rand() % 10);
            cout << "\t" << arr[i][j];
        }
        cout << endl;
    }
    int sum = 0;

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (arr[i][j] % 2 == 0) {
                sum += arr[i][j];
            }
        }
    }

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (i == j) {
                arr[i][j] = sum;
            }
        }
    }


    for (int i = 0; i < len; i++) {
        cout << endl;
        for (int j = 0; j < len; j++) {
            cout << "\t" << arr[i][j];
        }        
    }
}
