#pragma once
#include <stdlib.h>
#include <time.h>
#include <vector>

using std::vector;

class VectorManager
{
private:
    vector<int> vect;
public:
    VectorManager();
    VectorManager(vector<int> vec);

    vector<int> getVector()const;

    int getElement(int index);

    vector<int> createShuffled(int);

    void changeValue(int index, int value);

};