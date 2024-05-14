/*
File : LibrarySystem_struct.c
Created : 2024.03.27
Author : ����
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct NODE {
	char title[20];
	char author[20];
	int price;
	char rent[20];
	char producer[20];
	char isbn[20];
	struct NODE* next;
}Node;

typedef struct {
	Node* head;
}headNode;

#endif