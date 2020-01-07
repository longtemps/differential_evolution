#pragma once
#define MAX_DIMENSION_OF_X 50
class Individual
{
public:
	Individual();
	Individual(const Individual& );
	Individual &operator=(const Individual&);
	virtual ~Individual();
public:
	static int dimension;//维度
	static long long max_nfes;//最大适应值评价次数
public:
	double xreal[MAX_DIMENSION_OF_X]; //决策变量
	double value;	//决策变量（个体）的函数值
	double F;
	double CR;
};



