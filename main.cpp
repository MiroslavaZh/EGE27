#include <iostream>
#include <vector>
using namespace std;

void min_sum_dist()
{
    /**
    1. Считать числа+
    2. Вывести пары+
    3. пары с минимальным расстоянием
    4. посчитать сумму вместо пар
    5. вывести минимум среди сум

    **/


        int n(0);
        cin >> n;
        vector<int> numbers(n,0);
        for (int i(0); i<n; i++)
            cin>> numbers[i];
        for (int i(0); i<n; i++)
            cout<< numbers[i]<< " ";

}

int main()
{
    min_sum_dist();
    return 0;
}
