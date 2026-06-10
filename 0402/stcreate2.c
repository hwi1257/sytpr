```c
#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main(int argc, char *argv[])
{
    FILE *file;
    struct student st;
    long pos;

    if (argc != 2) {
        fprintf(stderr, "사용법: %s <파일명>\n", argv[0]);
        return 1;
    }

    file = fopen(argv[1], "wb");
    if (file == NULL) {
        perror("파일 열기 실패");
        return 1;
    }

    printf("학번 이름 점수 입력 : ");

    while (1) {
        if (scanf("%d %s %hd", &st.id, st.name, &st.score) != 3)
            break;

        pos = (long)(st.id - START_ID) * sizeof(struct student);

        fseek(file, pos, SEEK_SET);
        fwrite(&st, sizeof(struct student), 1, file);
    }

    fclose(file);
    return 0;
}
```
