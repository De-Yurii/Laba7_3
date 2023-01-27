#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float calculation(int amount) {
	float result;
	if (amount > 0) {
		amount--;
		result = 1 / (1 + calculation(amount));
	}
	else {
		return 0;
	}
	return result;
}
int main() {
	int amount; float result;
	printf("Enter amount of divides: ");
	scanf("%d", &amount);
	result = calculation(amount);
	printf("%f", result);
}