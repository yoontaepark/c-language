/*
이름: 박윤태
학과: 컴퓨터과학과
주민등록번호: 8810271xxxxxx
박윤태, 1988년 10월 27일, 윤년, 대한민국, 남자, 컴퓨터과학과

이름: 호날두
학과: 체육학과
주민등록번호: 0402207xxxxxx
호날두, 2004년 02월 20일, 윤년, 외국, 남자, 체육학과

이름: 이수련
학과: 영문학과
주민등록번호: 5701190xxxxxx
이수련, 1857년 01월 19일, 윤년아님, 대한민국, 여자, 영문학과

오름차순
이수련, 1857년 01월 19일, 윤년아님, 대한민국, 여자, 영문학과
박윤태, 1988년 10월 27일, 윤년, 대한민국, 남자, 컴퓨터과학과
호날두, 2004년 02월 20일, 윤년, 외국, 남자, 체육학과
*/

#include<stdio.h>
#pragma warning(disable:4996)
void main() {
	char a[50];
	char b[50];
	char c[50];
	printf("3명의 학생 정보를 입력하시오. \n");
	printf("---------------------------------------------- \n");
	printf("이름 : ");
	gets(a);
	printf("학과 : ");
	gets(b);
	printf("주민등록번호 : ");
	gets(c);
	printf("%s, %s, %s, %s", a, c, c, b);
}
	/*if(조건1)
	if(조건2) 
	명령문1;
	else if(조건3)
	명령문1;
	else
	명령문2;

	printf("---------------------------------------------- \n");
	printf("이름 : ");
	gets(a);
	printf("학과 : ");
	gets(a);
	printf("주민등록번호 : ");
	gets(a);
	printf("---------------------------------------------- \n");
	printf("이름 : ");
	gets(a);
	printf("학과 : ");
	gets(a);
	printf("주민등록번호 : ");
	gets(a);
	printf("============================================== \n");
	printf("입력 받은 3명의 정보를 생년월일 기준으로 오름차순으로 출력 \n");
	printf("---------------------------------------------- \n");
	*/


