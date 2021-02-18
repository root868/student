#include <stdio.h>

char *three(char *,char *);
char *twolll(char *, char *);
char *onelll(char *, char *);
int main(void)
{
	char a[9] = "1a2b3d4z";
	char b[9] = { };

	onelll(a,b);
	puts(b);
	twolll(a,b);
	puts(b);
	three(a,b);
	puts(b);

	return 0;
}

char *onelll(char *a, char*b)
{
	int i;
	int j = 0;

	for(i = 0; a[i]; i++)
	{
		if(a[i] % 2 == 0 )
		{
			b[j] = a[i];
			j++;
		}
	}
	b[i] = '\0';

	return b;
}
char *twolll(char *a,char *b)
{
	int i;
	int j = 0;

	for(i = 0; a[i]; i++)
	{
		if(a[i] % 2 != 0)
		{
			b[j] = a[i];
			j++;
		}
	}
	b[j] = '\0';

	return b;
}
char *three(char *a, char *b)
{
	int i,j = 0;

	char a1[10] = {};
	char b1[10] = {};

	a1[10] = onelll(a,b);
	b1[10] = twolll(a,b);

	for(i = 0; a1[i]; i++)
	{
		if(a1[i] == 0)
		{
			`
			a1[i] = b1[]
		}
	}

		
	return a1;

	
}
