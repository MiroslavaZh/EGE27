#include <iostream>
#include <vector>
using namespace std;

void number_of_products_div_10()/// delitsa na 10
{
        /**
        1. ������� �����+
        2. ��� ���� ������� +
        3. ������������ ���+
        4. ��������� ���������+
        5. ������� ���-�� ������������+
        */

        int n(0);
        cin >> n;
        vector<int> numbers(n,0);
        for (int i(0); i<n; i++)
            cin >> numbers[i];

        int good_pairs(0);

        for(int j(0); j<n-1; j++)
            for (int i(j+1); i<n; i++)
            {

            int cur_num(numbers[j]*numbers[i]);
            if (cur_num%10 ==0)
                good_pairs++;
            }
                cout<< good_pairs << endl;

}

int main()
{
    number_of_products_div_10();
    return 0;
}
