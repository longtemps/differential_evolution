#include "CTestFunction.h"
#include "CIndividual.h"
CTestFunction::CTestFunction()
{
}

CTestFunction::~CTestFunction()
{
}


void CTestFunction::evaluate_function(double *xreal, double &value, int func_num) {
	//y = sum(XX. ^ 4 - 16 * XX. ^ 2 + 5 * XX) / 10 + 79.333;
	switch (func_num) {
	case 1:
		value = 0.0;
		for (int i = 0; i < CIndividual::dimension; i++) {
			value += (pow(xreal[i], 4) - 16 * pow(xreal[i], 2) + 5 * xreal[i]) / 10.0 + 79.33;
		}
		break;
	default:
		cout << "该函数不存在！！！请重新输入！！！" << endl;
	}
}