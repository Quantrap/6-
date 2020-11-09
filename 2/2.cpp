#include <iostream>
using namespace std;

int main()
{
    setlocale(NULL, "rus");
    cout << "Введите количество элементов массива:";
    int N;
    cin >> N;
    int* mass = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> mass[i];
        if (mass[i] < 0) mass[i] = 0;
    }
    cout << "Изменённый массив:" << "\n";
    for (int i = 0; i < N; i++)
    {
        cout << mass[i] << " ";
    }
    delete []mass;
    system("pause");
}