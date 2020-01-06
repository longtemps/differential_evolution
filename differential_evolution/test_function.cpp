#include "test_function.h"
void TestFunction::evaluate_function(double *xreal, double &sum_f_e_f, int func_num) {
	//y = sum(XX. ^ 4 - 16 * XX. ^ 2 + 5 * XX) / 10 + 79.333;
	switch (func_num) {
	case 1:
		sum_f_e_f = 0.0;
		for (int i = 0; i < CIndividual::dimension; i++) {
			sum_f_e_f += (pow(xreal[i], 4) - 16 * pow(xreal[i], 2) + 5 * xreal[i]) / 10.0 + 79.33;
		}
		break;
	default:
		cout << "该函数不存在！！！请重新输入！！！" << endl;
	}
}