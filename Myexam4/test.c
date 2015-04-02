//编程练习
#include <float.h>
#include <limits.h>

void test1(void){
	char xing[10];
	char ming[10];

	printf("请输入您的名字和姓氏:\n");

	scanf("%s %s", xing, ming);

	printf("%s,%s\n", xing, ming);
}

void test2(void){
	char ming[10];

	printf("请输入您的名字和姓氏:\n");
	scanf("%s", ming);

	printf("\"%s\"\n", ming);
	printf("\"%20s\"\n", ming);
	printf("\"%-20s\"\n", ming);

	printf("%8s\n", ming);

}

void test3(void){
	float a;
	printf("please enter a float number:\n");

	scanf("%f",&a);

	printf("a.the input is %.1f or %3.1e\n", a, a);
	printf("b.the input is +%.3f or %5.3E\n", a, a);
}

void test4(void){
	float a;
	char name[20];

	printf("please enter your height by feet and your name:\n");

	scanf("%f %s", &a, name);

	printf("%s ,your are %5.3f feet tall\n", name,a );

}


void test5(void){
	float x[20];
	float m[20];

	printf("please enter your first name:\n");

	scanf("%s",m);

	printf("please enter your last name:\n");

	scanf("%s",x);

	printf("%10s %10s\n", m, x);
	printf("%10d %10d\n", strlen(m), strlen(x));
	printf("%-10s %-10s\n", m, x);
	printf("%-10d %-10d\n", strlen(m), strlen(x));
}


void test6(void){
	float n1 = 1.0/3.0;
    double n2 = 1.0/3.0;

	printf("the float view1 is %.4f\n",n1);
	printf("the float view2 is %.12f\n",n1);
	printf("the float view3 is %.16f\n",n1);

	printf("the double view1 is %.4f\n",n2);
	printf("the double view2 is %.12f\n",n2);
	printf("the double view3 is %.16f\n",n2);

	printf(" the FLT_DIG is %d\n",FLT_DIG);
	printf(" the DBL_DIG is %d\n",DBL_DIG);
}

#define GALUN 3.785
void test7(void){
	const float INRE = 1.609;
	float lc;
	float yl;
	double avg;
	double anoAvg;


	printf("please enter the range and oil:\n");

	scanf("%f%f", &lc, &yl);
	
	avg = lc/yl;

	printf("the avg is %.1f\n",avg);

	anoAvg = lc*INRE/(yl*GALUN);
	
	printf(" the result is %.1f\n", anoAvg*100);
}

