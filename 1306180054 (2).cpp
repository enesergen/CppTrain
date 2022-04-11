#include <stdio.h>

int main(void) {

	char a[] = "5ABCD1BCD1CDE";
	int len = sizeof(a);
	int maxWordLen; //max words first
	int separtor[5];
	//printf("=--%c",a[3]);
	int check = a[0] - 48;
	//printf("\t %d",check);
	if (check < 10 && check >0) {
		maxWordLen = a[0];
	}
	else {
		return 0;
	}

	int sp = 0;
	for (int i = 1; i < len; i++) {
		int check = a[i] - 48;
		//printf("\t %d",check);
		if (check < 10 && check >0) {
			separtor[sp] = i;
			sp++;
		}
	}
	char all[100];
	int spCheck = 0;
	char firstNode;
	int fI = 1;
	all[0] = a[1];
	printf("%c\n", a[1]);
	for (int i = 2; i < separtor[spCheck]; i++) {
		firstNode = a[1];
		printf("%c%c\n", firstNode, a[i]);
		all[fI++] = firstNode;
		all[fI++] = a[i];

		//spCheck++;
	}
	spCheck++;
	for (int i = separtor[spCheck - 1] + 1; i < separtor[spCheck] - 1; i++) {
		firstNode = a[separtor[spCheck - 1] + 1];
		//printf("%c%c\n",firstNode,a[i +1]);
		all[fI++] = firstNode;
		all[fI++] = a[i + 1];

		//spCheck++;
	}
	spCheck++;
	for (int i = separtor[spCheck - 1] + 1; i < len - 2; i++) {
		firstNode = a[separtor[spCheck - 1] + 1];
		//printf("%c%c\n",firstNode,a[i +1]);
		all[fI++] = firstNode;
		all[fI++] = a[i + 1];

		//spCheck++;
	}
	// for(int i = 0 ; i < fI; i++)
	 //  printf(" %c ",all[i]);

	for (int i = 1; i < fI; i++)
		if (i % 2 == 0) {

			for (int j = i; j < fI; j++) {

				if (j % 2 == 1 && all[i] == all[j]) {
					if (all[i - 1] == 'B') {
						printf("%c%c%c%c  \n", all[1], all[i - 1], all[i], all[j + 1]);
					}
					else
						printf("%c%c%c  \n", all[i - 1], all[i], all[j + 1]);
				}

			}
		}


	return 0;
}