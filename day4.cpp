#include <stdio.h>

void main()
{
	/*float fl;
	printf("�Ǽ� �Է� : ");
	scanf_s("%f", &fl);
	printf("�Է¹��� �Ǽ� : %.2f\n", fl);*/

	/*char e[10];
	printf("�̴ϼ� �Է� : ");
	scanf_s("%s", e, 10);
	printf("���� �̴ϼ� : %s\n", e);*/

	/*int kor, eng, math;
	printf("3���� �Է�\n");
	scanf_s("%d%d%d", &kor, &eng, &math);
	printf("3������ �� : %d\n", kor + eng + math);
	printf("3���� ��� : %d\n", (kor + eng + math) / 3);*/

	/*char name[20];
	int age;

	printf("����� �̸��� �����Դϱ�?");
	scanf_s("%s", name, 20);
	printf("%s���� ���̴� �� ���Դϱ�?", name);
	scanf_s("%d", &age);
	printf("%s ���� ���̴� %d ���Դϴ�\n", name, age);*/

	
	/*int su1 = 20, su2 = 3;

	printf("%d +%d =%d\n", su1, su2, su1 + su2);
	printf("%d-%d=%d\n", su1, su2, su1 - su2);
	printf("%d*%d=%d\n", su1, su2, su1*su2);
	printf("%d/%d=%d\n", su1, su2, su1 / su2);
	printf("%d%%%d=\%d\n", su1, su2, su1%su2);*/


	/*float su1 = 3.01, su2 = 3.0;

	printf("���� su1�� su2�� ũ�� �� ��� : %d\n", su1 <= su2);
	printf("���� su1�� su2�� ũ�� �� ��� : %d\n", su1 >= su2);
	printf("���� su1�� su2�� ũ�� �� ��� : %d\n", su1 == su2);
	printf("���� su1�� su2�� ũ�� �� ��� : %d\n", su1 != su2);*/

	/*int su1, su2;

	su1 = su2 = 5;
	printf("su1 + 1 = %d\n", su1 += 1);
	printf("su1 - 1 = %d\n", su1 -= 1);
	printf("su1 * su2 = %d\n", su1 *= su2);
	printf("su1 / su2 = %d\n", su1 /= su2);
	printf("su1 %% su2 = %d\n", su1 %= su2);*/

	int num;
	printf("������ �Է��ϼ���...");
	scanf_s("%d", &num);
	if (!((num > 0) && (num <= 100)))
		printf("�Է� ������ ���� �����ϴ�.\n");

}


