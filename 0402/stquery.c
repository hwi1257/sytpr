```c
#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main(int argc, char *argv[])
{
    FILE *file;
    struct student st;
    int studentId;

    if (argc != 2) {
        fprintf(stderr, "사용법: %s <파일명>\n", argv[0]);
        return 1;
    }

    file = fopen(argv[1], "rb");
    if (file == NULL) {
        perror("파일 열기 실패");
        return 1;
    }

    while (1) {
        printf("검색할 학번 입력 (종료: 0) : ");

        if (scanf("%d", &studentId) != 1)
            break;

        if (studentId == 0)
            break;

        long offset = (long)(studentId - START_ID) * sizeof(struct student);

        fseek(file, offset, SEEK_SET);

        if (fread(&st, sizeof(struct student), 1, file) == 1 && st.id != 0) {
            printf("\n[조회 결과]\n");
            printf("학번 : %d\n", st.id);
            printf("이름 : %s\n", st.name);
            printf("점수 : %d\n\n", st.score);
        }
        else {
            printf("등록된 학생 정보가 없습니다.\n");
        }
    }

    fclose(file);
    return 0;
}
```
