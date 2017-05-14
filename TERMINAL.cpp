#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include <windows.h> 

using namespace std;

int main() {
	system("color 0A");
	setlocale(LC_ALL, "RUSSIAN");
	int time = 200;
	cout << "  ##      ##  ########          ##            #########" << endl; Sleep(time);
	cout << "  ##      ##  ##      ##      ##  ##          ##      ##" << endl; Sleep(time);
	cout << "    ##  ##    ##      ##      ##  ##          ##      ##" << endl; Sleep(time);
	cout << "    ##  ##    ##      ##      ##  ##          ##      ##" << endl; Sleep(time);
	cout << "      ####    ########       ##    ##         ##      ##" << endl; Sleep(time);
	cout << "      ##      ##            ##########        ##      ##" << endl; Sleep(time);
	cout << "      ##      ##           ##         ##      ##      ##" << endl; Sleep(time);
	cout << "  ####        ##          ##           ##   ##        ##" << endl; Sleep(time);
	cout << "                                                         " << endl; Sleep(time);
	cout << "##        ##        ##     ##########        #########" << endl; Sleep(time);
	cout << "##      ##  ##      ##     ##                ##        ##" << endl; Sleep(time);
	cout << "  ##    ##  ##    ##       ##                ##        ##" << endl; Sleep(time);
	cout << "  ##    ##  ##    ##       ##########        ##########" << endl; Sleep(time);
	cout << "  ##  ##      ##  ##       ##                ##        ##" << endl; Sleep(time);
	cout << "  ##  ##      ##  ##       ##                ##        ##" << endl; Sleep(time);
	cout << "    ##          ##         ##                ##        ##" << endl; Sleep(time);
	cout << "    ##          ##         ##########        ##########" << endl; Sleep(time);
	Sleep(1000);
	system("cls");
	int n;
	int num_attempts = 4;
	string your_attempt = " ";
	int y;

	cout << "УРАЛ WEB INDUSTRIES (™) TERMLINK PROTOCOL" << endl;
	Sleep(time);
	cout << "ВВЕДИТЕ ПАРОЛЬ" << endl;


	cout << endl;
	cout << " Осталось попыток: ";
	for (n = 0; n<num_attempts; n++) {
		cout << "*";
	} cout << endl;
	cout << endl;
	cout << "0xF4F0 VIRAL 0xF5BC MINES" << endl; Sleep(time);
	cout << "0cF4FC DARED 0xF5C8 LIKES" << endl; Sleep(time);
	cout << "0xF508 WIRES 0xF5D4 PARTS" << endl; Sleep(time);
	cout << "0xF514 LINES 0xF5E0 HAREM" << endl; Sleep(time);
	cout << "0xF520 LIVES 0xF5EC LINED" << endl; Sleep(time);
	cout << "0xF52C SORTS 0xF5F8 WARNS" << endl; Sleep(time);
	cout << "0xF538 AGREE 0xF604 THREW" << endl; Sleep(time);
	cout << "0xF544 FARMS 0xF610 SIDES" << endl; Sleep(time);

	do {
		if (num_attempts > 0) {
			cout << " > ";
			cin >> your_attempt;
			if (your_attempt != "AGREE") {
				if (your_attempt == "VIRAL" || your_attempt == "LINES" || your_attempt == "LIVES" || your_attempt == "SORTS" || your_attempt == "FARMS" || your_attempt == "MINES" || your_attempt == "LIKES" || your_attempt == "PARTS" || your_attempt == "LINED" || your_attempt == "WARNS" || your_attempt == "SIDES") {
					cout << "Неверно! " << "1/5 Верных символов" << endl;
				}
				else { cout << "Неверно! " << "2/5 Верных символов" << endl; }
			}
		}
		num_attempts = num_attempts - 1;
		cout << " Осталось попыток: ";
		for (n = 0; n<num_attempts; n++) {
			cout << "*";
		} cout << endl;
	} while (your_attempt != "AGREE" && num_attempts != 0);

	if (your_attempt == "AGREE") {
		cout << "     Терминал взломан!"; 
		Sleep(3000);
		system("cls");
		cout<<"     Смотритель терминала\n     Морозов Олег Иванович \n     Участник разработки РК <ТОПОЛЬ> и <ВОЕВОДА>\n     Инженер-программист\n     Контактные данные: +7(904)804-57-71" << endl; Sleep(time);
		cout << "     СТАТУС: НА СВЯЗИ(ТОЛЬКО СООБЩЕНИЯ)" << endl;
		system("pause");
	}
	else {
		cout << "Вы временно заблокированы! Обратитесь к администратору!" << endl;
	}

	return 0;
}
