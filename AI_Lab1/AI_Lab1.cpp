﻿#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int LINE = 100;
const int COLUMN = 9;

void ADD(int omega[], int main_selection[]) {
	for (int i = 0; i < COLUMN; i++) {
		if (main_selection[i] == 1) {
			omega[i]++;
		}
	}
	//cout << "+" << endl;
}

void SUB(int omega[], int main_selection[]) {
	for (int i = 0; i < COLUMN; i++) {
		if (main_selection[i] == 1) {
			omega[i]--;
		}
	}
	//cout << "-" << endl;
}

int main() {
	
	setlocale(LC_ALL, "rus");
	//код Иванов ДАнила
	
	int omega[9] = { 2, 3, 5, 8, 4, 6, 0, 2, 0 }; //омега
	int N6[9] = { 0, 0, 1, 0, 1, 1, 0, 1, 1 }; //шаблон для числа 6
	int MAIN_SELECTOIN[LINE][COLUMN] = { //выборкa
	{ 1, 1, 0, 1, 1, 0, 1, 0, 0 },
	{ 1, 1, 0, 1, 0, 1, 0, 1, 1 },
	{ 0, 1, 0, 1, 0, 0, 1, 0, 1 },
	{ 1, 1, 0, 0, 1, 0, 0, 1, 1 },
	{ 0, 1, 1, 0, 1, 0, 1, 0, 0 },
	{ 1, 1, 0, 0, 1, 0, 0, 1, 1 },
	{ 1, 1, 0, 1, 1, 1, 0, 1, 1 },
	{ 0, 0, 1, 1, 0, 0, 0, 1, 0 },
	{ 0, 1, 1, 0, 0, 1, 0, 0, 0 },
	{ 1, 0, 0, 1, 1, 0, 0, 1, 0 },
	{ 0, 1, 1, 0, 0, 1, 0, 0, 0 },
	{ 0, 0, 1, 0, 1, 1, 0, 1, 1 },
	{ 0, 1, 1, 0, 1, 0, 1, 0, 0 },
	{ 0, 1, 0, 1, 0, 0, 1, 0, 1 },
	{ 1, 1, 0, 0, 1, 0, 0, 1, 1 },
	{ 1, 0, 0, 1, 1, 0, 0, 1, 0 },
	{ 1, 1, 0, 1, 1, 1, 0, 1, 1 },
	{ 0, 0, 1, 1, 0, 0, 0, 1, 0 },
	{ 1, 1, 0, 1, 1, 0, 1, 0, 0 },
	{ 1, 1, 0, 1, 0, 1, 0, 1, 1 },
	{ 1, 1, 0, 0, 1, 0, 0, 1, 1 },
	{ 1, 1, 0, 1, 1, 1, 0, 1, 1 },
	{ 1, 1, 0, 1, 1, 0, 1, 0, 0 },
	{ 0, 1, 0, 1, 0, 0, 1, 0, 1 },
	{ 0, 0, 1, 0, 1, 1, 0, 1, 1 },
	{ 1, 1, 0, 1, 0, 1, 0, 1, 1 },
	{ 0, 0, 1, 1, 0, 0, 0, 1, 0 },
	{ 0, 1, 1, 0, 0, 1, 0, 0, 0 },
	{ 0, 1, 1, 0, 1, 0, 1, 0, 0 },
	{ 1, 0, 0, 1, 1, 0, 0, 1, 0 },
	{ 0, 1, 1, 0, 0, 1, 0, 0, 0 },
	{ 0, 1, 1, 0, 1, 0, 1, 0, 0 },
	{ 1, 1, 0, 1, 0, 1, 0, 1, 1 },
	{ 0, 0, 1, 0, 1, 1, 0, 1, 1 },
	{ 1, 1, 0, 1, 1, 0, 1, 0, 0 },
	{ 1, 1, 0, 0, 1, 0, 0, 1, 1 },
	{ 0, 1, 0, 1, 0, 0, 1, 0, 1 },
	{ 0, 0, 1, 1, 0, 0, 0, 1, 0 },
	{ 1, 1, 0, 1, 1, 1, 0, 1, 1 },
	{ 1, 0, 0, 1, 1, 0, 0, 1, 0 },
	{ 1, 0, 0, 1, 1, 0, 0, 1, 0 },
	{ 1, 1, 0, 1, 1, 0, 1, 0, 0 },
	{ 0, 1, 1, 0, 0, 1, 0, 0, 0 },
	{ 0, 0, 1, 0, 1, 1, 0, 1, 1 },
	{ 0, 0, 1, 1, 0, 0, 0, 1, 0 },
	{ 0, 1, 0, 1, 0, 0, 1, 0, 1 },
	{ 0, 1, 1, 0, 1, 0, 1, 0, 0 },
	{ 1, 1, 0, 0, 1, 0, 0, 1, 1 },
	{ 1, 1, 0, 1, 0, 1, 0, 1, 1 },
	{ 1, 1, 0, 1, 1, 1, 0, 1, 1 },
	{ 1, 1, 0, 0, 1, 0, 0, 1, 1 },
	{ 0, 1, 0, 1, 0, 0, 1, 0, 1 },
	{ 0, 0, 1, 0, 1, 1, 0, 1, 1 },
	{ 1, 1, 0, 1, 1, 1, 0, 1, 1 },
	{ 1, 1, 0, 1, 1, 0, 1, 0, 0 },
	{ 1, 0, 0, 1, 1, 0, 0, 1, 0 },
	{ 0, 0, 1, 1, 0, 0, 0, 1, 0 },
	{ 0, 1, 1, 0, 1, 0, 1, 0, 0 },
	{ 0, 1, 1, 0, 0, 1, 0, 0, 0 },
	{ 1, 1, 0, 1, 0, 1, 0, 1, 1 },
	{ 1, 1, 0, 0, 1, 0, 0, 1, 1 },
	{ 0, 1, 0, 1, 0, 0, 1, 0, 1 },
	{ 0, 0, 1, 0, 1, 1, 0, 1, 1 },
	{ 1, 1, 0, 1, 1, 1, 0, 1, 1 },
	{ 1, 1, 0, 1, 1, 0, 1, 0, 0 },
	{ 1, 0, 0, 1, 1, 0, 0, 1, 0 },
	{ 0, 0, 1, 1, 0, 0, 0, 1, 0 },
	{ 0, 1, 1, 0, 1, 0, 1, 0, 0 },
	{ 0, 1, 1, 0, 0, 1, 0, 0, 0 },
	{ 1, 1, 0, 1, 0, 1, 0, 1, 1 },
	{ 0, 1, 0, 1, 0, 0, 1, 0, 1 },
	{ 1, 1, 0, 1, 1, 0, 1, 0, 0 },
	{ 1, 1, 0, 0, 1, 0, 0, 1, 1 },
	{ 0, 0, 1, 1, 0, 0, 0, 1, 0 },
	{ 0, 1, 1, 0, 1, 0, 1, 0, 0 },
	{ 1, 1, 0, 1, 0, 1, 0, 1, 1 },
	{ 0, 0, 1, 0, 1, 1, 0, 1, 1 },
	{ 0, 1, 1, 0, 0, 1, 0, 0, 0 },
	{ 1, 1, 0, 1, 1, 1, 0, 1, 1 },
	{ 1, 0, 0, 1, 1, 0, 0, 1, 0 },
	{ 1, 1, 0, 1, 0, 1, 0, 1, 1 },
	{ 1, 1, 0, 1, 1, 0, 1, 0, 0 },
	{ 0, 0, 1, 1, 0, 0, 0, 1, 0 },
	{ 0, 1, 0, 1, 0, 0, 1, 0, 1 },
	{ 1, 1, 0, 1, 1, 1, 0, 1, 1 },
	{ 0, 1, 1, 0, 0, 1, 0, 0, 0 },
	{ 1, 1, 0, 0, 1, 0, 0, 1, 1 },
	{ 0, 0, 1, 0, 1, 1, 0, 1, 1 },
	{ 1, 0, 0, 1, 1, 0, 0, 1, 0 },
	{ 0, 1, 1, 0, 1, 0, 1, 0, 0 },
	{ 1, 1, 0, 1, 0, 1, 0, 1, 1 },
	{ 1, 1, 0, 0, 1, 0, 0, 1, 1 },
	{ 1, 1, 0, 1, 1, 0, 1, 0, 0 },
	{ 1, 1, 0, 1, 1, 1, 0, 1, 1 },
	{ 0, 1, 0, 1, 0, 0, 1, 0, 1 },
	{ 0, 0, 1, 1, 0, 0, 0, 1, 0 },
	{ 0, 1, 1, 0, 0, 1, 0, 0, 0 },
	{ 0, 1, 1, 0, 1, 0, 1, 0, 0 },
	{ 0, 0, 1, 0, 1, 1, 0, 1, 1 },
	{ 1, 0, 0, 1, 1, 0, 0, 1, 0 }
	};

	int teta = 0;
	int point = 0;
	bool end_flag = false;
	bool func_check = false;
	int weight = 0;

	int temp_mass[COLUMN];
	
	cout << "Введите Тэту: "; cin >> teta; cout << endl;

	check:
	for(point = 0; point < LINE; point++) {
		for (int i = 0; i < COLUMN; i++) {
			weight += MAIN_SELECTOIN[point][i] * omega[i];
			temp_mass[i] = MAIN_SELECTOIN[point][i];
		}

		int count = 0;
		for (int i = 0; i < COLUMN; i++) {
			if (temp_mass[i] == N6[i]) { count++; }
		}
		if (count == 9) { func_check = true; }
		else { func_check = false; }
		
		//cout <<"Необходимое число: " << func_check << endl;

		if (weight > teta and func_check == true) {
			end_flag = true;
		}
		else if (weight <= teta and func_check == true) {
			ADD(omega, temp_mass);
			end_flag = false;
			/**for (int i = 0; i < COLUMN; i++) {
				cout << omega[i] << " ";
			}
			cout << endl;*/
		}
		else if (weight > teta and func_check == false) {
			SUB(omega, temp_mass);
			end_flag = false;
			/*
			for (int i = 0; i < COLUMN; i++) {
				cout << omega[i] << " ";
			}
			cout << endl;*/
		}
		//cout << "Шаг: " << point << endl;
		//cout << "Флаг: " << end_flag << endl;
		//cout << "Вес: " << weight << endl;
		weight = 0;
		//cout << endl;
	}
	if (end_flag == true) {
		cout << "Нейрон обучился" << endl;
		cout << "Омега: | ";
		for (int i = 0; i < COLUMN; i++) {
			cout << omega[i] << " | ";
		}
		cout << endl;
	}
	else if (end_flag == false) {
		goto check;
	}
}