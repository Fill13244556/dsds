#include <iostream>
int main() {
	setlocale(LC_ALL, "rus");
	//Case1. ���� ����� ����� � ��������� 1�7. ������� ������ � �������� ��� ������, ��������������� ������� �����(1 � ������������, 2 � �������� � �.�.).
	int day;
	std::cin >> day;
	if (day == 1) {
		std::cout << " �����������" << std::endl;
	}
	else if (day == 2) {
		std::cout << "�������" << std::endl; 
	}
	else if (day == 3) {
		std::cout << "�����" << std::endl;
	}
	else if (day == 4) {
     std::cout << "�������" << std::endl;
	}
	else if (day == 5) {
		std::cout << "�������" << std::endl;
	}
	else if (day == 6) {
		std::cout << "�������" << std::endl;
	}
	else if (day == 7) {
		std::cout << "�����������" << std::endl;
	}
//
	int day1;
	std::cin >> day1;
	switch (day) {
	case 1: std::cout << "�����������" << std::endl; break;
	case 2: std::cout << "�������" << std::endl; break;
	case 3: std::cout << "�����" << std::endl; break;
	case 4: std::cout << "�������" << std::endl; break;
	case 5: std::cout << "�������" << std::endl; break;
	case 6: std::cout << "�������" << std::endl; break;
	case 7: std::cout << "�����������" << std::endl; break;
	default: std::cout << "������" << std::endl; break;
	}

//���� ����� ����� K. ������� ������-�������� ������, ��������������� ����� K (1 � ������, 2 � ��������������������, 3 � ������������������, 4 � �������, 5 � ��������). ���� K �� ����� � ��������� 1�5, �� ������� ������ �������.
	int K;
	std::cin >> K;
	switch (K) {
	case 1: std::cout << "�����" << std::endl; break;
	case 2: std::cout << "�������������������" << std::endl; break;
	case 3: std::cout << "�����������������" << std::endl; break;
	case 4: std::cout << "������" << std::endl; break;
	case 5: std::cout << "�������" << std::endl; break;
	default: std::cout << "������" << std::endl; break;
	}

//��� ����� ������ � ����� ����� � ��������� 1�12 (1 � ������, 2 � ������� � �. �.). ������� �������� ���������������� ������� ���� (�����, ������, �����, �������).
	int month;
	std::cin >> month;
	switch (month) {
	case 1: 
	case 2: 
	case 12: std::cout << "����" << std::endl; break;
	case 3:
	case 4:
	case 5: std::cout << "�����" << std::endl; break;
	case 6:
	case 7:
	case 8: std::cout << "����" << std::endl; break;
	case 9:
	case 10:
	case 11: std::cout << "�����" << std::endl; break;
	}

//. ��� ����� ������ � ����� ����� � ��������� 1�12(1 � ������, 2 � ������� � �.�.).���������� ���������� ���� � ���� ������ ��� ������������� ����.
	int mes;
	std::cin >> mes;
	switch (mes) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: std::cout << "����: 31" << std::endl; break;
	case 4:
	case 6:
	case 9:
	case 11: std::cout << "����: 30" << std::endl; break;
	case 2: std::cout << "����: 28" << std::endl; break;
    }

//case 5.�������������� �������� ��� ������� ������������� ��������� �������: 1 � ��������, 2 � ���������, 3 � ���������, 4 � �������.��� ����� �������� N(����� ����� � ��������� 1�4) � ������������ ����� A � B(� �� ����� 0).��������� ��� ������� ��������� �������� � ������� ���������.
	int A, B, N;
	std::cin >> A >> B >> N;
	switch (N) {
	case 1: std::cout << A + B << std::endl; break;
	case 2: std::cout << A - B << std::endl; break;
	case 3: std::cout << A * B << std::endl; break;
	case 4: std::cout << A / B << std::endl; break;
    }

// case 6. ������� ����� ������������� ��������� �������: 1 � ��������, 2 � ��������, 3 � ����, 4 � ���������, 5 � ���������.��� ����� ������� �����(����� ����� � ��������� 1�5) � ����� ������� � ���� ��������(������������ �����).����� ����� ������� � ������. 
	int C, V;
	//C - �����. V - �����
	std::cin >> C >> V;
	switch (C) {
	case 1: std::cout << V / 10 << std::endl; break;
	case 2: std::cout << V * 1000 << std::endl; break;
	case 3: std::cout << V << std::endl; break;
	case 4: std::cout << V / 1000 << std::endl; break;
	case 5: std::cout << V / 100 << std::endl; break;
	}

//1. ����������� �� ��������� �, b, �.
	int a1, b1, c1;
	std::cin >> a1 >> b1 >> c1;
	bool( a1 == b1 && b1 == c1 && c1 == a1);
	std::cout << std::boolalpha << a1 << std::endl;

//2. ����� ����� N �������� ������ ���������� ������
	int N1;
	bool(N1 >= 10 && N1 < 100 &&  N1 % 2 == 0);
	std::cout << std::boolalpha << N1 << std::endl;

//3.����������� �� ��������� �, b, � �������� ��������������.
	int a2, b2, c2;
	std::cin >> a2 >> b2 >> c2;
	bool(a2 == b2 || b2 == c2 || c2 == a2);


    return 0;
}