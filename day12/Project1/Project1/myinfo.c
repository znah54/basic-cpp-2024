/*
File : myinfo.c
Created : 2024.03.27
Author : ����
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
#include<fcntl.h>
#include<ctype.h>
#define limit 8
int login(char id[], int pw) {
    char arr[limit + 1];
    if (pw == 0) {
        printf("���̵� : %s");
        scanf("%s", arr);
    }
    if (pw == 1)
    {
        printf("��й�ȣ:");
        scanf("%s", arr);
    }
    if (strcmp(id, arr) != 0)
        return 0;
    else
        return 1;
}
void join(char a[], int i)
{
    if (i == 0) {
        puts("ID �Է� > ");
        scanf("%s", a);
    }
    if (i == 1) {
        puts("PW �Է� > ");
        scanf("%s", a);
    }
    char* p = a;
out:
    while (strlen(a) > limit) {
        puts("���ڼ��� �ʰ��߽��ϴ�");
        scanf("%s", a);
    }

    for (int i = 0; i <= limit; i++) {
        if (islower(*(p + i)) == 0) {
            if (isdigit(*(p + i)) == 0) {
                if (*(p + i) != 0) {
                    printf("%s\n", a);
                    puts("�߸��� ���ڰ� �ԷµǾ� �ֽ��ϴ�.");
                    scanf("%s", a);
                    goto out;
                    break;
                }
            }
        }
    }
    puts("");
}
int main() {
    char id[] = "";
    //char inputid;
    char password[] = "";
    //int inputpw = 0;
    int key_code;
    char buf[1024];
    FILE* fp;
    FILE* fp1;
    int fd;

    puts("<ȸ������> ");
    puts("���ڼ� : 8���̳�");
    puts("�������� : ���� �ҹ��� ���ڸ� ��� ����");
    puts("���̵�, ��й�ȣ ������ �Ȱ���");

    join(id, 0);
    join(password, 1);

    system("cls");
    puts("ȸ������ �Ϸ�");
    puts("");
    puts("login");

    do {
        key_code = (login(id, 0) && login(password, 1));
        if (key_code == 1)
            puts("Login");
        else
            puts("try again");
    } while (key_code != 1);
    return 0;

    //fp=fopen("myinfo.txt","r");
    //if(fp == NULL) printf("file open error\n");
    /*scanf("%s",buf);
    if(buf==ida){
      printf("PW �Է� > ");
      scanf("%d",inputpw);
      if(inputpw==1)
      printf("�α��μ���");
      else printf("�α��ν���");
    }
    else

    fputs(buf,fp);

    fp = fopen("myinfo.txt","rw");
    if(fp==NULL){
      fprintf(stderr,"file open error\n");
      exit(1);
    }*/
