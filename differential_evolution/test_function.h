
#include<iostream>
#include<math.h>
using namespace std;
class TestFunction {
public:
	TestFunction();
	virtual ~TestFunction();
public:
	void evaluate_function(double *xreal, double &value, int func_num);
	//功能：计算函数值
	//输入：xreal是输入的函数的解，value是计算出来的函数值， func_num是选取几号函数
	//2020.1.6 by CUG古天乐
};
#pragma once


