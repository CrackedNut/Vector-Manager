#include "VectorManager.h"

int main()
{
    VectorManager v;
    vector<int> vettore = v.createShuffled(10);
    printf("%d", vettore.size());
    system("PAUSE");
    return 0;
}