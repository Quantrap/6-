#include <iostream>
using namespace std;

int main()
{
    setlocale(NULL, "rus");
    int N;
    double k=0;
    cout << "Введите количество элементов массива:";
    cin >> N;
    double* mass = new double[N];
    for (int i = 0; i < N; i++)
    {
        cin >> mass[i];
    }
    for (int i = 1; i < N; i++)
    {
        if (abs(mass[i] - mass[i - 1]) < 0.0001) k += 1;
    }
    cout << "\nКоличество пар = " << k << "\n";
    delete[]mass;
    system("pause");
}