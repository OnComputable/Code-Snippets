//https://www.geeksforgeeks.org/naive-algorithm-for-pattern-searching/

// This method is more of a bruteforce method and a better method than this exits
// i.e. KMP algorithm.

// Method1. Naive Pattern

#include <bits/stdc++.h>
using namespace std;

void search(char*, char*);

int main(void)
{
	char txt[] = "AABAACAADAABAAABAA";
	char pat[] = "AABA";	// Note: pattern should not be bigger than txt that is not handled here.

	search(pat, txt);

	return 0;
}

void search(char *pat, char *txt)
{
	int M = strlen(pat);	// size of the pattern 
	int N = strlen(txt);	// size of the text

	for(int  i = 0; i <= N - M; i++)
	{
		int j;

		for(j = 0; j < M; j++)
		{
			if(txt[i + j] != pat[j]) // if even one letter is different we break and get to the next itereation.
			{
				break;
			}
		}

		if(j == M)	// if above for loop completes fully that means j == M and pattern is found at that index 'i'
		{
			cout << "Pattern found at index " << i << endl;
		}
	}

}
