#include <stdio.h>
struct Product {
	char Name[25];
	int id;
	int price;
};
int main() {
	struct Product p[5];
	int max = -10000;
	int min = 10000;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		printf_s("Product Name:\n");
		scanf_s("%24s", p[i].Name, sizeof(p[i].Name));

		printf_s("Product ID:\n");
		scanf_s("%d", &p[i].id);

		printf_s("Price:\n");
		scanf_s("%d", &p[i].price);
		max = (p[i].price > max) ? p[i].price : max;
		min = (p[i].price < min) ? p[i].price : min;
		sum = sum + p[i].price;
	}
	for (int i = 0; i < 5; i++) {
		printf_s("Product Name: %s,", p[i].Name);
		printf_s("Product ID: %d,", p[i].id);
		printf_s("Price: %d\n", p[i].price);
	}
	printf_s("Max %d\n", max);
	printf_s("Min %d\n", min);
	printf_s("Sum %d\n", sum);
}