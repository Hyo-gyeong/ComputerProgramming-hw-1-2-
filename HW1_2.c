#include <stdio.h>
int main(void)
{
	int change;
	int coins[4] = {500,100,50,10};

	printf("Enter the anount of change : ");
	scanf("%d", &change);

	while(change != 0) {
		printf("500 coins : %d\n", change / 500); // 500���� ���� ���� ������ �ִ� ����
		change = change % 500;//�� �������� ������ �ڸ� ���
		printf("100 coins : %d\n", change / 100);
		change = change % 100;
		printf("50 coins : %d\n", change / 50);
		change = change % 50;
		printf("10 coins : %d\n", change / 10);
		change = change % 10;
	}
}