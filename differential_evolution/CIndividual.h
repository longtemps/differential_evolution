#pragma once
#define MAX_DIMENSION_OF_X 50
class CIndividual
{
public:
	CIndividual();
	CIndividual(const CIndividual& );
	CIndividual &operator=(const CIndividual&);
	virtual ~CIndividual();
public:
	static int dimension;//维度
	static long long max_nfes;//最大适应值评价次数
public:
	double xreal[MAX_DIMENSION_OF_X]; //决策变量
	double value;	//决策变量（个体）的函数值
	double F;
	double CR;
};



