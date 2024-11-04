#include "Utils/Random.h"

int Random::getRandomInt(int min, int max)
{
    return std::rand() % (max - min + 1) + min;
}