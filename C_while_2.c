#include <stdio.h>

int main(void)
{
	char name[30];
	printf("�̸��� �Է��ϼ���. : ");
	scanf_s("%s", name, sizeof(name));

	int i = 0;
	while (name[i]!=NULL)
	{
		printf("%c", name[i]);
		i++;
	}
	printf("\n");
	printf("%s", name);

	return 0;
}