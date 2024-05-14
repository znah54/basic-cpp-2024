/*
File : LibrarySystem.function
Created : 24-03-27
Author : °íº´ÇÐ
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

headNode* createHeadNode() {
    headNode* head = (headNode*)malloc(sizeof(headNode));
    if (head != NULL) {
        return head;
    }
}

void pre_addNode(headNode* pnode, char* title, char* author, int price, char* producer, char* isbn) {
    Node* tnode = (Node*)malloc(sizeof(Node));
    if (tnode != NULL) {
        strcpy(tnode->title, title);
        strcpy(tnode->author, author);
        tnode->price = price;
        tnode->next = pnode->head;
        strcpy(tnode->producer, producer);
        strcpy(tnode->isbn, isbn);
        strcpy(tnode->rent, "Can rent");
        pnode->head = tnode;
    }
}
void rear_addNode(headNode* pnode, char* title, char* author, int price, char* producer, char* isbn) {
    Node* tnode1 = (Node*)malloc(sizeof(Node));
    if (tnode1 != NULL) {
        strcpy(tnode1->title, title);
        strcpy(tnode1->author, author);
        tnode1->price = price;
        strcpy(tnode1->producer, producer);
        strcpy(tnode1->isbn, isbn);
        strcpy(tnode1->rent, "Can rent");
        tnode1->next = NULL;

        if (pnode->head == NULL) pnode->head = tnode1;
        else {
            Node* tnode2 = pnode->head;
            while (tnode2->next != NULL) {
                tnode2 = tnode2->next;
            }
            tnode2->next = tnode1;
        }
    }
}
void showAllNode(headNode* pnode) {
    Node* tnode = pnode->head;
    int count = 0;

    if (tnode != NULL) {
        printf("\n");
        printf("< Book List >\n");

        while (tnode != NULL) {
            count++;
            printf("\n");
            printf("%d th\n", count);
            printf("Book title : %s\n", tnode->title);
            printf("Book Author : %s\n", tnode->author);
            printf("Book Publisher : %s\n", tnode->producer);
            printf("Book Price : %d\n", tnode->price);
            printf("Rentel : %s\n", tnode->rent);

            tnode = tnode->next;
        }
    }
    else {
        printf("No Books \n");
    }
}
void deleteNode(headNode* pnode, char* title) {
    Node* tnode = pnode->head;
    if (tnode == NULL) {
        printf("There are no matching books.\n");
        return;
    }
    else if (strcmp(tnode->title, title) == 0) {
        printf("< Book %s delete complete >\n", tnode->title);
        pnode->head = tnode->next;
        return;
    }
    else {
        while (tnode->next != NULL) {
            if (strcmp(tnode->next->title, title) == 0) {
                printf("\n");
                printf("< Book %s delete complete >\n", tnode->next->title);
                tnode->next = tnode->next->next;
                return;
            }
            tnode = tnode->next;
        }
    }
    printf("There are no matching books. \n");
}
void freeAllNode(headNode* pnode) {
    Node* tnode = pnode->head;
    while (tnode != NULL) {
        pnode->head = tnode->next;
        free(tnode);
        tnode = pnode->head;
    }
    printf("All Delete Complete!!\n");
}

void searchPrint(Node* tnode) {
    int num;
    printf("\n");
    printf("< Search Complete >\n");
    printf("book title : %s\n", tnode->title);
    printf("book author : %s\n", tnode->author);
    printf("book pubi : %s\n", tnode->producer);
    printf("book ISBN : %s\n", tnode->isbn);
    printf("book price : %d\n", tnode->price);
    printf("rental : %s\n", tnode->rent);
    if (strcmp(tnode->rent, "Can rent") == 0) {
        printf("Would you like to borrow a book? borrow(y) exit(other) : ");
        scanf("%d", &num);
        if (num == 1) {
            strcpy(tnode->rent, "Borrowing books");
        }
    }
}
void searchNode(headNode* pnode, char* keyword) {
    Node* tnode = pnode->head;

    while (tnode != NULL) {

        if (strcmp(tnode->title, keyword) == 0) {
            searchPrint(tnode);
            return;
        }
        else if (strcmp(tnode->author, keyword) == 0) {
            searchPrint(tnode);
            return;
        }
        else if (strcmp(tnode->producer, keyword) == 0) {
            searchPrint(tnode);
            return;
        }
        else if (strcmp(tnode->isbn, keyword) == 0) {
            searchPrint(tnode);
            return;
        }
        tnode = tnode->next;
    }
    printf("Can't find book \n");
}

void login() {
    char id[20];
    char pw[20];
    int failCount = 3;
    FILE* fp;

    while (failCount) {
        printf("ID > ");
        scanf("%s", id);
        printf("PW > ");
        scanf("%s", pw);
            if (strcmp(id, "znah54") == 0 && strcmp(pw, "1346") == 0) {
                printf("\n");

                printf("LOGIN!\n");
                return;
            }
            else {
                printf("Try Again~~\n");
                if (failCount != 1)
                    printf("You can %d left.\n", (failCount - 1));
                failCount--;
            }
    }
    exit(0);
}

void main() {
    headNode* newhead = createHeadNode();
    int num = 0;
    char title[20];
    char author[20];
    int price = 0;
    char producer[20];
    char isbn[20];
    char keyword[20];
    login();
    while (true) {
        printf("**** Menu ****\n 1. Book Regi\n 2. Book Search\n 3. Book Delete\n 4. Book List\n 0. Exit\n Command> ");
        scanf("%d", &num);
        if (num == 1) {
            printf("\n");
            printf("< Book Regi >\n");
            printf("Book Title> ");
            scanf("%s", title);
            printf("Book Author> ");
            scanf("%s", author);
            printf("Book publisher>");
            scanf("%s", producer);
            printf("ISBN > ");
            scanf("%s", isbn);
            printf("Book Price> ");
            scanf("%d", &price);
            rear_addNode(newhead, title, author, price, producer, isbn);
        }
        else if (num == 2) {
            printf("Search Keyword> ");
            scanf("%s", keyword);
            searchNode(newhead, keyword);
        }
        else if (num == 3) {
            printf("\n");
            printf("1. Part delete	2. All delete ");
            scanf("%d", &num);
            if (num == 1) {
                printf("Delete Book title> ");
                scanf("%s", title);
                deleteNode(newhead, title);
            }
            else if (num == 2) {
                freeAllNode(newhead);
            }
        }
        else if (num == 4) {
            showAllNode(newhead);
        }
        else if (num == 0) {
            break;
        }
        printf("\n");
    }
    freeAllNode(newhead);
    free(newhead);
}
