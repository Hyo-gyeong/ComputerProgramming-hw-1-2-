#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	int input, i, k;
//	int count[10] = {0}; //�����Ⱚ ������ -> �ʱ�ȭ �߿�
//	int randNum[100]; //�߻��� ������ ����ؾ��ϱ⶧���� �迭 �ʿ�
//	
//
//	printf("Enter the number of random numbers:<<=100> : "); 
//	scanf("%d", &input); //�����ϰ� ���� ������ ����
//
//	for(i = 0; i < input; i++) { 
//		randNum[i] = rand() % 10; //'input'���� ������ ���� //��ǻ�� ���� ��꿡 ���ؼ� ���� ����� �׻� ����.
//
//		for(k = 0; k < 10; k++) { //������ �� ������ 0 - 9�� � �� ���� �ľ��ϱ�
//			if(randNum[i] == k) 
//				count[k]++;
//		}
//	}
//	//�������� �� �� ���
//
//	for(k = 0; k < 10; k++) {
//		printf("%d�� ������ %d\n", k, count[k]); 
//	}
//
//	printf("-------------------------------\n");
//
//	//�߻��� ������ ���
//	for(i = 0; i < input; i++) {
//		printf("%5d", randNum[i]);
//		if((i+1) % 5 == 0) //5���� ���η� ���
//			printf("\n");
//	}
//	printf("\n");
//}

//srand(time(NULL))���
#include <stdio.h>
#include <stdlib.h> //����
#include <time.h> //+ �ð����� �ʱ�ȭ�Ǵ�
int main(void)
{
	int input, i, k;
	int count[10] = {0}; //�����Ⱚ ������ -> �ʱ�ȭ �߿�
	int randNum[100]; //�߻��� ������ ����ؾ��ϱ⶧���� �迭 �ʿ�
	
	srand(time(NULL));//rand ȣ������ ���. �ð��� �������� �ʱ�ȭ ��.

	printf("Enter the number of random numbers:<<=100> : "); 
	scanf("%d", &input); //�����ϰ� ���� ������ ����

	for(i = 0; i < input; i++) { 
		 randNum[i] = rand() % 10; //'input'���� ������ ���� //��ǻ�� ���� ��꿡 ���ؼ� ���� ����� �׻� ����.

		for(k = 0; k < 10; k++) { //������ �� ������ 0 - 9�� � �� ���� �ľ��ϱ�
			if(randNum[i] == k) 
				count[k]++;
		}
	}
	//�������� �� �� ���

	for(k = 0; k < 10; k++) {
		printf("%d�� ������ %d\n", k, count[k]); 
	}

	printf("-------------------------------\n");

	//�߻��� ������ ���
	for(i = 0; i < input; i++) {
		printf("%5d", randNum[i]);
		if((i+1) % 5 == 0) //5���� ���η� ���
			printf("\n");
	}
	printf("\n");
}