// LangGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

int points = 0;
char level;
bool game_on = true;
enum mode {main_menu, one, two};
mode current = main_menu;


void levelLayout(string answ, char tar) {
	cout << "Welcome to level one! The correct answer is " << answ << endl;

	int pts = 0;
	char target = tar;
	bool correct = true;

	do {
		char ltr;
			ltr = _getch();
			correct = ltr == target;
			if (correct == true) {
				pts++;
				cout << ltr << " " << pts << endl;
			}

	} while (pts < 4 && correct == true);

	current = main_menu;

}
void levelOne() {
	if (current == one) {
		system("cls");
		levelLayout("w", 'w');
	}
}

void levelTwo() {
	if (current == two) {
		system("cls");
		levelLayout("a", 'a');
	}
}


void chooseLvl(char chosen) {
	
	if (chosen == 's') {
		current = one;
	}
	else if (chosen == 'd') {
		current = two;
	}
}

void menu() {
	if (current == main_menu) {
		system("cls");
		cout << "Choose a level" << endl;
		cout << "s will bring you to one " << endl;
		cout << "d will bring you to two" << endl;

		level = _getch();

		chooseLvl(level);
	}
	
}


int main(){

	while (game_on) {
		menu();
		levelOne();
		levelTwo();
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
