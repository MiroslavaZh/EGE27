#include <iostream>
#include <vector>
using namespace std;

void min_sum_dist()
{
    /**
    1. ������� �����+
    2. ������� ����+
    3. ���� � ����������� �����������+
    4. ��������� ����� ������ ���+
    5. ������� ������� ����� ���+

    **/


int n(0);
cin >> n;
vector<int> numbers(n,0);
    for (int i(0); i<n; i++)
        cin >> numbers[i];
    int min_sum(2001);
    for(int j(0); j<n-1; j++)
        for (int i(j+4); i<n; i++)
        {
           int cur_num(numbers[j]+numbers[i]);
           if (cur_num < min_sum)
                min_sum=cur_num;

        }
    cout << min_sum << endl;
}

int main()
{
    min_sum_dist();
    return 0;
}
