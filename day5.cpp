#include <stdio.h>

/*void main()
{
	int su1;
	float su2;

	su1 = 5; ++su1; printf("++su1 = %d\n", su1);
	su1 = 5; su1++; printf("su1++ = %d\n", su1);
	su2 = 12.3; ++su2; printf("++su2 = %f\n", su2);
	su2 = 12.3; su2++; printf("su2++ = %f\n", su2);
}*/

/*void main()
{
	int su1, su2, su3;

	su1 = 10; su2 = ++su1;
	su1 = 10; su3 = su1++;
	printf("su2 = %d\n", su2);
	printf("su3 = %d\n", su3);
}*/

/*void main()
{
	int = a = 5, b = 6, c = 10, d;
	d = ++a*b--;
	printf("a=%d,b=%d,d=%d\n", a, b, d);
	d=a++ + ++c - b--;
	printf("a=%d, b= %d, c=%d, d=%d", a, b, c, d);
	a = 1;
	b = 0;
	d = a++ || ++b*d-- / ++c;
	printf("a=%d,b=%d,c=%d, d=%d", a, b, c, d, );
	d = b++ && ++a / ++c*d++;
	printf("a=%d, b=%d, c=%d, d=%d", a, b, c, d, );
}*/

/*void main()
{
	int su1 = 123;
	char ch = 'a';
	float su2 = 12.345;

	printf("���� su1�� ũ��	:%d byte\n", sizeof(su1));
	printf("������ �ڷ����� ũ�� : %d byte\n", sizeof(char));
	printf("�Ǽ� 1.23456�� ũ�� : %d byte\n", sizeof(1.23456));
	printf("������ ��� 'a'�� ũ�� : %d byte\n", sizeof('a'));
}*/

/*void main()
{
	int num;
	printf("1. ���� ���� ����\n");
	printf("2. ����� ���� ����\n");
	printf("3. ���� ���� ����\n");
	printf(">>> ");
		scanf_s("%d", &num);
	if (num == 1) printf("���� ������ �����մϴ�.\n");
	if (num == 2) printf("����� ������ �����մϴ�.\n");
	if (num == 3) printf("���� ������ �����մϴ�.\n");
}*/

/*void main()
{
	int num1, num2;
	scanf_s("%d%d", &num1, &num2);
	if (num1 > num2)
	{
		printf("%d\n", num1 > num2);
		printf("���� ����\n");
	}
}*/

/*void main()
{
	int num1, num2;
		scanf_s("%d", &num1);
	num2 = num1 % 2;
	if (num2 == 0)	printf("¦�� : %d\n", num1);
	if (num2 != 0)	printf("Ȧ�� : %d\n", num1);
}*/


/*void main()//���� �Է� �޾� ¦��, Ȧ�� �����Ͽ� ���
{
	int num1, num2;
	scanf_s("%d", &num1);
	num2 = num1 % 2;
	if (num2 == 0)	printf("¦��");
	if (num2 != 0)	printf("Ȧ��");
}*/

/*void main()//�Է��� �����Ͱ� 3�� ����� ��� ���
{
	int num;
	scanf_s("%d", &num);
	if (num%3 == 0)
	printf("3�� ���\n");
		
}*/

/*void main()//�� ���� �Է¹޾� ū ���� ���
{
	int num1, num2, max;
		scanf_s("%d%d", &num1, &num2);
		{
			if (num1 > num2)
				max=num1;
			if(num1 < num2)
				max=num2;
			printf("max:%d", max);
		}
}*/

/*void main()//�� ���� �Է¹޾� ū ���� ���
{
	int num1, num2, num3, max;
	scanf("%d%d%d", &num1, &num2, &num3);
	if(num1>num2)
		max=num1;
	if(num2>=num1)
		max=num2;
	if(num3>max)
		max=num3;
	printf("max : %d", max);
}*/

/*void main()//���밪�� ���ϴ� ���α׷��� �ۼ�
{
	int num;
	scanf("%d", &num);
	if(num<0)
		num=num*-1;
	printf("���밪 : %d",num);
}*/
/*void main()//�� ���� �Է¹޾� ū ���� ¦���̸� ���
{
	int num1, num2, max;
	scanf("%d%d", &num1, &num2);
	if(num1>num2)
		max=num1;
	if(num2>=num1)
		max=num2;
	if(max%2==0)
		printf("max : %d", max);
}
/*void main()//�� ���� �Է� �޾� ���� ¦���̰� 3�� ����� ���� ���
{
	int num1, num2, sum;
	scanf("%d%d", &num1, &num2);
	sum=num1+num2;
	if(sum%2==0 && sum%3==0)
		printf("sum : %d", sum);
}
