#include <stdio.h>

int main(void)
{
	int i,j = 3,k  =3;
	for(i = 0;i < 3;i++)
	{
		for(j = k;j > 0;j--)
		{
			printf("Smile!");
		}
		k--;
		printf("\n");
	}


	return 0;
}
