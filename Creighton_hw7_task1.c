#include <stdio.h>
#include <stdlib.h>

#define LEN 5

void copy_arr(double ar1[], const double ar2[], int n);
void copy_ptr(double *ar1, const double *ar2, int n);
void copy_ptrs(double *ar2, double *start, const double *end);
void show_arr(const double ar[], double n);

int main(int argc,char *argv[])
{
	double source[LEN] = {1.1, 2.2, 3.3, 4.4, 5.5};
	printf("source array:			 ");
	show_arr(source, LEN);
	double target1[LEN];
	double target2[LEN];
	double target3[LEN];

	copy_arr(target1, source, LEN);
	copy_ptr(target2, source, LEN);
	copy_ptrs(target3, source,source + LEN);

	

return 0;
}
 
void copy_arr(double ar1[], const double ar2[], int n)
{
	int m;
	for(m = 0; m < n; m++)
	{
		ar1[m] = ar2[m];
	}
	printf("copied by subscript:		 ");
	show_arr(ar1, m);
}

void copy_ptr(double *ar1, const double *ar2, int n)
{
	int m;
	for(m = 0; m < n; m ++)
	{
		*(ar1 + m) = *(ar2 + m);
	}
	printf("copied by pointer:		 ");
	show_arr(ar1, m);
}

void copy_ptrs(double *ar2, double *start, const double *end)
{
	int m = 0;
	while(start != end)
	{
		ar2[m] = *start;
		m++;
		start++;
	}
	printf("compied using pointer range:     ");
	show_arr(ar2, LEN);

}

void show_arr(const double ar[], double n)
{
	int m;
	for(m = 0; m < n; m ++)
	{
		printf("%lf ", ar[m]);
	}
	printf("\n");
}
