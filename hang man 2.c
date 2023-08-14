#include <stdio.h>
#include <string.h>
int main() {
	// Get word to guess
	char answer [70];
	printf("Enter word to guess:");
	fflush(stdout);
	scanf("%s",answer);
	// set the mask array- mask[i] is true if the
	// character s[i] has been guessed. the mask
	// must be allocated, and initialized to all false
	int N = strlen(answer);
	int mask[N];
	for (int i=0; i<N; ++i) {
		mask[i] =0
	}
	// loop over each round of guessing
	int gameover =0
	while (!gameover) {
		// print word with *s for unguessed letters
		printf("the word is:");
		for(int j=0; j<N; ++j) {
			if(mask[j]) {
				printf("%c",answer[j]);
			}
			else {
				printf("*");
			}
		}
		printf("\n");
		// Get players next guess
		char guess;
		printf("letter?");
		fflush(stdout);
		scanf("%c",&guess);
		// mark true all mask position corresponding to guess
		for(int k=0; k<N; ++k) {
			if(answer[k]==guess) {
				mask[k] =1;
			}
		}
		//Determine whether the player has won!
		gameover=1
		for(int m=0;m<N;++m) {
			if (!mask[m]) {
				gameover=0;
				break;
			}
		}
	}
	// print victory message!
	printf("victory! the word is\"%s\".\n",answer);
	return 0;
}
