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

    file = fopen(argv[1], "rb+");
    if (file == NULL) {
        perror("파일 열기 실패");
        return 1;
    }

    while (1) {
        printf("수정할 학번 입력 (종료: 0) : ");

        if (scanf("%d", &studentId) != 1)
            break;

        if (studentId == 0)
            break;

        long offset = (long)(studentId - START_ID) * sizeof(struct student);

        fseek(file, offset, SEEK_SET);

        if (fread(&st, sizeof(struct student), 1, file) == 1 && st.id != 0) {

            printf("학생 이름 : %s\n", st.name);
            printf("현재 점수 : %d\n", st.score);
            printf("변경할 점수 입력 : ");

            scanf("%hd", &st.score);

            fseek(file, -sizeof(struct student), SEEK_CUR);
            fwrite(&st, sizeof(struct student), 1, file);

            printf("수정이 완료되었습니다.\n\n");
        }
        else {
            printf("해당 학번의 정보가 존재하지 않습니다.\n\n");
        }
    }

    fclose(file);
    return 0;
}
```
