#include <stdio.h>
/*void main()
{
	int num;
	scanf("%d", &num);
	switch(num) {
		case 1:printf("1�Է�"); break;
		case 2:printf("2�Է�"); break;
		default:printf("1,2������ ������ �Է�");
	}
}*/

/*void main()
{
	char ch;
	scanf_s("%c",&ch);
	switch (ch){
		case 'a':printf("a�� �Է�"); break; 
		case 'A':printf("A�� �Է�"); break;
		}
}*/

/*#include <stdio.h>
#include <stdlib.h>
void main() {
	int num, data;
	while (1) {
	printf("===============================\n");
	printf("1. ������ �Է�\n");
	printf("2. ������ ���\n");
	printf("3. ����\n");
	printf(""==============================\n");
	scanf_s("%d", &num);
	switch (num) {
	case 1:printf("�����͸� �Է��ϼ���\n");
		scanf_s("%d", data); break;
	case 2:printf("%d", data); system("pause"); break;
	case 3:exit(1);
	}
	system("cls");
}*/


#include <stdio.h>
#include <stdlib.h>

void main(){
		char ch;
		int num, data1, data2, data3;
		sum = data1+data2+data3
		avg = sum/3.0
			while (1) {
				printf("=================================\n");
				printf("             M e n u\n");
				printf("=================================\n");
				printf("		1. �л� �̸� �Է�\n");
				printf("		2. ���� 3���� �Է�\n");
				printf("		3. �л� �̸� ���\n");
				printf("		4. �հ� ���\n");
				printf("		5. ��� ���\n");
				printf("		6. ����\n");
				printf("=================================\n");
					scanf_s("%d", &num);
					switch (num) {
					case 1:printf("�л� �̸��� �Է��ϼ���\n");
						scanf_s("%s", ch, 20); break;
					case 2:printf("3������ ������ �Է��ϼ���\n");
						scanf_s("%d%d%d", &data1, &data2, &data3); break;
					case 3:printf("%s", ch); break;
					case 4:printf("���� : %d, %d, %d\n", data1, data2, data3);
						printf("�հ� : %d\n", data1+data2+data3);break;
					case 5:printf("%s �л��� ��� : %d\n", ch, (data1+data2+data3)/3); system("pause"); break;
					case 6:exit (1);
					}
					system("cls");

			}

