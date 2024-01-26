#include "Random.h"

std::default_random_engine engine(time(nullptr));

int Random::operator()(int min, int max)
{
	if (min > max)
		std::swap(min, max);

	std::uniform_int_distribution<int> range(min, max);

	return range(engine);
}
