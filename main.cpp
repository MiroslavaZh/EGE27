#include <iostream>
#include <vector>
using namespace std;

void number_of_products_div_10()/// delitsa na 10
{
        /**
        1. Считать числа+
        2. Все пары вывести (первое на все, второе на все, кроме первого и т.д)+
        3. произведение пар
        4. проверить делимость (оканчивается на 0)
        5. вывести кол-во произведений
        */

        int n(0);
        cin >> n;
        vector<int> numbers(n,0);
        for (int i(0); i<n; i++)
            cin >> numbers[i];


        for(int j(0); j<n-1; j++)
            for (int i(j+1); i<n; i++)
                cout<< numbers[j]*numbers[i] << endl;
}

int main()
{
    number_of_products_div_10();
    return 0;
}
