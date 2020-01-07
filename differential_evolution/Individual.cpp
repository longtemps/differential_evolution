#include "Individual.h"

Individual::Individual()
{
	for (int i = 0; i < MAX_DIMENSION_OF_X; i++)
	{
		xreal[i] = 10000.0;
	}
	value = -1.0;
	F = 0.5;
	CR = 0.9;
}
Individual::Individual(const Individual& t) {
	if (&t == this)
		return;
	for (int i = 0; i < MAX_DIMENSION_OF_X; i++) {
		xreal[i] = t.xreal[i];
	}
	value = t.value;
	F = t.F;
	CR = t.CR;

}

Individual &Individual::operator=(const Individual& t) {
	if (&t == this){
		return *this;
	}
	for (int i = 0; i < MAX_DIMENSION_OF_X; i++) {
		xreal[i] = t.xreal[i];
	}
	value = t.value;
	F = t.F;
	CR = t.CR;
	return *this;
}



Individual::~Individual()
{
}