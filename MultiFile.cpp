#include <iostream>
#include <string>
#include "Summ.h"//Подключаем файл 
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    cout << summa(1, 1);
}