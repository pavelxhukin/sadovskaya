#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


int main()
{   
    string data;
    string first="";
    string second = "";
    getline(cin, data);
    int len = 0;
    int i = 0;

    while(data[i] != ' ') {
        first += data[i];
        i++;
    }
    i = data.length()-1;
    while (data[i] != ' ') {
        i--;
    }
    i++;
    while (data[i] != '.') {
        second += data[i];
        i++;
    }

    data.erase(0, first.length());
    data.erase(data.length() - 1 - second.length(), second.length() + 1);

    data = second + data + first + ".";

    cout << data;
}