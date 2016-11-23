#include <stdio.h>

void main()
{
	/*float fl;
	printf("실수 입력 : ");
	scanf_s("%f", &fl);
	printf("입력받은 실수 : %.2f\n", fl);*/

	/*char e[10];
	printf("이니셜 입력 : ");
	scanf_s("%s", e, 10);
	printf("나의 이니셜 : %s\n", e);*/

	/*int kor, eng, math;
	printf("3과목 입력\n");
	scanf_s("%d%d%d", &kor, &eng, &math);
	printf("3과목의 합 : %d\n", kor + eng + math);
	printf("3과목 평균 : %d\n", (kor + eng + math) / 3);*/

	/*char name[20];
	int age;

	printf("당신의 이름은 무엇입니까?");
	scanf_s("%s", name, 20);
	printf("%s님의 나이는 몇 살입니까?", name);
	scanf_s("%d", &age);
	printf("%s 님의 나이는 %d 살입니다\n", name, age);*/

	
	/*int su1 = 20, su2 = 3;

	printf("%d +%d =%d\n", su1, su2, su1 + su2);
	printf("%d-%d=%d\n", su1, su2, su1 - su2);
	printf("%d*%d=%d\n", su1, su2, su1*su2);
	printf("%d/%d=%d\n", su1, su2, su1 / su2);
	printf("%d%%%d=\%d\n", su1, su2, su1%su2);*/


	/*float su1 = 3.01, su2 = 3.0;

	printf("변수 su1과 su2의 크기 비교 결과 : %d\n", su1 <= su2);
	printf("변수 su1과 su2의 크기 비교 결과 : %d\n", su1 >= su2);
	printf("변수 su1과 su2의 크기 비교 결과 : %d\n", su1 == su2);
	printf("변수 su1과 su2의 크기 비교 결과 : %d\n", su1 != su2);*/

	/*int su1, su2;

	su1 = su2 = 5;
	printf("su1 + 1 = %d\n", su1 += 1);
	printf("su1 - 1 = %d\n", su1 -= 1);
	printf("su1 * su2 = %d\n", su1 *= su2);
	printf("su1 / su2 = %d\n", su1 /= su2);
	printf("su1 %% su2 = %d\n", su1 %= su2);*/

	int num;
	printf("점수를 입력하세요...");
	scanf_s("%d", &num);
	if (!((num > 0) && (num <= 100)))
		printf("입력 범위를 벗어 났습니다.\n");

}


