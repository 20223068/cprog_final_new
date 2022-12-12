#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void member_del(node *ptr)  {
	node *prev;
	char _phone[14];

	printf("삭제할 전화번호를 선택하시오: ");
	gets(_phone);

	while (ptr->link != NULL)  {
		prev = ptr;
		ptr = ptr->link;

		//전화번호로 회원 찾아 정보 삭제
		if (strcmp(_phone, ptr->phone) == 0) {
			prev->link = ptr->link;
			free(ptr);
			break;
		}
	}
	return;
}
