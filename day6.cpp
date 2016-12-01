#include <stdio.h>
/*void main()
{
    int num;
    scanf("%d", &num);
    switch(num) {
        case 1:
	    printf("1입력");
	    break;
        case 2:
            printf("2입력");
            break;
        default:
            printf("1,2제외한 나머지 입력");
    }
}*/

/*void main()
{
    char ch;
    scanf_s("%c",&ch);
    switch (ch) {
        case 'a':
            printf("a를 입력");
            break; 
        case 'A':
            printf("A를 입력");
            break;
    }
}*/

/*#include <stdio.h>
#include <stdlib.h>
void main() {
    int num, data;

    while (1) {
        printf("===============================\n");
        printf("1. 데이터 입력\n");
        printf("2. 데이터 출력\n");
        printf("3. 종료\n");
        printf(""==============================\n");
        scanf_s("%d", &num);

        switch (num) {
            case 1:
                printf("데이터를 입력하세요\n");
                scanf_s("%d", data);
                break;
            case 2:
                printf("%d", data);
                system("pause");
                break;
            case 3:
                exit(1);
        }
        system("cls");
    }
}*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    int num, data1, data2, data3;
    sum = data1+data2+data3
    avg = sum/3.0
    
    while (1) {
        printf("=================================\n");
        printf("             M e n u\n");
        printf("=================================\n");
        printf("		1. 학생 이름 입력\n");
        printf("		2. 성적 3과목 입력\n");
        printf("		3. 학생 이름 출력\n");
        printf("		4. 합계 출력\n");
        printf("		5. 평균 출력\n");
        printf("		6. 종료\n");
        printf("=================================\n");
        
        scanf_s("%d", &num);
        switch (num) {
            case 1:
                printf("학생 이름을 입력하세요\n");
                scanf_s("%s", ch, 20);
                break;
            case 2:
                printf("3과목의 성적을 입력하세요\n");
                scanf_s("%d%d%d", &data1, &data2, &data3);
                break;
            case 3:
                printf("%s", ch);
                break;
            case 4:
                printf("성적 : %d, %d, %d\n", data1, data2, data3);
                printf("합계 : %d\n", data1+data2+data3);
                break;
            case 5:
                printf("%s 학생의 평균 : %d\n", ch, (data1+data2+data3)/3);
                system("pause");
                break;
            case 6:
                exit (1);
        }
        system("cls");
    }

    return 0;
}
