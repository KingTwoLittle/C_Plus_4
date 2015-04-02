//∏¥œ∞Ã‚

#include <stdio.h>
#include <string.h>


#define DENSITY 62.4
void fun1(void);
void fun2(void);
void fun3(void);
//void fun4(void);
void fun5(void);

void test1(void);
void test2(void);
void test3(void);
void test4(void);
void test5(void);
void test6(void);
void test7(void);

void main(void){
//fun1();
//fun2();
//fun3();
//fun5();
//test1();
//test2();
//test3();
//test4();
//test5();
//test6();
test7();
}

//

void fun1(void){
	float weight, volume;
	int size,letters;
	char name[40];

	printf("Hi,what is your name?\n");
	scanf("%s",name);
	printf("%s.what is your weight in pounds?\n",name);
	scanf("%f",&weight);
	//printf("your weight is %f\n",weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well,%s,your volume is %2.2f cubic feet.\n", name, volume);
	printf("Also,your name has %d letters.\n", letters);
	printf("and we have %d bytes to store it in.\n",size);
}

void fun2(void){
	printf("%c%c%c\n", 'H',105,'\41');
}


#define Q "His Hamlet was funny without being vulgar."
void fun3(void){
	printf("%s\nhas %d characters.\n", Q,strlen(Q));
	printf("\"%s\"\nhas %d characters.\n", Q,strlen(Q));
}


#define BOOK "War and Peace"
void fun5(void){
	float cost = 12.99;
	float percent = 80.0;

	printf("This copy of \"%s\" sells for $%.2f.\n", BOOK, cost);
	printf("That is %.0f%% of list.\n",percent);
}


