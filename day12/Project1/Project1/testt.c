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
        printf("아이디 : %s");
        scanf("%s", arr);
    }
    if (pw == 1)
    {
        printf("비밀번호:");
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
        puts("ID 입력 > ");
        scanf("%s", a);
    }
    if (i == 1) {
        puts("PW 입력 > ");
        scanf("%s", a);
    }
    char* p = a;
out:
    while (strlen(a) > limit) {
        puts("글자수를 초과했습니다");
        scanf("%s", a);
    }

    for (int i = 0; i <= limit; i++) {
        if (islower(*(p + i)) == 0) {
            if (isdigit(*(p + i)) == 0) {
                if (*(p + i) != 0) {
                    printf("%s\n", a);
                    puts("잘못된 문자가 입력되어 있습니다.");
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

    puts("<회원가입> ");
    puts("글자수 : 8장이내");
    puts("글자제한 : 영어 소문자 숫자만 사용 가능");
    puts("아이디, 비밀번호 조건은 똑같음");

    join(id, 0);
    join(password, 1);

    system("cls");
    puts("회원가입 완료");
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

