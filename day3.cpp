#include <stdio.h>

/*void main()
{
	int age = 21;
	float weight = 50.0, height = 163.5;

	printf("���� ���̴� %d�� �Դϴ�.\n", age);
	printf("���� �����Դ� %f(kg) �Դϴ�.\n", weight);
	printf("���� ������ %f(cm) �Դϴ�.\n", height);
}*/

/*void main()
{
	int num = 123;
	char ch = 'D';

	num = num + 1;
	ch = 'G';
	printf("num=%d\n", num);
	printf("ch=%c\n", ch);
}*/

/*void main()
{
	float height_inch = 70.0;
	float height_cm = height_inch*2.54;

	printf("���� ������ %f(cm) �Դϴ�.\n", height_cm);
}*/

/*void main()
{
	char ch = 'A';
	int num = 5, ret;

	ret = ch + num;
	printf("ret = %d\n", ret);
}*/

/*void main()
{
	int num1;
	float num2 = 367.78;

	num1 = num2;
	printf("num1 = %d\n", num1);
}*/

/*void main()
{
	int num1 = 25, num2 = 3;

	printf("num1/num2=%d\n", num1 / num2);
	printf("num1/num2=%f\n", (float)num1 / (float)num2);
	printf("num1*num2=%d\n", num1*num2);
}*/

/*void main()
{
	float su1 = 123.456;
	float su2 = 12.3456789;
	double su3 = 1.23456789;

	printf("su1 = %f\n", su1);
	printf("su2 = %11.8f\n", su2);
	printf("su1 = %6.2f\n", su1);
	printf("su3 = %11.8f\n", su3);
	printf("su3 = %-11.8f\n", su3);
}*/

/*void main()
{
	char ch = 'A', str[20] = "character string";
		printf("���� = %3c\n", ch);
		printf("���ڿ� = %-20s\n", str);
}*/

/*void main()
{
	int num1, num2, sum;

	printf("���� 2���� �Է��ϼ���...");
	scanf_s("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("�� ���� ���� %d �Դϴ�.", sum);
}*/

/*void main()
{
	double num1;
	float num2;
	printf("�Ǽ��� �Է��ϼ���...");
	scanf_s("%lf", &num1);
	printf("%f\n", num1);
}*/

void main()
{
	char name1[30], name2[30];
	printf("�̸��� �Է��ϼ���!");
	scanf_s("%s", name1,30);
	printf("�̸��� �Է��ϼ���!");
	scanf_s("%s", name2,30);
	printf("���� �̸��� %s �Դϴ�.\n", name1);
	printf("���� �̸��� %s �Դϴ�.\n", name2);
}