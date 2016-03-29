#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char word[4] = "";
	printf("Please enter a number that is less than 1000.\n");
	scanf("%s", word);
	printf("The number you entered is %s.\n", word);
	int onum = atoi(word);
	int hnum = onum / 100;
	int tnum = (onum % 100) / 10;
	int tens = onum % 100;
	int num = onum % 10;
	char Hundreds[9][20] = { "One Hudred","Two Hundreds","Three Hundreds","Four Hundreds","Five Hudreds","Six Hundreds","Seven Hundreds","Eight Hudreds","Nine Hundreds" };
	char Tens[10][20] = { "Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","NineTeen" };
	char Decades[8][20] = { "Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety" };
	char Unit[9][20] = { "One","Two","Three","Four","Five","Six","Seven","Eight","Nine" };
	if (hnum)
	{
		if (tnum)
		{
			if (tens < 20)
			{
				printf("The number you entered is %s and %s\n", Hundreds[hnum - 1], Tens[tens - 10]);

			}
			else
			{
				if (num)
				{
					printf("The number you entered is %s and %s-%s\n", Hundreds[hnum - 1], Decades[tnum - 2], Unit[num - 1]);
				}
				else
				{
					printf("The number you entered is %s and %s.\n", Hundreds[hnum - 1], Decades[tnum - 2]);
				}
			}

		}
		else
		{
			if (num)
			{
				printf("The number you entered is %s and %s\n", Hundreds[hnum - 1], Unit[num - 1]);
			}
			else
			{
				printf("The number you entered is %s\n", Hundreds[hnum - 1]);
			}
		}
	}
	else
	{
		if (tnum)
		{
			if (tens < 20)
			{
				printf("The number you entered is %s\n", Tens[tens - 10]);

			}
			else
			{
				if (num)
				{
					printf("The number you entered is %s-%s\n", Decades[tnum - 2], Unit[num - 1]);
				}
				else
				{
					printf("The number you entered is %s.\n", Decades[tnum - 2]);
				}
			}

		}
		else
		{
			if (num)
			{
				printf("The number you entered is %s\n", Unit[num - 1]);
			}
			else
			{
				printf("The number you entered is Zero.\n");
			}
		}
	}

	return 0;
}