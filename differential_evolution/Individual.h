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
	static int dimension;//ά��
	static long long max_nfes;//�����Ӧֵ���۴���
public:
	double xreal[MAX_DIMENSION_OF_X]; //���߱���
	double value;	//���߱��������壩�ĺ���ֵ
	double F;
	double CR;
};



