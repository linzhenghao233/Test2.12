#include <stdio.h>
void jolly(void);
void deny(void);
void br(void);
void ic(void);
void smile(void);
void one_three(void);
void two(void);

int main(void) {
	printf("������\n");
	printf("��\n");
	printf("����\n");
	printf("��");
	printf("����\n");
	
	printf("�����ƣ��㶫ʡ��β��\n");

	int age;
	age = 22;
	printf("���Ѿ�����%d�꣬Ҳ����%d�졣\n",age,age*365);

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
	printf("toes:%d,toes������:%d,toes��ƽ��:%d\n",toes,2*toes,toes*toes);

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