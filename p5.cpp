#include "sol1_5.h"

using std::cin; using std::cout; using std::endl;
using std::string;

int main()
{
    int n;
    n = getHeight();
    checkHeight(n);
    drawHourglass(n);

    return 0;
}

int getHeight()
{
    int n;
    cout << "Enter hegiht of the hourglass : ";
    cin >> n;
    cout << endl;
    return n;
}

void checkHeight(int n)
{
    if(n == 1)
    {
        cout << "n must be larger than 1!! terminating program..." << endl;
        exit(-1);
    }

    if(n < 0)
    {
        cout << "n must be positive!! terminating program..." << endl;
        exit(-1);
    }
}


void drawHourglass(int n)
{
    for(int i = 0; i < n; i++){
        cout << "*";
    } 
    cout << endl;

    int m = 1;
    while (m < n-1)
    {
        string line(n, ' ');
        line.replace(m, 1, "*");
        line.replace((n-1-m), 1, "*");
        cout << line << endl;
        m++;
    }
    
    for(int i = 0; i < n; i++){
        cout << "*";
    } 
    cout << endl;
}

