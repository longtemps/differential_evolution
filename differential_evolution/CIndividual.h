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
	static int dimension;//ά��
	static long long max_nfes;//�����Ӧֵ���۴���
public:
	double xreal[MAX_DIMENSION_OF_X]; //���߱���
	double value;	//���߱��������壩�ĺ���ֵ
	double F;
	double CR;
};



