#include <iostream>
#include <vector>

using namespace std;

void max_sum_div()
{
    /**
    1. Считать числа+
    2. Вывести все пары+
    3. Вместо пары - суммы
    4. делимость сумм
    5. Только наибольшая сумма
    */
    int n(0);
    cin >> n;
    vector <int> numbers(n);
    for(int i(0);i<n;i++)
        cin >> numbers[i];
    cout << endl;
    for(int j(0); j<n-1; j++)
        for (int i(j+1); i<n; i++)
            {
            int cur_num(numbers[j]+numbers[i]);
            cout<< cur_num << endl;
            }

}


int main()
{
    max_sum_div();
    return 0;
}
