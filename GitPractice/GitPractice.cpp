#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    
    int size;
    cout << "Введите количество элементов: ";
    cin >> size;

    vector<int> vec(size);

    cout << "Введите элементы: ";
    for (int i = 0; i < size; i++) {
        cin >> vec[i];
    }

    cout << "Vector: ";
    for (int number : vec) {
        cout << number << " ";
    }
}
