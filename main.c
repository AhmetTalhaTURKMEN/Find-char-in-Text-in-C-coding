#include <stdio.h>
#include <stdlib.h>

int main()
{
	char metin[100];
	int poz[100-1];
	char aranan;
	int sayac=0;

	printf("Enter main text: ");
	gets(metin);
	printf("Enter the searched character: ");
	scanf("%c",&aranan);

	for(int i=0;i<strlen(metin);i++)
	{
        if(aranan==metin[i])
        {
            poz[sayac++]=i;
        }
	}

	printf("number of character found in text: %d\n",sayac);

	for(int c=0;c<sayac;c++)
		printf("Position of character %d. %c in the text: %d\n",c+1,aranan,poz[c]+1);

	return 0;
}
