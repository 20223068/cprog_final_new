#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void member_add(node *ptr) {
	while (ptr->link != NULL)
		ptr = ptr->link;

	ptr->link = (node*)malloc(sizeof(node));
	ptr = ptr->link;
	
	printf("이름을 입력하시오: ");
	gets(ptr->name);
	printf("주소를 입력하시오: ");
	gets(ptr->address);
	printf("전화번호 입력하시오: ");
	gets(ptr->phone);

	ptr->link = NULL;
	printf("\n");
}
