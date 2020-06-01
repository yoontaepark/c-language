/* 대각선으로 별을 출력하는 프로그램임*/

#include<stdio.h>
void main() {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i == j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (i = 0; i < 5; i++) {
		for (j = 5; j > -1; j--) {
			if (i == j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

/*점찍기 
위의 for문은 i=0일때, j=0,1,2,3,4 하면서 printf를 계속 수행한다. 
(0,0), (0,1), (0,2), (0,3), (0,4)가 수행되는데 이때 (0,0)만 *이 찍히고 나머지는 " " 공란이 찍힌다. 
**공란은 space를 꼭 눌러줘야 먹힘 
i=1일때도, j=0,1,2,3,4 하면서 printf를 계속수행한다. 
* () () () ()
() * () () () 
() () * () ()
() () () * ()
() () () () *
가 나올것 

아래 for문에 특이한 부분은, i=j인 지점이 6번째 지점이니 
(space)(space)(space)(space)(space)(*) 요렇게 생성이 됨. 
즉, 행렬식처럼 (0,0) 지점이 왼쪽 처음이 아니라는 점에 유의할 것
한편 역대각선 꼴을 만들고 싶으면 저렇게 두번째 변수만 내림차순으로 변경해주면 된다. 

*/