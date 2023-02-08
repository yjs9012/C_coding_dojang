/***********************************************************************************
 <문자열을 정수, 실수 형태>
 1. atoi(문자열)
    - int atoi(char const* _String);
    - 10진수로 표기된 문자열을 정수로 바꿀수 있음
    - 성공하면 변환된 정수를 반환, 실패하면 0을 반환
    - 283a, 283a30, 283! -> 283 // a30, !30 abc -> 0

 2. aotf(문자열)
    - double atof(char const* _String);
    - ASCII string to float

 3. strtol(문자열, 끝포인터, 진법)
    - long strtol(char const* _String, char** _Endptr, int _Radix)
    - 특정 진법으로 표기된 문자열을 정수로 변환 // String to long

 4. strtof(문자열, 끝포인터)
    - float strtof(char const* _String, char** _EndPtr)
    - 성공하면 변환된 실수를 반환, 실패하면 0을 반환
************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char *s1 = "283";
   char *s2 = "0xaf10";
   char *s3 = "0xaf10 42 0x27C 9952";
   char *s4 = "283.3";
   char *s5 = "35.283672 3.e5 9.281772 7.e-5";
   char *end;
   int num1, num2, num3, num4;
   float num5, num6, num7, num8;

   // atoi함수 사용
   num1 = atoi(s1);
   printf("%d\n", num1);

   // atof함수 사용
   num1 = atof(s4);
   printf("%f\n", num5);

   // strtol함수 사용
   num1 = strtol(s2, NULL, 16);
   printf("%x %d\n", num1, num1);

   // 여러개 정수로된 문자열 변환
   num1 = strtol(s3, &end, 16);
   num2 = strtol(end, &end, 16);
   num3 = strtol(end, &end, 16);
   num4 = strtol(end, NULL, 16);

   printf("%x %d\n", num1, num1);
   printf("%x %d\n", num2, num2);
   printf("%x %d\n", num3, num3);
   printf("%x %d\n", num4, num4);

   // 여러개 실수로된 문자열 변환
   num5 = strtof(s5, &end);
   num6 = strtof(end, &end);
   num7 = strtof(end, &end);
   num8 = strtof(end, NULL);

   printf("%f\n", num5);
   printf("%e\n", num6);
   printf("%f\n", num7);
   printf("%e\n", num8);

   return 0;
}