// Que 4

#include<stdio.h>
#include<ctype.h>	// for not to worry about the punctuation using ispunct() function
#include<stdbool.h>	// for boolean characters
int main(void)
{
	char ch;
	bool in_word = false;
	int Letter_Count = 0, Word_Count = 0;

	while((ch = getchar()) != EOF)
	{	
		if(isalpha(ch))	// if ch is character
		{
			Letter_Count++;
			// if not currently in a word, then switch state to in wor
			// and increment the word count
			if(!in_word)
			{
				in_word = true;
				Word_Count++;
			}
		}	
		// if ch is not a letter, set program state to out of word
		else
			in_word = false;
	}

	// dividde letter count by word count to get average letters/word
	printf("\nAverage letters per word: %.2f\n", (float) Letter_Count / Word_Count);

	return 0;
}
