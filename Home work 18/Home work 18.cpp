// Home work 18.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
int print_sum(int num1, int num2, int num3, int num4, int num5 = 5) {
    int tmp=num1+num2+num3+num4+num5;
    return tmp;
}
double  print_nb(int num1, int num2, int num3) {
    double srt = (num1 + num2 + num3) / 3;
    return srt;
}
int max(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}
float max(float num1, float num2) {
    return num1 > num2 ? num1 : num2;
}
double max(double num1, double num2) {
    return num1 >  num2 ? num1 : num2;
}
template<typename T>
int simp_numb(T arr[], const int size) {
    for (int i = 0; i < size; i++)
        if (arr[i] / 2 != 0)
            return arr[i];        
}

int main()
{
    setlocale(LC_ALL, "Russian");
    //Задача 1.Сумма чисел
    /*int a, b, c, d, e;
    std::cout << "Введите 5 чисел:\n";
    std::cin >> a >> b >> c >> d >> e;
    print_sum(a, b, c, d, e);
    std::cout << "Сумма 5ти чисел равна: \n" << print_sum(a,b,c,d,e);*/
    //Задача 2. Среднее арифметическое
    /*double a, b, c;
    std::cout << "Введите 3 числа:\n";
    std::cin >> a>>b>>c;
    print_nb(a, b, c);
    std::cout << "Среднее арифметическое 3х чисел равно:\n" << print_nb(a, b, c);*/
    
    //Задача 3. Перегруженная функция
    /*float fa = 56, fb = 40;
    std::cout << "Максимальное из 2х значений->" <<max(fa, fb)<<'\n';
    double da = 7, db = 10;
    std::cout << "Максимальное из 2х значений->" <<max(da, db)<<'\n';
    int ia = 4, ib = 1;
    std::cout << "Максимальное из 2х значений->" << max(ia, ib)<<'\n';*/
    //Задача 4. Простые числа
    const int size = 5;
    int arr[size]{ 1,2,3,4,5 };
    simp_numb(arr, size);
    std::cout << simp_numb(arr, size);


    return 0;
}


