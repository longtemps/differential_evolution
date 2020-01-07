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
	void init_variables();//��ʼ������(���߱����ı߽���������Ⱥ��С�������Ӧֵ���۴�����)
	void init_individual();//�����ʼ������
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


