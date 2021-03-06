#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LZSS(char *T, int N);

void append_itoa(char* res, int x);

int intlen(int x);

int main() {
	int l;
	scanf("%d", &l);

	char* str = malloc(sizeof(char) * (l + 1) * 5);
	scanf("%s", str);

	LZSS(str, l);
	printf("%s", str);

	return 0;
}

void LZSS(char *T, int N) {
	int i = 0;

	char* res = malloc(sizeof(char) * N * 5);
	res[0] = '\0';

	while (i < N) {
		int maxl = 0, maxj = -1, maxk = -1;

		for (int j = 0; j < i - 1; j++) {
			int ic = i;
			if (T[i] == T[j] && T[i + 1] == T[j + 1]) {
				// Matched!
				int k = j;
				while (k < i && ic < N) {
					if (T[ic] != T[k]) break;
					ic++, k++;
				}
				ic--;

				if (maxl <= k - j) {
					maxl = k - j;
					maxj = j;
					maxk = k;
				}
			}
		}

		if (maxl) {
			strcat(res, "(");
			append_itoa(res, maxj);
			strcat(res, ",");
			append_itoa(res, maxk - maxj);
			strcat(res, ")");
			i += maxk - maxj - 1;
		} else {
			char temp[2];
			temp[0] = T[i];
			temp[1] = '\0';
			strcat(res, temp);
		}

		i++;
	}

	strcpy(T, res);
	free(res);
}

void append_itoa(char* res, int x) {
	int l = strlen(res);

	if (!x) {
		res[l] = '0';
		res[l + 1] = '\0';
		return;
	}
	else {
		int r = l + intlen(x) - 1;
		res[r + 1] = '\0';

		while (x) {
			res[r--] = (x % 10) + '0';
			x /= 10;
		}
	}
}

int intlen(int x) {
	if (!x) {
		return 1;
	}
	else {
		int l = 0;
		while (x) {
			x /= 10;
			l++;
		}
		return l;
	}
}