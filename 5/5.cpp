#include <iostream>
using namespace std;

int main()
{
    setlocale(NULL, "rus");
    cout << "Введите количество элементов массива:";
    int N,min,max,indmin=0,indmax=0,t;
    cin >> N;
    int* mass = new int[N];
    for (int i = 0; i < N; i++)
    {
        mass[i] = rand();
        cout << mass[i] << " ";
    }
    max = mass[0];
    min = mass[0];
    for (int i = 1; i < N; i++)
    {
        if (max < mass[i])
        {
            max = mass[i];
            indmax = i;
        }
        else if (min > mass[i])
        {
            min = mass[i];
            indmin = i;
        }
    }
    t = mass[indmin];
    mass[indmin] = mass[indmax];
    mass[indmax] = t;
    cout << "Изменённый массив:" << "\n";
    for (int i = 0; i < N; i++)
    {
        cout << mass[i] << " ";
    }
    delete[]mass;
    system("pause");
}