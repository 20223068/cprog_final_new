#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void member_get(node *ptr)  {
	printf("%6s", "이름") ;
	printf("%14s", "주소");
	printf("%14s\n", "전화번호");
	
	while (ptr != NULL) {
		printf("%6s", ptr->name);
		printf("%14s", ptr->address);
		printf("%14s", ptr->phone);
		
		ptr = ptr->link;
		printf("\n");
	}
	
	printf("\n");
}
