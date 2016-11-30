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

	printf("변수 su1의 크기	:%d byte\n", sizeof(su1));
	printf("문자형 자료형의 크기 : %d byte\n", sizeof(char));
	printf("실수 1.23456의 크기 : %d byte\n", sizeof(1.23456));
	printf("문자형 상수 'a'의 크기 : %d byte\n", sizeof('a'));
}*/

/*void main()
{
	int num;
	printf("1. 쉬운 게임 선택\n");
	printf("2. 어려운 게임 선택\n");
	printf("3. 랜덤 게임 선택\n");
	printf(">>> ");
		scanf_s("%d", &num);
	if (num == 1) printf("쉬운 게임을 시작합니다.\n");
	if (num == 2) printf("어려운 게임을 시작합니다.\n");
	if (num == 3) printf("랜덤 게임을 시작합니다.\n");
}*/

/*void main()
{
	int num1, num2;
	scanf_s("%d%d", &num1, &num2);
	if (num1 > num2)
	{
		printf("%d\n", num1 > num2);
		printf("다음 문장\n");
	}
}*/

/*void main()
{
	int num1, num2;
		scanf_s("%d", &num1);
	num2 = num1 % 2;
	if (num2 == 0)	printf("짝수 : %d\n", num1);
	if (num2 != 0)	printf("홀수 : %d\n", num1);
}*/


/*void main()//수를 입력 받아 짝수, 홀수 구분하여 출력
{
	int num1, num2;
	scanf_s("%d", &num1);
	num2 = num1 % 2;
	if (num2 == 0)	printf("짝수");
	if (num2 != 0)	printf("홀수");
}*/

/*void main()//입력한 데이터가 3의 배수인 경우 출력
{
	int num;
	scanf_s("%d", &num);
	if (num%3 == 0)
	printf("3의 배수\n");
		
}*/

/*void main()//두 수를 입력받아 큰 수를 출력
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

/*void main()//세 수를 입력받아 큰 수를 출력
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

/*void main()//절대값을 구하는 프로그램을 작성
{
	int num;
	scanf("%d", &num);
	if(num<0)
		num=num*-1;
	printf("절대값 : %d",num);
}*/
/*void main()//두 수를 입력받아 큰 수가 짝수이면 출력
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
/*void main()//두 수를 입력 받아 합이 짝수이고 3의 배수인 수를 출력
{
	int num1, num2, sum;
	scanf("%d%d", &num1, &num2);
	sum=num1+num2;
	if(sum%2==0 && sum%3==0)
		printf("sum : %d", sum);
}
