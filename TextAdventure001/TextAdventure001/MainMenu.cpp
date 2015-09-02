
#include"MainMenu.h"


	MainMenu::MainMenu() {
		cout << "TBA Title Intro.\n";
		MenuOptions();
	}
	void MainMenu::MenuOptions() {
		cout << "N. New Game\t";
		cout << "L. Load Gane\t";
		cout << "Q. Quit";
		cin >> c;
		MenuChoice();
	}
	void MainMenu::MenuChoice() {
		toupper(c);
		switch(c)
		{
			case 'L':
				MenuLoad();
				break;
			case 'N':
				MenuNew();
				break;
			case 'Q':
				exit(0);
				break;
		}
	}
