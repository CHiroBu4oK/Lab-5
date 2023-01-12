#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() 
{
    srand(time(NULL));
    int i[10][10], a, min, cordX;

    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            i[x][y] = rand() % 100;
            cout << i[x][y] << " ";
            if (x == 0 && y == 0) {
                min = i[0][0];
            }
            if (min > i[x][y]) {
                min = i[x][y];
                cordX = x;
            }
        }
        cout << endl;
    }
    cout << "Min: " << min << endl << "Cord X: " << cordX + 1 << endl;
    for (int y = 0; y < 10; y++) 
    {
        int *cum, *p, *p1;
        cum = &i[0][y];
        p = &i[cordX][y];
        p1 = &a;

        *p1 = *cum;
        *cum = *p;
        *p = *p1;
    }
    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            cout << i[x][y] << " ";
        }
        cout << endl;
    }
    return 0;
}
