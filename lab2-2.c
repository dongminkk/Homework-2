#include <stdio.h>

int main() {
int i; //int형의 i 변수 선언
int *ptr; // 포인터 ptr 선언
int **dptr; //이중 포인터 dptr 선언

i = 1234; // 변수 i 에 1234대입

printf("[----- [kim dongmin] [2017038093] -----]\n");
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i); // 변수 i에 들어있는 데이터 출력
printf("address of i == %p\n", &i); // 변수 i의 주소 출력
printf("value of ptr == %p\n", ptr); // 포인터 ptr에 저장된 데이터 출력
printf("address of ptr == %p\n", &ptr); // 포인터 ptr의 주소 츨력

ptr = &i; /* ptr is now holding the address of i */

printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i);  // 변수 i에 들어있는 데이터 출력
printf("address of i == %p\n", &i); // 변수 i의 주소 출력
printf("value of ptr == %p\n", ptr); // 포인터 ptr에 저장된 데이터 출력 변수 i의 주소가 저장되어 있음
printf("address of ptr == %p\n", &ptr); // 포인터 ptr의 주소 츨력
printf("value of *ptr == %d\n", *ptr); // 포인터가 가르키는 주소로가서 값출력 i의 주소가 저장되어있기 때문에 i의 값 출력

dptr = &ptr; /* dptr is now holding the address of ptr */

printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i); //변수 i에 들어있는 데이터 출력
printf("address of i == %p\n", &i); //변수 i의 주소 출력
printf("value of ptr == %p\n", ptr); // 포인터 ptr에 저장된 데이터 출력 변수 i의 주소가 저장되어 있음
printf("address of ptr == %p\n", &ptr); // 포인터 ptr의 주소 츨력
printf("value of *ptr == %d\n", *ptr); // 포인터가 가르키는 주소로가서 값출력 i의 주소가 저장되어있기 때문에 i의 값 출력
printf("value of dptr == %p\n", dptr); // 이중포인터 dptr에 저장된 데이터 출력 포인터 ptr의 주소가 저장되어 있음
printf("address of dptr == %p\n", &dptr); // 이중포인터 dptr의 주소 츨력
printf("value of *dptr == %p\n", *dptr); // 이중포인터가 가르키는 주소로가서 값출력 ptr의 주소가 저장되어있기 때문에 i의 주소 출력
printf("value of **dptr == %d\n", **dptr); // 이중포인터가 가르기는 주소로간다음 포인터가 가르키는 주소로 가서 저장된 값 출력 i값이 출력됨

*ptr = 7777; /* changing the value of *ptr */ //포인터 ptr 가르키는 변수로가서 값 7777을 저장

printf("\n[after *ptr = 7777] \n"); 
printf("value of i == %d\n", i); // 변수 i에 들어있는 데이터 출력
printf("value of *ptr == %d\n", *ptr); // 포인터가 가르키는 주소로가서 값출력 i의 주소가 저장되어있기 때문에 i의 값 출력
printf("value of **dptr == %d\n", **dptr); // 이중포인터가 가르기는 주소로간다음 포인터가 가르키는 주소로 가서 저장된 값 출력 i값이 출력됨

**dptr = 8888; /* changing the value of **dptr */ //이중포인터 dptr 가르키는 포인터로가고 그포인터가 가르키는 변수로 가서 값 8888을 저장

printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i); // 변수 i에 들어있는 데이터 출력
printf("value of *ptr == %d\n", *ptr); // 포인터가 가르키는 주소로가서 값출력 i의 주소가 저장되어있기 때문에 i의 값 출력
printf("value of **dptr == %d\n", **dptr); // 이중포인터가 가르기는 주소로간다음 포인터가 가르키는 주소로 가서 저장된 값 출력 i값이 출력됨

return 0;

}