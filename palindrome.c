// #include <stdio.h>
// #include <string.h>

// int main(){
//   char word[20],drow[20];
//   printf("Enter the string:");
//   scanf("%s",word);
//   for(int i= 0; i<strlen(word);i++){
//     drow[0]=word[strlen(word)-1-i];
//   }
//   drow[strlen(word)-1]='\0';
//   if (strcmp(word,drow)){
//     printf("True\n");
//   }
//   else {
//     printf("False\n");
//   }
// }


// C implementation to check if a given
// string is palindrome or not
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
printf("Input the string:\n");
  scanf("%s", str);
  // Start from first and
	// last character of str
	int l = 0;
	int h = strlen(str) - 1;

	// Keep comparing characters
	// while they are same
	while (h > l) {
		if (str[l++] != str[h--]) {
			printf("%s is not a palindrome\n", str);
			return 0;
			// will return from here
		}
	}

	printf("%s is a palindrome\n", str);

	return 0;
}

