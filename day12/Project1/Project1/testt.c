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
    char password[] = "";
    int key_code;

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
}

