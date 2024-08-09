#include <stdio.h>
struct Friends {
	char name[25];
	char petName[25];
	long number;
	struct {
		char Type_of_fr[25];
		short visitedPlaces;
		char CommFr[30];
	}Type;
};
int main() {
	struct Friends f[3];
	for (int i = 0; i < 3; i++) {
		printf_s("Enter Friend Name:\n");
		scanf_s("%24s",f[i].name, sizeof(f[i].name));

		printf_s("Enter Pet Name:\n");
		scanf_s("%24s", f[i].petName, sizeof(f[i].petName));

		printf_s("Enter Phone Number:\n");
		scanf_s("%ld", &f[i].number);

		printf_s("Enter Type of friend:\n");
		scanf_s("%s24", f[i].Type.Type_of_fr, sizeof(f[i].Type.Type_of_fr));

		printf_s("Enter Name. of Common Friends:\n");
		scanf_s("%s24", f[i].Type.CommFr, sizeof(f[i].Type.CommFr));

		printf_s("Enter No. of Places Visited Together:\n");
		scanf_s("%hd", &f[i].Type.visitedPlaces);
	}
	for (int i = 0; i < 3; i++) {
		printf_s("Friend Name: %s\n",f[i].name);
		printf_s("Pet Name: %s\n",f[i].petName);
		printf_s("Phone Number: %ld\n",f[i].number);
		printf_s("Type of friend: %s\n",f[i].Type.Type_of_fr);
		printf_s("Name. of Common Friends: %s\n",f[i].Type.CommFr);
		printf_s("No. of Places Visited Together: %hd\n",f[i].Type.visitedPlaces);
	}
}
