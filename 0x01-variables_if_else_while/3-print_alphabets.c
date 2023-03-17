#include <stdio.h>

int main(void)
{
	char alphabetCaps;
	char alphabet;

        for(alphabet = 'a'; alphabet <= 'z'; alphabet++)
                putchar(alphabet);

	for(alphabetCaps = 'A'; alphabetCaps <= 'Z'; alphabetCaps++)
                putchar(alphabetCaps);

        putchar('\n');

        return (0);
}	
