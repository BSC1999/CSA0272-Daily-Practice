#include <stdio.h>

int main() {
	unsigned short count = 0, vowels = 0;
	char str[100], c;

	printf("Enter a string: ");
	scanf("%[^\n]", str);

   	while(str[count] != '\0') {
   	  c = str[count];
   	  if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I'
   	  	|| c == 'o' || c == 'O' || c == 'u' || c == 'U') {
   	  	vowels++;
   	  	printf("%c", c);
   }

   	  count++;
   	}

   	printf("\n");
   	printf("NUMBER OF VOWELS: %hu \n", vowels);

	return 0;
}

