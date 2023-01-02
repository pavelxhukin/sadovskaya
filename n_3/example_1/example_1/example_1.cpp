#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int len;
    cout << "write length of array: ";cin >> len;
    int* arr = new int[len];
    
    vector<int> finalMas;

    for (int i = 0; i < len; i++) {
        cout << "Write " << i + 1 << " element of the array: "; cin >> arr[i];
    }



    for (int i = 1; i < len; i+=2) {
        if (arr[i] >= 0) {
            finalMas.push_back(arr[i]);
        }
    }
    for (int i = 0; i < finalMas.size(); i++) {
        cout << finalMas.at(i) << " ";
    }

    delete[] arr;
    return 0;

}