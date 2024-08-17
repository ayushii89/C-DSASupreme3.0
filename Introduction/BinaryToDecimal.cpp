#include <iostream>
#include <cmath>
using namespace std;

int BtoD(int n)
{
    int Dno=0 ;
    int i = 0;
    while (n > 0)
    {
        int digit = n %10;
        Dno = digit * pow(2, i) + Dno;
        i++;
        n = n / 10;
    }
    return Dno;
}

int main()
{
    int n;
    cin >> n;
    int no = BtoD(n);
    cout << no << endl;
}
