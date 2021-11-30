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
        cin >> numbers[i];
    int min_sum(0);
    for(int j(0); j<n-1; j++)
        for (int i(j+3); i<n; i++)
            cout << numbers[j] << " " << numbers[i] << endl;
             /**int cur_num(numbers[j]+numbers[i]);
           if (cur_num < min_sum)
                max_sum=cur_num;**/

}

int main()
{
    min_sum_dist();
    return 0;
}
