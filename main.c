#include <stdio.h>
#include <math.h>
void hw1_1();
void hw1_2();
void hw1_3();
void hw1_4();
void hw1_5();
void hw1_6();

int main(void) {
  //hw1_1();
  //hw1_2();
  //hw1_3();
  //hw1_4();
  //hw1_5();
  hw1_6();
  return 0;
}

void hw1_1(void) {
  //Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах.
  printf("Расчет ИМТ\n");

  int height, weight;
  float imt;
  printf("Введите рост (см): ");
  scanf("%d", &height);

  printf("Введите вес (кг): ");
  scanf("%d", &weight);

  imt = (float)weight / ((float)height * (float)height * 0.0001);
  printf("Индекс массы: %.2f\n", imt);
}

void hw1_2(){
  //Написать программу обмена значениями двух целочисленных переменных без использования третьей переменной.
  printf("Обмен целочисленных переменных\n");

  int a, b;
  printf("Введите первое число: ");
  scanf("%d", &a);
  printf("Введите второе число: ");
  scanf("%d", &b);

  a = a + b;
  b = a - b;
  a = a - b;
  printf("Первое число: %d\nВторое число: %d\n", a, b);
}

void hw1_3(){
  //Написать программу нахождения корней заданного квадратного уравнения.
  printf("Нахождение корней квадратного уравнения\n");

  int a, b, c, discriminant;
  float x1, x2;
  printf("Введите коэффициенты согласно формуле ax+bx^2+c=0\nВведите a:");
  scanf("%d", &a);
  printf("Введите b:");
  scanf("%d", &b);
  printf("Введите C:");
  scanf("%d", &c);

  discriminant = (b * b) - 4 * a * c;
  if(discriminant < 0){
    printf("Нет решений\n");
  }
  else if(discriminant == 0){
    x1 = (-b + sqrt(discriminant)) / (2 * a);
    printf("x1 = %f\n", x1);
  }
  else{
    x1 = (-b + sqrt(discriminant)) / (2 * a);
    x2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("x1 = %f\nx2 = %f\n", x1, x2);
  }
}

void hw1_4(){
  //Ввести возраст человека (от 1 до 150 лет) и вывести его вместе с последующим словом «год», «года» или «лет».
  printf("Вывод возвраста\n");

  int age, age10, age100;
  printf("Введите число: ");
  scanf("%d", &age);
  age10 = age % 10;
  age100 = age % 100;
  if(age10 == 1 && age100 != 11){
    printf("%d год\n", age);
  }
  else if(age10 > 1 && age10 < 5 && !(age100 > 11 && age100 < 15)){
    printf("%d года\n", age);
  }
  else{
    printf("%d лет\n", age);
  }
}

void hw1_5(){
  //Существуют числовые координаты двух полей шахматной доски (x1,y1,x2,y2). Требуется определить, относятся ли к поля к одному цвету или нет.
  printf("Относятся ли координаты шахматной доски к одному цвету\n");

  int x1, y1, x2, y2, xy1, xy2;
  printf("Введите x первого поля: ");
  scanf("%d", &x1);
  printf("Введите y первого поля: ");
  scanf("%d", &y1);
  printf("Введите x второго поля: ");
  scanf("%d", &x2);
  printf("Введите y второго поля: ");
  scanf("%d", &y2);

  if(x1 < 0 || x1 > 8
    || y1 < 0 || y1 > 8
    || x2 < 0 || x2 > 8
    || y2 < 0 || y2 > 8){
      printf("Вы ввели неверные координаты\n");
      return;
    }

  xy1 = (x1 + y1) % 2;
  xy2 = (x2 + y2) % 2;
  if(xy1 == xy2){
    printf("Поля одного цвета\n");
  }
  else{
    printf("Поля разного цвета\n");
  }
}

void hw1_6(){
  //Автоморфные числа. Натуральное число называется автоморфным, если оно равно последним цифрам своего квадрата. Например, 25 ^ 2 = 625. Напишите программу, которая вводит натуральное число N и выводит на экран все автоморфные числа, не превосходящие N.

  printf("Автоморфные числа\n");

  int max, i, ii, delitel, maxmax, tmp;
  printf("Введите число:");
  scanf("%d", &max);
  maxmax = max * max;
  i = 1;
  while(i <= max){
    delitel = 10;
    while(delitel < max * max){
      ii = i * i;
      if(ii % delitel == i && tmp != ii){
        printf("%d - %d\n", i, ii);
        tmp = ii;
      }
      delitel = delitel * 10;
    }
    i++;
  }
}