#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char ch = 'A' + count;
            cout << ch << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}
