#include <iostream>
using namespace std;
void location();
main()
{
  location();
}
void location()
{
  int h, x, y;
    cout << "Enter value of h ";
    cin >> h;
    cout << "Enter coordinates of x ";
    cin >> x;
    cout << "Enter coordinates of y ";
    cin >> y;
    if((y < (3 * h)) && (x < h))
    {
        cout << "Inside";
    }
    else if((y < (h * 4)) && ((x > h) && (x < (h * 2))))
    {
        cout << "Inside";
    }
    else if((y > h) && (x < h))
    {
        cout << "Outside";
    }
    else if((y > (h * 4)) && ((x > h) && (x < (h * 2))))
    {
        cout << "Outside";
    }
    else if((y > h) && (x > (h * 2)))
    {
        cout << "Outside";
    }
    else if((x == 0) && ((y >= 0) && (y < h)))
    {
        cout << "Border";
    }
    else if((y == h) && ((x >= 0) && (x < h)))
    {
        cout << "Border";
    }
    else if((x == h) && ((y >= h) && (y <= (h * 4))))
    {
        cout << "Border";
    }
    else if((y == (h * 4)) && ((x > h) && (x <= (h * 2))))
    {
        cout << "Border";
    }
    else if((x == (h * 2)) && ((y >= h) && (y <= (h * 4))))
    {
        cout << "Border";
    }
    else if((y == h) && (x >= (h * 2)) && (y <= (h * 3)))
    {
        cout << "Border";
    }
    else if((x == (h * 3)) && ((y >= 0) && (y < h)))
    {
        cout << "Border";
    }
    else 
    {
        cout <<"Enter valid coordinates";
    }
}