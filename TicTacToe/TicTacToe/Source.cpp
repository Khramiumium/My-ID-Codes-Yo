#include<iostream>
#include<Windows.h>
using namespace std;

void display(char b[]);
void play(char b[], char turn);
//original code DO NOT STEAL XP
int main(){
	// Turn Cycle Thing
	int x, y(0);

	// Char
	char b[] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' }, turn = 'x';

	// Numpad Please~
	cout << "It is recomended to use a numpad!" << endl;
	//Run Void Display
	display(b);


	//Make the thing do the thing, yeah.
	do{
		play(b, turn);
		display(b);


		// Switch To O
		if (turn == 'x')
		{
			turn = 'o';
		}
		// Switch to x
		//		if (turn = 'o')
		//			turn = 'x';

		// Switch turn back to x
		else
		{
			turn = 'x';
		}

		//win stuff check

		//
		y++;
	} while (y<100);





	return 0;
}

//The Board
void display(char b[]){
	//Numpad Friendly
	cout << b[6] << " " << b[7] << " " << b[8] << endl;
	cout << b[3] << " " << b[4] << " " << b[5] << endl;
	cout << b[0] << " " << b[1] << " " << b[2] << endl;
}

// How Turn Works
// Just choose number and WIN
//system("CLS") = Clear Screen

void play(char b[], char turn){
	int pos;
	cin >> pos;

	 if (pos == 0)
		{
			//The UGLIEST reset code, EVAR
			system("CLS");
			b[0] = '1';
			b[1] = '2';
			b[2] = '3';
			b[3] = '4';
			b[4] = '5';
			b[5] = '6';
			b[6] = '7';
			b[7] = '8';
			b[8] = '9';
			turn = 'x';
			display(b);
			play(b, turn);
			
		}

	 // Trying to cheat!! (or a wrong button was pushed..)
	else if (b[pos - 1] == 'x' || b[pos - 1] == 'o')
	{
		system("CLS");
		cout << "BAD INPUT" << endl;
		Sleep(900);
		system("CLS");
		cout << "Press 0 to restart the game whenever." << endl;
		display(b);
		play(b, turn);
	}
	 // no 6000000012
	else if (b[pos - 1] < 9)
	{
		system("CLS");
		cout << "BAD INPUT" << endl;
		Sleep(900);
		system("CLS");
		cout << "Press 0 to restart the game whenever." << endl;
		display(b);
		play(b, turn);
	}

	 // All Going Normal
	else
	{
		b[pos - 1] = turn;
		system("CLS");
		cout << "Press 0 to restart the game whenever." << endl;
	}
}