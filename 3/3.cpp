#include <iostream>
using namespace std;

int main()
{
    setlocale(NULL, "rus");
    int N;
    double sum=0;
    cout << "Введите количество элементов массива:";
    cin >> N;
    double* mass = new double[N];
    for (int i = 0; i < N; i++)
    {
        mass[i] = rand() % 1000 / 1000. + rand() % 1000; // генератор дробных чисел до 3 знаков после запятой
        sum += mass[i];
        cout << mass[i] << " ";
    }
    cout << "\nСумма всех элементов массива = " << sum;
    delete[]mass;
    system("pause");
}