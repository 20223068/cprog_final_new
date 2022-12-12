#include <stdio.h>
#include <malloc.h>
#include <string.h>

#include "add.h"
#include "del.h"
#include "get.h"
#include "search.h"
#include "save.h"

struct _node {
	char name[10];		// 이름
	char address[30];	// 주소
	char phone[14];		// 전화번호

	struct _node *link;	// 다음 노드
};

typedef struct _node node;

int main(void) {
	node *ptr;
	int choice;

	/*
		첫번째 노드 생성
		동적할당을 통해 공간을 생성하여 노드를 만든다.
		다음 노드 위치는 NULL로 초기화한다
	*/
	ptr = (node *)malloc(sizeof(node));
	ptr->link = NULL;

	do {
		printf("# 메뉴\n");
		printf("1. 회원 정보 등록\n");
		printf("2. 회원 정보 출력\n");
		printf("3. 회원 정보 삭제\n");
		printf("4. 회원 정보 검색\n");
        printf("5. 종료\n");
		printf("메뉴 선택: ");
		
		// 1문자를 입력받아 숫자로 변환
		choice = getchar() - '0';
		
		// 입력 버퍼 초기화
		fflush(stdin);

		switch(choice) {
			case 1 : 
				member_add(ptr); 
				break;
			case 2 : 
				member_get(ptr->link);
				break;
			case 3 : 
				member_del(ptr); 
				break;
            case 4 : 
				member_search(ptr); 
				break;
		}
	}while(choice!=5);
}
