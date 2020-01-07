#include "CIndividual.h"

CIndividual::CIndividual()
{
	for (int i = 0; i < MAX_DIMENSION_OF_X; i++)
	{
		xreal[i] = 10000.0;
	}
	value = -1.0;
	F = 0.5;
	CR = 0.9;
}
CIndividual::CIndividual(const CIndividual& t) {
	if (&t == this)
		return;
	for (int i = 0; i < MAX_DIMENSION_OF_X; i++) {
		xreal[i] = t.xreal[i];
	}
	value = t.value;
	F = t.F;
	CR = t.CR;

}

CIndividual &CIndividual::operator=(const CIndividual& t) {
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



CIndividual::~CIndividual()
{
}