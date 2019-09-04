#include <stdio.h>
int main(void)
{
	int change;
	int coins[4] = {500,100,50,10};

	printf("Enter the anount of change : ");
	scanf("%d", &change);

	while(change != 0) {
		printf("500 coins : %d\n", change / 500); // 500으로 나느 몫이 동전의 최대 개수
		change = change % 500;//그 나머지를 가지고 뒤를 계산
		printf("100 coins : %d\n", change / 100);
		change = change % 100;
		printf("50 coins : %d\n", change / 50);
		change = change % 50;
		printf("10 coins : %d\n", change / 10);
		change = change % 10;
	}
}