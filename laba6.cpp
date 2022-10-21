
#include <iostream>
#include <iomanip>
#include "Func.hpp"
using namespace std;
using namespace ayama;


int main()
{
    int n, p;
    
    cout << "n="; cin >> n;

    int** a = new int* [n], sum_pos;
    for (int i = 0; i < n; i++)
        a[i] = new int[n];
   
    initialize(a, n);

    showing(a, n);

    for (int j = 0; j < n; j++)
    {
        sum_pos = SumPosElColumn(a, n, j);
        cout << "Column" << j + 1 << ":  sum: " << sum_pos << "\n";
    }
    cout << "\n";
    if (int(abs(SumDigits(isMaxi(a, n)) - SumDigits(isMini(a, n)))) <= 2)
    {
        p = SwapColumns(a, n);

        if (p)
        {
            showing(a, n);

            for (int j = 0; j < n; j++)
            {
                sum_pos = SumPosElColumn(a, n, j);
                cout << "Column" << j + 1 << ":  sum: " << sum_pos << "\n";
            }

            
        }
        else
        {
            showing(a, n);
            cout << "Matrix is sorted";
        }
    }
    else
    {
        showing(a, n);
        cout << "Matrix is not sorted\n";
    }
    


    /*cout << (SumDigits(isMaxi(a, n)) - SumDigits(isMini(a, n))) << endl;
    cout << isMaxi(a, n) << endl;
    cout << isMini(a, n) << endl;
    cout << SumDigits(isMaxi(a, n)) << endl;
    cout << SumDigits(isMini(a, n)) << endl;*/

    //отладка

    for (int i = 0; i < n; i++)
        delete[]a[i];
    delete[]a;
    system("pause");
    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
