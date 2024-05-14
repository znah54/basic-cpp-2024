/*
File : LibrarySystem.main
Created : 24-03-27
Author : °íº´ÇÐ
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include "librarySystem_struct.h"
#include "LibrarySystem.function.c"

void main(){
  headNode* newhead = createHeadNode();
  int num = 0;
  char title[20];
  char author[20];
  int price = 0;
  char producer[20];
  char isbn[20];
  char keyword[20];
  void login();
  while(true){
    printf("**** Menu ****\n 1. Book Regi\n 2. Book Search\n 3. Book Delete\n 4. Book List\n 0. Exit\n Command> ");
    scanf("%d", &num);
    if(num == 1){
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
    else if(num == 2){
      printf("Search Keyword> ");
      scanf("%s", keyword);
      searchNode(newhead, keyword);
    }
    else if(num == 3){
      printf("\n");
      printf("1. Part delete	2. All delete ");
      scanf("%d", &num);
      if(num == 1){
        printf("Delete Book title> ");
        scanf("%s", title);
        deleteNode(newhead, title);
      }
      else if(num == 2){
        freeAllNode(newhead);
      }
    }
    else if(num == 4){
      showAllNode(newhead);
    }
    else if(num == 0){
      break;
    }
    printf("\n");
  }
  freeAllNode(newhead);
  free(newhead);
}
