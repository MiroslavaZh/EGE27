#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void max_sum_div()
{

int n(0), max_ch(-1001), max_nech(-1001), cur_num(0);
cin >> n;
for (int i(0); i<n; i++)
{
    cin >> cur_num;
    if (cur_num%2!=0 and cur_num>max_nech) max_nech=cur_num;
    else if (cur_num%2==0 and cur_num>max_ch) max_ch=cur_num;
}
    if (max_nech!=-1001 and max_ch!=-1001) cout << max_nech+max_ch << endl;
    else cout << -1 << endl;
}
void max_sum_div_eff()
{
    /**
       1. Вывести остатки от деления на 40+
       2.
    */

    vector<int> ost_mod_40(40, 0);
    int n(0);
    cin >> n;
    ost_mod_40[n%40]++;
    for (int i(0); i<ost_mod_40.size(); i++)
        cout << i << ":" << ost_mod_40[i] << endl;
}


int main()
{
    max_sum_div_eff();
    return 0;
}
