// Que6
#include<stdio.h>
#include<string.h>

int main(void)
{
	char F_Name[10], L_Name[20];

	printf("Enter your first name:\n");
	scanf("%s", F_Name);
	printf("Enter your last name:\n");
	scanf("%s", L_Name);
	printf("%s %s\n", F_Name, L_Name);
	printf("%5d %8d\n", strlen(F_Name), strlen(L_Name));

	printf("%s %s\n", F_Name, L_Name);
	printf("%d %5d\n", strlen(F_Name), strlen(L_Name));
	return 0;
}
