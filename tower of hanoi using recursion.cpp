//tower of hanoi using recursion
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source_rod, char dest_rod,
                  char aux_rod)
{
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, source_rod, aux_rod, dest_rod);
    cout << "Move disk " << n << " source rod " << source_rod
         << " dest rod " << dest_rod << endl;
    towerOfHanoi(n - 1, aux_rod, dest_rod, source_rod);
}

int main()
{
    int N = 3;

    towerOfHanoi(N, 'A', 'C', 'B');
    return 0;
}
