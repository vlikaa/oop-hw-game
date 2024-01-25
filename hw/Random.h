#pragma once

#include <random>

class Random
{
public:
	int operator()(int min = 1, int max = 50);
};

