#include <iostream>
using namespace std;

int main()
{
    setlocale(NULL, "rus");
    cout << "Введите количество элементов массива:";
    int N,min,ind=1;
    cin >> N;
    int* mass = new int[N];
    for (int i = 0; i < N; i++)
    {
        mass[i] = rand();
        cout << mass[i] << " ";
        if (i == 0) min = mass[0];
        else if (min > mass[i])
        {
            ind = i+1;
            min = mass[i];
        }
    }
    
    cout << "минимальный элемент = " << min << " порядковый номер = " <<ind << "\n";
    delete[]mass;
    system("pause");
}