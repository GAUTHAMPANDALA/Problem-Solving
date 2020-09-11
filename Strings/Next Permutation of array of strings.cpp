 					// Next Permutations for the  Array of Strings lexographically  //
 	// Eg:  ab bc bc 
 	//				 --> ab bc cd
 	//				 --> ab cd bc
 	//				-->	 bc ab cd
 	//				-->	 bc cd ab
 	//				-->	 cd  ab bc
 	//				-->	 cd  bc ab.

// ALGORITHM:
//  Here we rearrange the array of string s for very possible permutation, ie
//  for every rearranged array of string, we do this operations to get next string. 
//  Step-1  Finding  the  non-increasing lexographical string in the array os string,ie find s[i],iff strcmp(s[i-1],s[i])<=0
//  Step-2  If the whole array If the whole array are in , strcmp(s[i-1],s[i])>=0 format no answer. [non-increasing order].
//  Step-3  Find the rightmost string in prefix, which is lexicographically larger than s[i-1].ie, strcmp(s[i-1],s[j])<=0
//  Step-4  swap the s[i], with righmost string less than s[i] ie swap(s[i-1],s[j]).
//  Step-5  Reverse the strings from (n-1 to i).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char** x, char** y) {
    char* tmp = *x;
    *x = *y;
    *y = tmp;
}
// This next_permutation is done for every rearranged permuted array, untill it has next permutation.
int next_permutation(int n, char **s) {
    int i, j;
    for (i = n-1; i > 0 && strcmp(s[i-1], s[i]) >= 0; i--); // Finding  longest non-increasing suffix in the array. 
    if (i <= 0) return 0;    //  If the whole array are in , strcmp(s[i-1],s[i])>=0 format no answer.
    for (j = n-1; strcmp(s[i-1], s[j]) >= 0; j--);// Find the rightmost string in prefix, which is lexicographically larger than key.
    swap(&s[i-1], &s[j]);// Swap key string with this string.
     for (j = n-1; i < j; i++, j--) swap(&s[i], &s[j]);// Reverse the (n-1 to i)  strings.
    return 1;
}
int main()
{ 
	int n;						// the input is 2d array as array of strings s[n][11] --> n strings of 11 charecters.
	scanf("%d",&n);
	char  **s;
	s = (char*)calloc(n, sizeof(char));
for (int i = 0; i < n; i++)
	{
		s[i] = (char*)calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
