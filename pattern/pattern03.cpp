#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int row = 1; row <= n; row++)
    {
        int space = n - row;
        for (int col = 1; col <= n; col++)
        {
            if (space > 0)
            {
                cout << " ";
                space--;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}