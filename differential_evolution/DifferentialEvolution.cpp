#include "DifferentialEvolution.h"



DifferentialEvolution::DifferentialEvolution()
{
}


DifferentialEvolution::~DifferentialEvolution()
{
}

void DifferentialEvolution::init_variables() {
	Individual::max_nfes = 50000;
	switch (func_num) {
	case 1:
		for (int i = 0; i < Individual::dimension; i++) {
			xmin[i] = -5.12;
			xmax[i] = -5.12;
		}
		break;
	default:
		cout << "序号为" << func_num << "的函数不存在！！！" << endl;
		exit(0);
	}
	population_size = 100;
	max_evaluation = Individual::max_nfes;
	max_gen = (max_evaluation) / population_size;
}


void DifferentialEvolution::init_individual(Individual *ind) {
	for (int i = 0; i < ind->dimension; i++)
	{
		ind->xreal[i] = m_rnd.rndreal(xmin[i], xmax[i]);
	}
	return;
}