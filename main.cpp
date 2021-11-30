#include <iostream>
using namespace std;

void number_of_products_div_385()
{


        int n(0), cur(0);
        int n385(0), n7(0), n11(0), n5(0), n55(0), n35(0), n77(0), no(0);
        cin >> n;
        for(int i(0); i<n; i++)
        {
            cin >> cur;
            if (cur%385 ==0) n385++;
            else if (cur%55==0) n55++;
            else if (cur%35==0) n35++;
            else if (cur%77==0) n77++;
            else if (cur%7==0) n7++;
            else if (cur%11==0) n11++;
            else if (cur%5==0) n5++;
        }
        no = n - n385 - n5 - n7 - n11 - n35 - n55 - n77;
        cout << n385*n11+n385*n5+n385*n7+n385*n35+n385*n77+n385*n55+n385*no+n385*(n385-1)/2+n11*n35+n7*n55+n5*n77+n77*n35+n55*n35+n55*n77<< endl;
}

int main()
{
    number_of_products_div_385();
    return 0;
}
