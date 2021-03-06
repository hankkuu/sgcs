#include <stdio.h>

typedef union {
	char name[20];
	char subject[20];
	int score;
} Student;

struct __struct_student {
	char name[20];
	char subject[20];
	int score;
};

int main(){
	struct __struct_student temp;
	Student st1;
	Student st2;

	scanf("%s", temp.name);
	scanf("%s", temp.subject);
	scanf("%d", &temp.score);

	strcpy(st1.name, temp.name);
	strcpy(st1.subject, temp.subject);
	st1.score = temp.score;
	
	/* 
		This will print the character which its
		character code equals to (st1.score)
		because unions share memory space between
		its members.
	*/
	printf("Name     : %s\n", st1.name);
	printf("Subject  : %s\n", st1.subject);
	printf("Score    : %d\n", st1.score);

	strcpy(st2.name, temp.name);
	printf("Name     : %s\n", st2.name);
	strcpy(st2.subject, temp.subject);
	printf("Subject  : %s\n", st2.subject);
	st2.score = temp.score;
	printf("Score    : %d\n", st2.score);

    return 0;
}

