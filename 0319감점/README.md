# Unix 파일 및 디렉토리 명령어 정리

## 1. 디렉토리 탐색

### pwd

현재 작업 중인 디렉토리의 전체 경로를 확인하는 명령어이다.

```bash
pwd
```

### ls

현재 디렉토리에 존재하는 파일과 폴더 목록을 출력한다.

```bash
ls
```

자주 사용하는 옵션

```bash
ls -l
```

파일 크기, 권한, 소유자 등의 상세 정보를 확인할 수 있다.

```bash
ls -a
```

숨김 파일까지 모두 표시한다.

### cd

다른 디렉토리로 이동할 때 사용하는 명령어이다.

```bash
cd 폴더명
```

자주 사용하는 형태

```bash
cd ..
```

상위 디렉토리로 이동

```bash
cd ~
```

홈 디렉토리로 이동

---

## 2. 파일 및 디렉토리 생성·관리

### mkdir

새로운 디렉토리를 생성한다.

```bash
mkdir test
```

하위 디렉토리까지 한 번에 생성

```bash
mkdir -p dir1/dir2/dir3
```

### touch

빈 파일을 생성하거나 파일의 수정 시간을 변경한다.

```bash
touch sample.txt
```

### cp

파일 또는 디렉토리를 복사한다.

```bash
cp file1.txt file2.txt
```

폴더 복사 시

```bash
cp -r folder1 folder2
```

### mv

파일 이동 또는 이름 변경에 사용된다.

```bash
mv old.txt new.txt
```

```bash
mv file.txt backup/
```

### rm

파일을 삭제한다.

```bash
rm file.txt
```

디렉토리까지 강제로 삭제

```bash
rm -rf folder
```

사용 시 주의가 필요하다.

---

## 3. 파일 내용 확인 및 검색

### cat

파일의 전체 내용을 출력한다.

```bash
cat test.txt
```

### less

긴 파일을 페이지 단위로 확인할 수 있다.

```bash
less test.txt
```

### head

파일의 앞부분 내용을 확인한다.

```bash
head test.txt
```

### tail

파일의 마지막 부분을 확인한다.

```bash
tail test.txt
```

실시간 로그 확인

```bash
tail -f log.txt
```

### grep

파일 내 특정 문자열을 검색한다.

```bash
grep "Java" study.txt
```

---

## 4. 파일 권한 관리

### chmod

파일 및 디렉토리의 권한을 변경한다.

```bash
chmod 755 test.sh
```

권한 숫자 의미

* 4 : 읽기(Read)
* 2 : 쓰기(Write)
* 1 : 실행(Execute)

예를 들어 755는 소유자에게 읽기, 쓰기, 실행 권한을 모두 부여하고 다른 사용자에게는 읽기와 실행 권한만 부여한다.

### chown

파일의 소유자 또는 그룹을 변경한다.

```bash
sudo chown user file.txt
```

주로 관리자 권한과 함께 사용된다.

---

## 정리

Unix에서는 파일과 디렉토리를 관리하기 위해 다양한 명령어를 제공한다. 특히 pwd, ls, cd, mkdir, cp, mv, rm 명령어는 가장 기본적으로 사용되며, grep과 chmod는 시스템 관리 및 개발 환경에서 자주 활용된다.
