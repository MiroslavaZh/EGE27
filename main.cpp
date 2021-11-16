#include <iostream>
using namespace std;

void number_of_products_div_77()
{
        /**
        1. Считать число
        2. Добавить его к одному из счётчиков (n10,n5,n2,no)
        3. Ответ:n22*n11+n22*n2+n22*no+n22(n22-1)/2*n11*n2
        */

        int n(0), cur(0);
        int n77(0), n7(0), n11(0), no(0);
        cin >> n;
        for(int i(0); i<n; i++)
        {
            cin >> cur;
            if (cur%77 ==0) n77++;
            else if (cur%7==0) n7++;
            else if (cur%11==0) n11++;
        }
        no = n - n77 - n7 - n11;
        cout << n77*n11+n77*n7+n77*no+n77*(n77-1)/2+n11*n7 << endl;

}

int main()
{
    number_of_products_div_77();
    return 0;
}