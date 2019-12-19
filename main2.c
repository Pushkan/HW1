#include <stdio.h>
#include <string.h>

void hw2_1();
void hw2_2();
void hw2_2_b();
void hw2_3();

int main(void) {
  hw2_1();
  hw2_2();
  hw2_2_b();
  hw2_3();
  return 0;
}

void toBinarySS(int value){
  if(value != 0){
    toBinarySS(value / 2);
  }
  printf("%d",value % 2);
}

void hw2_1(){
  //1 Реализовать функцию перевода из 10 системы в двоичную используя рекурсию.
  printf("Перевод в двоичную сс\n");

  int value;
  printf("Введите число в 10-ной сс:");
  scanf("%d", &value);
  toBinarySS(value);
  printf("\n");
}

int toPow(int value, int power){
  int i = 0, response = 1;
  while(i < power){
    i++;
    response = response * value;
  }
  return response;
}

void hw2_2(){
  //2. Реализовать функцию возведения числа a в степень b.
  printf("Возведение в степень\n");

  int value, power;
  printf("Введите число");
  scanf("%d", &value);
  printf("Введите степень");
  scanf("%d", &power);
  printf("%d\n", toPow(value, power));
}

int toPowRec(int value, int power){
  if(power > 0){
    return toPowRec(value, power - 1) * value;
  }
  else{
    return 1;
  }
}

void hw2_2_b(){
  //2. Реализовать функцию возведения числа a в степень b рекурсивно.
  printf("Возведение в степень рекурсивно\n");

  int value, power;
  printf("Введите число");
  scanf("%d", &value);
  printf("Введите степень");
  scanf("%d", &power);
  printf("%d\n", toPowRec(value, power));
}

void hw2_3(){
  //3. * Программа преобразует целое число. У программы две команды: Прибавь 1, Умножь на 2; Сколько существует путей для данной программы, которые число 3 преобразуют в число 20? Решить с использованием рекурсии.

}