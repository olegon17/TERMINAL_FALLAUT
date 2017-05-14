#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include <windows.h> 

using namespace std;
int time2 = 20;
int strlen(char *str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}
void slouwrite(char *str)
{
	for (int i = 0; i < strlen(str); i++)
	{
		cout << str[i];
		Sleep(time2);
	}
	cout << endl;
}
int main() {
	system("color 0A");
	setlocale(LC_ALL, "RUSSIAN");
	int time = 100;
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
	slouwrite("УРАЛ WEB INDUSTRIES (™) TERMLINK PROTOCOL");
	Sleep(time);
	slouwrite("ВВЕДИТЕ ПАРОЛЬ");


	cout << endl;
	slouwrite(" Осталось попыток: ");
	for (n = 0; n<num_attempts; n++) {
		cout<<"*";
	} cout << endl;
	cout << endl;
	slouwrite("0xF4F0 VIRAL 0xF5BC MINES" );
	slouwrite("0cF4FC DARED 0xF5C8 LIKES" );
	slouwrite("0xF508 WIRES 0xF5D4 PARTS" );
	slouwrite("0xF514 LINES 0xF5E0 HAREM" );
	slouwrite("0xF520 LIVES 0xF5EC LINED" );
	slouwrite("0xF52C SORTS 0xF5F8 WARNS" );
	slouwrite("0xF538 AGREE 0xF604 THREW" );
	slouwrite("0xF544 FARMS 0xF610 SIDES" );

	do {
		if (num_attempts > 0) {
			cout << " > ";
			cin >> your_attempt;
			if (your_attempt != "AGREE") {
				if (your_attempt == "VIRAL" || your_attempt == "LINES" || your_attempt == "LIVES" || your_attempt == "SORTS" || your_attempt == "FARMS" || your_attempt == "MINES" || your_attempt == "LIKES" || your_attempt == "PARTS" || your_attempt == "LINED" || your_attempt == "WARNS" || your_attempt == "SIDES") {
					slouwrite("Неверно!  ");slouwrite( "1/5 Верных символов");
				}
				else { slouwrite("Неверно!  ");slouwrite( "2/5 Верных символов"); 
				num_attempts = num_attempts - 1;
				slouwrite(" Осталось попыток: ");
				for (n = 0; n<num_attempts; n++) {
					cout<<"*";
				} cout << endl;
				}
			}
		}
		
	} while (your_attempt != "AGREE" && num_attempts != 0);

	if (your_attempt == "AGREE") {
		slouwrite("     Терминал взломан!"); 
		Sleep(3000);
		system("cls");
		slouwrite("     Смотритель терминала"); slouwrite("     Морозов Олег Иванович "); slouwrite("     Участник разработки РК <ТОПОЛЬ> и <ВОЕВОДА>"); slouwrite("     Инженер-программист"); slouwrite("     Контактные данные: +7(904)804-57-71"); Sleep(time);
		slouwrite("     СТАТУС: НА СВЯЗИ(ТОЛЬКО СООБЩЕНИЯ)");
		system("pause");
	}
	else {
		slouwrite("Вы временно заблокированы! Обратитесь к администратору!");
	}

	return 0;
}
