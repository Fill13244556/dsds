#include <iostream>
int main() {
	setlocale(LC_ALL, "rus");
	//Case1. ƒано целое число в диапазоне 1Ц7. ¬ывести строку Ч название дн€ недели, соответствующее данному числу(1 Ч Ђпонедельникї, 2 Ч Ђвторникї и т.д.).
	int day;
	std::cin >> day;
	if (day == 1) {
		std::cout << " ѕонедельник" << std::endl;
	}
	else if (day == 2) {
		std::cout << "¬торник" << std::endl; 
	}
	else if (day == 3) {
		std::cout << "—реда" << std::endl;
	}
	else if (day == 4) {
     std::cout << "„етверг" << std::endl;
	}
	else if (day == 5) {
		std::cout << "ѕ€тница" << std::endl;
	}
	else if (day == 6) {
		std::cout << "—уббота" << std::endl;
	}
	else if (day == 7) {
		std::cout << "¬оскресение" << std::endl;
	}
//
	int day1;
	std::cin >> day1;
	switch (day) {
	case 1: std::cout << "ѕонедельник" << std::endl; break;
	case 2: std::cout << "¬торник" << std::endl; break;
	case 3: std::cout << "—реда" << std::endl; break;
	case 4: std::cout << "„етверг" << std::endl; break;
	case 5: std::cout << "ѕ€тница" << std::endl; break;
	case 6: std::cout << "—уббота" << std::endl; break;
	case 7: std::cout << "¬оскресение" << std::endl; break;
	default: std::cout << "ошибка" << std::endl; break;
	}

//ƒано целое число K. ¬ывести строку-описание оценки, соответствующей числу K (1 Ч Ђплохої, 2 Ч Ђнеудовлетворительної, 3 Ч Ђудовлетворительної, 4 Ч Ђхорошої, 5 Ч Ђотличної). ≈сли K не лежит в диапазоне 1Ц5, то вывести строку Ђошибкаї.
	int K;
	std::cin >> K;
	switch (K) {
	case 1: std::cout << "ѕлохо" << std::endl; break;
	case 2: std::cout << "Ќеудовлетворительно" << std::endl; break;
	case 3: std::cout << "”довлетворительно" << std::endl; break;
	case 4: std::cout << "’орошо" << std::endl; break;
	case 5: std::cout << "ќтлично" << std::endl; break;
	default: std::cout << "ошибка" << std::endl; break;
	}

//ƒан номер мес€ца Ч целое число в диапазоне 1Ц12 (1 Ч €нварь, 2 Ч февраль и т. д.). ¬ывести название соответствующего времени года (Ђзимаї, Ђвеснаї, Ђлетої, Ђосеньї).
	int month;
	std::cin >> month;
	switch (month) {
	case 1: 
	case 2: 
	case 12: std::cout << "«има" << std::endl; break;
	case 3:
	case 4:
	case 5: std::cout << "¬есна" << std::endl; break;
	case 6:
	case 7:
	case 8: std::cout << "Ћето" << std::endl; break;
	case 9:
	case 10:
	case 11: std::cout << "ќсень" << std::endl; break;
	}

//. ƒан номер мес€ца Ч целое число в диапазоне 1Ц12(1 Ч €нварь, 2 Ч февраль и т.д.).ќпределить количество дней в этом мес€це дл€ невисокосного года.
	int mes;
	std::cin >> mes;
	switch (mes) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: std::cout << "ƒней: 31" << std::endl; break;
	case 4:
	case 6:
	case 9:
	case 11: std::cout << "ƒней: 30" << std::endl; break;
	case 2: std::cout << "ƒней: 28" << std::endl; break;
    }

//case 5.јрифметические действи€ над числами пронумерованы следующим образом: 1 Ч сложение, 2 Ч вычитание, 3 Ч умножение, 4 Ч деление.ƒан номер действи€ N(целое число в диапазоне 1Ц4) и вещественные числа A и B(¬ не равно 0).¬ыполнить над числами указанное действие и вывести результат.
	int A, B, N;
	std::cin >> A >> B >> N;
	switch (N) {
	case 1: std::cout << A + B << std::endl; break;
	case 2: std::cout << A - B << std::endl; break;
	case 3: std::cout << A * B << std::endl; break;
	case 4: std::cout << A / B << std::endl; break;
    }

// case 6. ≈диницы длины пронумерованы следующим образом: 1 Ч дециметр, 2 Ч километр, 3 Ч метр, 4 Ч миллиметр, 5 Ч сантиметр.ƒан номер единицы длины(целое число в диапазоне 1Ц5) и длина отрезка в этих единицах(вещественное число).Ќайти длину отрезка в метрах. 
	int C, V;
	//C - номер. V - длина
	std::cin >> C >> V;
	switch (C) {
	case 1: std::cout << V / 10 << std::endl; break;
	case 2: std::cout << V * 1000 << std::endl; break;
	case 3: std::cout << V << std::endl; break;
	case 4: std::cout << V / 1000 << std::endl; break;
	case 5: std::cout << V / 100 << std::endl; break;
	}

//1. треугольник со сторонами а, b, с.
	int a1, b1, c1;
	std::cin >> a1 >> b1 >> c1;
	bool( a1 == b1 && b1 == c1 && c1 == a1);
	std::cout << std::boolalpha << a1 << std::endl;

//2. целое число N €вл€етс€ чЄтным двузначным числом
	int N1;
	bool(N1 >= 10 && N1 < 100 &&  N1 % 2 == 0);
	std::cout << std::boolalpha << N1 << std::endl;

//3.“реугольник со сторонами а, b, с €вл€етс€ равнобедренным.
	int a2, b2, c2;
	std::cin >> a2 >> b2 >> c2;
	bool(a2 == b2 || b2 == c2 || c2 == a2);


    return 0;
}