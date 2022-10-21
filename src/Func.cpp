#include <iostream>
#include <iomanip>
using namespace std;
namespace ayama
{
    int SumPosElColumn(int** a, int n, int idx)
    {
        int sum_pos = 0.;
        for (int i = 0; i < n; i++)
            sum_pos += a[i][idx];
        return sum_pos;
    }

    int SwapColumns(int** a, int n)
    {
        int p = 0;
        for (int j = 1; j < n; j++)
            for (int k = 0; k < n - j; k++)
                if (SumPosElColumn(a, n, k) > SumPosElColumn(a, n, k + 1))
                {
                    p = 1;
                    for (int i = 0; i < n; i++)
                        swap(a[i][k], a[i][k + 1]);
                }
        return p;
    }


    int isMaxi(int** a, int n)
    {
        int maxi = a[0][0];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] > maxi)
                    maxi = a[i][j];
            }
        }
        return maxi;
    }

    int isMini(int** a, int n)
    {
        int mini = a[0][0];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] < mini)
                    mini = a[i][j];
            }
        }
        return mini;
    }

    int SumDigits(int n)
    {
        int sum = 0;
        int p = abs(n);
        while (p > 0)
        {
            sum += p % 10;
            p /= 10;
        }
        return sum;
    }

    void initialize(int** a, int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
            cout << endl;
        }
    }
    void showing(int** a, int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << setw(5) << a[i][j];
            }
            cout << "\n";
        }
    }

    
}
