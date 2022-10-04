#include <stdio.h>
void jolly(void);
void deny(void);
void br(void);
void ic(void);
void smile(void);
void one_three(void);
void two(void);

int main(void) {
	printf("林政浩\n");
	printf("林\n");
	printf("政浩\n");
	printf("林");
	printf("政浩\n");
	
	printf("林政浩，广东省汕尾市\n");

	int age;
	age = 22;
	printf("你已经活了%d年，也就是%d天。\n",age,age*365);

	jolly();
	jolly();
	jolly();
	deny();

	br();
	printf(",");
	ic();
	printf("\n");
	ic();
	printf(",\n");
	br();
	printf("\n");

	int toes;
	toes = 10;
	printf("toes:%d,toes的两倍:%d,toes的平方:%d\n",toes,2*toes,toes*toes);

	smile(); smile(); smile(); printf("\n");
	smile(); smile(); printf("\n");
	smile(); printf("\n");

	printf("starting now\n");
	one_three();
	printf("done!\n");

	return 0;
}
void jolly(void) {
	printf("For he's a jolly good fellow!\n");
}
void deny(void) {
	printf("Which nobody can deny!\n");
}
void br(void) {
	printf("Brazil,Russia");
}
void ic(void) {
	printf("India,China");
}
void smile(void) {
	printf("Smile!");
}
void one_three(void) {
	printf("one\n");
	two();
	printf("three\n");
}
void two(void) {
	printf("two\n");
}