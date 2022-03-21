#include <stdio.h>

int main() {
char charType; //문자타입 char형 변수 charType 선언
int integerType; //정수타입 int형 변수 integerType선언
float floatType; //실수타입 float형 변수 floatType선언
double doubleType; //실수타입 double형 변수 doubleType 선언

printf("[----- [kim dongmin] [2017038093] -----]\n");
printf("Size of char: %ld byte\n",sizeof(charType)); // charType의 자료형 char 크기를 출력한다.
printf("Size of int: %ld bytes\n",sizeof(integerType)); // integerType의 자료형 int 크기를 출력한다.
printf("Size of float: %ld bytes\n",sizeof(floatType)); // floatType의 자료형 float 크기를 출력한다.
printf("Size of double: %ld bytes\n",sizeof(doubleType)); // doubleType의 자료형 double 크기를 출력한다.

printf("-----------------------------------------\n");

printf("Size of char: %ld byte\n",sizeof(char)); // char형 크기를 출력한다.
printf("Size of int: %ld bytes\n",sizeof(int)); // int의 크기를 출력한다.
printf("Size of float: %ld bytes\n",sizeof(float)); // float의 크기를 출력한다.
printf("Size of double: %ld bytes\n",sizeof(double)); //double의 크기를 출력한다.

printf("-----------------------------------------\n");

printf("Size of char*: %ld byte\n",sizeof(char*)); //char형의 주소값 변수의 크기 출력
printf("Size of int*: %ld bytes\n",sizeof(int*)); //int형의 주소값 변수의 크기 출력
printf("Size of float*: %ld bytes\n",sizeof(float*)); //float형의 주소값 변수의 크기 출력
printf("Size of double*: %ld bytes\n",sizeof(double*)); //double형의 주소값 변수의 크기 출력

return 0;

}
