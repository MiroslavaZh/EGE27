#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void max_pr_div()
{

    /**
    1. Считать числа+
    2. Вывести все тройки+
    3. Вместо тройки - произведение+
    4. делимость произведения+
    5. Только наибольшее произведение+
    */

        int n(0), cur(0);
        int max_div4(0),max_nediv(0), max_nediv_no_ne_max(0), max_pr(0);
        cin >> n;
        for(int i(0); i<n; i++)
        {
            cin >> cur;
            if (cur%4 ==0 and cur>max_div4) max_div4=cur;
            else if (cur%4!=0 and cur>max_nediv) max_nediv=cur;
            else if (cur%4!=0 and cur>max_nediv_no_ne_max and max_nediv>cur)
                {
                    max_nediv_no_ne_max=max_nediv;
                    max_nediv=cur;
                }
            int cur_num(max_div4*max_nediv*max_nediv_no_ne_max);
            if (cur_num>max_pr)
                max_pr=cur_num;

        }
        cout <<max_div4 << " " << max_nediv << " " << max_nediv_no_ne_max << endl;



}


int main()
{
    max_pr_div();
    return 0;
}
