#include<stdio.h>
main()
{
	char ch,uppercase_vowel,lowercase_vowel;
	printf("enter a character");
	scanf("%c",&ch);
	lowercase_vowel=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
	uppercase_vowel=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
	if(	lowercase_vowel||uppercase_vowel)
	{
		printf("vowel");
	}
	else
	{
		printf("constant");
	}
}
