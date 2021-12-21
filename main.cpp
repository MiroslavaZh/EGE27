#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void max_pr_div()
{

    /**
    1. Считать числа+
    2. Вывести все тройки
    3. Вместо тройки - произведение
    4. делимость произведения
    5. Только наибольшее произведение
    */
    int n(0);
    cin>>n;
    vector <int> numbers(n);
    for(int i(0);i<n;i++)
        cin >> numbers[i];
        int max_pr(0);
        for(int j(0); j<n-1; j++)
            for (int i(j+1); i<n; i++)
                for (int k(i+1); k<n;k++)
                    cout << numbers[j] << " " <<  numbers[i]<< " "<< numbers[k]<< endl;
            /**{
            int cur_num(numbers[j]*numbers[i]*numbers[i]);
            if (cur_num%4=0 and cur_num > max_pr)
                max_pr=cur_num;
            }
            cout<< max_sum << endl;*/

}


int main()
{
    max_pr_div();
    return 0;
}
