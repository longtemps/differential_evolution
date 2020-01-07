#pragma once
#include<iostream>
#include "Individual.h"
using namespace std;
struct Population
{
	Individual *ind;
};


class DifferentialEvolution
{
public:
	DifferentialEvolution();
	virtual ~DifferentialEvolution();
public:
	void init_variables();//初始化变量(决策变量的边界条件，种群大小，最大适应值评价次数等)
	void init_individual();//随机初始化个体
public:
	int func_num;
	Population *parent_pop;				// pointer of the parent population
	Population *child_pop;
	double xmin[MAX_DIMENSION_OF_X];
	double xmax[MAX_DIMENSION_OF_X];

public:
	int population_size;
	int max_evaluation;
	int max_gen;
};


