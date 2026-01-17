

#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    if (A > B && A > C)
    {
        if (B > C)
        {
            cout << "Min = " << C << endl;
            cout << "Max = " << A;
        }
        else
        {
            cout << "Min = " << B << endl;
            cout << "Max = " << A;
        }
    }
    else if (B > A && B > C)
    {
        if (A > C)
        {
            cout << "Min = " << C << endl;
            cout << "Max = " << B;
        }
        else
        {
            cout << "Min = " << A << endl;
            cout << "Max = " << B;
        }
    }
    else if (B > A)
    {
        cout << "Min = " << A << endl;
        cout << "Max = " << C;
    }
    else
    {
        cout << "Min = " << B << endl;
        cout << "Max = " << C;
    }
}