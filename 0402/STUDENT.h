```c id="stheader01"
#ifndef STUDENT_H
#define STUDENT_H

/* 학생 정보 저장용 구조체 */
typedef struct {
    int id;             // 학생 학번
    char name[20];      // 학생 이름
    short score;        // 시험 점수
} Student;

/* 학번 시작 번호 */
#define START_ID 1001

#endif
```
