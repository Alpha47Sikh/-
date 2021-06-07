#include <iostream>
#include <cmath>
using namespace std;
double f(double x)//сама функция, можно вести любую, какую захочешь
{
return ( pow(x, 2) + 4 * x - 2);
}
int main()
{
const double eps = 0.00001;//точность вычисление
double x = 1;//первичное приближение
double x1 = -1;
double h;
do {
h=((x1-x)*f(x)) / (f(x1)-f(x));//вычисляем вторичное приближение
x1 = x;
x -= h;
} while (abs(h) > eps);//проверем не вышли ли за требуемую точность
cout.precision(5);//установливаем точность вывода
cout << "x = " <<x << endl;//вывод
system("pause");//команда для консоли ждать нажатие кнопки
return 0;
}