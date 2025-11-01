#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    //Ввод размера квадратной матрицы
    int n;
    cout << "Введите размер матрицы:";
    cin >> n;
    cout << "Введите элементы матрицы A(NXN):" << endl;
    int** a = new int* [n];

    //Ввод всех элементов в массиве через консоль
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cout << "Введите A[" << i << "][" << j << "]:";
            cin >> a[i][j];
        }
    }

    //Вывод введенного массива
    cout << "Ваш Массив:" << endl; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(10) << a[i][j] << " ";
        cout << endl;
    }

    //Проверка на симметричность 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != a[n - 1 - j][n - 1 - i])
            {
                cout << "Матрица не симметрична относительно побочной диагонали" << endl;
                return 0;
            }
        }
    }
    cout << "Матрица симметрична относительно побочной диагонали" << endl;
    return 0;
}