
#include<iostream>
#include<math.h>
using namespace std;
class CTestFunction {
public:
	CTestFunction();
	virtual ~CTestFunction();
public:
	void evaluate_function(double *xreal, double &value, int func_num);
	//���ܣ����㺯��ֵ
	//���룺xreal������ĺ����Ľ⣬value�Ǽ�������ĺ���ֵ�� func_num��ѡȡ���ź���
	//2020.1.6 by CUG������
};
#pragma once


