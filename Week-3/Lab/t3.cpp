#include <iostream>
using namespace std;
void factorial(int n);

main()
{
    int num;
    cout << "Enter number: " << endl;
    cin >> num;
    factorial(num);
}
void factorial(int n)
{
    int c=0,b,a=1;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            a=a*(j);
            b=a;
        }
        if (n == b)
        {
            cout << "true";
            c= 1;
            break;
        }
    }
    if (c== 0)
    {
        cout << "false";
    }
}
