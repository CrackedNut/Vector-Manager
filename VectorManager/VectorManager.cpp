#include "VectorManager.h"

VectorManager::VectorManager()
{
}

VectorManager::VectorManager(vector<int> vec)
{
    vect = vec;
}

vector<int> VectorManager::getVector() const
{
    return vect;
}

int VectorManager::getElement(int index)
{
    return vect[index];
}

vector<int> VectorManager::createShuffled(int size)
    {
    srand(time(NULL));
    vect.resize(size);
    for(int i = 0; i < size; i++)
    {
        while(1)
        {
            int r = rand() % size;
            if(getElement(r) == NULL)
            {
                changeValue(r, i+1);
                break;
            }
        }
    }
    return vect;
}