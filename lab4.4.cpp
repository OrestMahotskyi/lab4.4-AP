
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double R1, R2, xp, xk, dx, x, y;
    cout << "R1 = "; cin >> R1 ;
    cout << "R2 = "; cin >> R2;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "            y" << "            |" << endl;
    cout << "---------------------------" << endl;

    for(x = xp; x <= xk; x++)
    {
        if(x <= -1 -2 * R1)
        {
            y = (-R1*x) - (2 * (R1 * R1)); // вираз 1
        }
        else
            if(-1-2 * R1 < x && x <= 0)
            {
                y = (- 1.0/2) * x; // вираз 2
            }
            else
                if(0 < x && x <= R2)
                {
                    y = R2 - sqrt((R2 * R2) - (x * x)); // вираз 3
                }
                else
                    if(R2 < x && x <= 2 * R2)
                    {
                        y = sqrt((R2 * R2) - ((x * x) - (2 * R2 * x) + (R2 * R2))); // вираз 4
                    }
                    else
                        y = (x - 2 * R2)/ (6 - 2 * R2); // вираз 5
                    cout << "|" << setw(10) << setprecision(5) <<  "    " <<y
                            << "        |" << endl;
                    x += dx;
    }
    cout << "---------------------------" << endl;
    

    cin.get();
    return 0;
}