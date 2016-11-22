#include <stdio.h>

/*void main()
{
	int age = 21;
	float weight = 50.0, height = 163.5;

	printf("나의 나이는 %d세 입니다.\n", age);
	printf("나의 몸무게는 %f(kg) 입니다.\n", weight);
	printf("나의 신장은 %f(cm) 입니다.\n", height);
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

	printf("나의 신장은 %f(cm) 입니다.\n", height_cm);
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
		printf("문자 = %3c\n", ch);
		printf("문자열 = %-20s\n", str);
}*/

/*void main()
{
	int num1, num2, sum;

	printf("정수 2개를 입력하세요...");
	scanf_s("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("두 수의 합은 %d 입니다.", sum);
}*/

/*void main()
{
	double num1;
	float num2;
	printf("실수를 입력하세요...");
	scanf_s("%lf", &num1);
	printf("%f\n", num1);
}*/

void main()
{
	char name1[30], name2[30];
	printf("이름을 입력하세요!");
	scanf_s("%s", name1,30);
	printf("이름을 입력하세요!");
	scanf_s("%s", name2,30);
	printf("나의 이름은 %s 입니다.\n", name1);
	printf("나의 이름은 %s 입니다.\n", name2);
}