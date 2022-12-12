#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void member_search(node *ptr) {
    char _name[10];

    printf("이름 입력 : ");
    gets(_name);

    printf("%6s", "이름");
    printf("%14s", "주소");
	printf("%14s\n", "전화번호");

    while (ptr != NULL) {
        if (strcmp(_name, ptr->name) == 0) {
            printf("%6s", ptr->name);
		    printf("%14s", ptr->address);
		    printf("%14s\n", ptr->phone);
        }
        ptr = ptr->link;
    }
}
