#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	int input, i, k;
//	int count[10] = {0}; //쓰레기값 들어가있음 -> 초기화 중요
//	int randNum[100]; //발생된 난수를 출력해야하기때문에 배열 필요
//	
//
//	printf("Enter the number of random numbers:<<=100> : "); 
//	scanf("%d", &input); //추출하고 싶은 숫자의 개수
//
//	for(i = 0; i < input; i++) { 
//		randNum[i] = rand() % 10; //'input'개의 랜덤수 생성 //컴퓨터 내의 계산에 의해서 생성 결과가 항상 같음.
//
//		for(k = 0; k < 10; k++) { //생성된 수 각각이 0 - 9중 어떤 수 인지 파악하기
//			if(randNum[i] == k) 
//				count[k]++;
//		}
//	}
//	//랜덤수의 총 합 출력
//
//	for(k = 0; k < 10; k++) {
//		printf("%d의 개수는 %d\n", k, count[k]); 
//	}
//
//	printf("-------------------------------\n");
//
//	//발생된 랜덤수 출력
//	for(i = 0; i < input; i++) {
//		printf("%5d", randNum[i]);
//		if((i+1) % 5 == 0) //5개씩 가로로 출력
//			printf("\n");
//	}
//	printf("\n");
//}

//srand(time(NULL))사용
#include <stdio.h>
#include <stdlib.h> //난수
#include <time.h> //+ 시간마다 초기화되는
int main(void)
{
	int input, i, k;
	int count[10] = {0}; //쓰레기값 들어가있음 -> 초기화 중요
	int randNum[100]; //발생된 난수를 출력해야하기때문에 배열 필요
	
	srand(time(NULL));//rand 호출전에 사용. 시간을 기준으로 초기화 됨.

	printf("Enter the number of random numbers:<<=100> : "); 
	scanf("%d", &input); //추출하고 싶은 숫자의 개수

	for(i = 0; i < input; i++) { 
		 randNum[i] = rand() % 10; //'input'개의 랜덤수 생성 //컴퓨터 내의 계산에 의해서 생성 결과가 항상 같음.

		for(k = 0; k < 10; k++) { //생성된 수 각각이 0 - 9중 어떤 수 인지 파악하기
			if(randNum[i] == k) 
				count[k]++;
		}
	}
	//랜덤수의 총 합 출력

	for(k = 0; k < 10; k++) {
		printf("%d의 개수는 %d\n", k, count[k]); 
	}

	printf("-------------------------------\n");

	//발생된 랜덤수 출력
	for(i = 0; i < input; i++) {
		printf("%5d", randNum[i]);
		if((i+1) % 5 == 0) //5개씩 가로로 출력
			printf("\n");
	}
	printf("\n");
}