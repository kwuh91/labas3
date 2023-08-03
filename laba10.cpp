#include <cstdio>
#include <math.h>
#include <windows.h>
#include <iostream>

/*
//1
float y, ap, op;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    y = 1;
    printf("До преобразований y=%20.16f\n", y);
    y = y / 3;
    printf("представление числа 1/3 в памяти (переменная)    y=%20.16f\n", y);
    printf("точное представление числа 1/3 (литерал)  =%20.16f\n", 1.0 / 3.0);
    ap = abs(1.0 / 3 - y); //абсолютная погрешность
    op = ap / abs(1.0 / 3);  // относительная погрешность
    printf("Абсолютная погрешность предст. 1/3 ap=%20.16f\n", ap);
    printf("Относительная погрешность предст. 1/3  op=%20.16f\n", op);
    y = y / 6000;
    y = exp(y);
    y = sqrt(y); //Квадратный корень
    y = y / 14;
    y = 14 * y;
    y = y * y;
    y = log(y);
    y = 6000 * y;
    y = y * 3;
    printf("После преобразований y=%20.16f\n", y);
    ap = abs(1 - y);  //абсолютная погрешность
    op = ap / 1; // относительная погрешность
    printf("Абсолютная погрешность ap=%20.16f\n", ap);
    printf("Относительная погрешность op=%20.16f\n", op);
    return 0;
}

//2
int main() {
    SetConsoleOutputCP(CP_UTF8);
    long double x, y, y1, y2, ap, op, precise_v;
    std::cout << "Enter x:\n";
    std::cin >> x;
    y1 = (exp(x) + exp(-x)) / 2;
    y2 = (exp(x) - exp(-x)) / 2;
    y = y1 * y1 - y2 * y2;
    printf("y1 = %.16Lf\ny2 = %.16Lf\n", y1, y2);
    ap = abs(1 - y);
    op = ap / 1;
    precise_v = cosh(x) * cosh(x) - sinh(x) * sinh(x);
    printf("Неточное значение ch(x)^2 - sh(x)^2 = %20.16Lf\n", y);
    printf("Точное значение ch(x)^2 - sh(x)^2 = %20.16Lf\n", precise_v);
    printf("Абсолютная погрешность ap = %20.1Lf\n", ap);
    printf("Относительная погрешность op = %20.16Lf\n", op);
    return 0;
}

//3
int main() {
    SetConsoleOutputCP(CP_UTF8);
    long double x, y, ap, op;
    std::cout << "Enter x:\n";
    std::cin >> x;

    y = sin(x) * sin(x) + cos(x) * cos(x);
    ap = abs(1 - y);
    op = ap / 1;

    printf("Значение sin(x)^2 + cos(x)^2 = %20.16Lf\n", y);
    printf("Абсолютная погрешность ap = %20.1Lf\n", ap);
    printf("Относительная погрешность op = %20.16Lf\n", op);
    return 0;
}
//
int main() {
    double a = 1.0;
    a = a / 3;
    printf("a = %20.16lf\nLiteral 1/3 = %20.16lf\n", a, 1.0 / 3.0);
    return 0;
}

//
int main(){
    const double PI0 = 3.14;
    const double PI1 = 3.141592;
    double rad = 2.0;
    printf ("The area of the circle at pi = %.2f: %20.16f\n", PI0 , PI0 * rad * rad);
    printf ("The area of the circle at pi = %.6f: %20.16f\n", PI1 , PI1 * rad * rad);
    return 0;
}
//
int main(){
    int i = 2;
    char c = 109;
    double d = -67.97234;

    printf("%lf\n",c*d+i);
    return 0;
}

int main() {
    long double ld = 56.736281938;
    float f = 34.3;

    printf("%.20f\n", (float) (f * ld));
    printf("%.20Lf\n", f * ld);
}
 */