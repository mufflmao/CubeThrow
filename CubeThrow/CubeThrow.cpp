#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int turn = 0, PlayerIsFirst = 0;

void Queue()
{
	srand(time(NULL));
	turn = rand() % 2;
	if (turn == 1)
	{
		PlayerIsFirst = 1;
		cout << "Вы ходите первый!" << endl;
	}
	if (turn == 0)
	{
		PlayerIsFirst = 0;
		cout << "Компьютер ходит первый!" << endl;
	}
}

int PCPoint = 0, PlayerPoints = 0, PCDrop = 0, PlayerDrop = 0;

void FirstThrow()
{
	if (PlayerIsFirst == 0);
	{
		cout << "Первый бросок компьютера: " << endl;
		PCDrop = rand() % 6 + 1;
		if (PCDrop == 1)
		{
			PCPoint += 1;
			cout << "_______" << endl;
			cout << "|     |" << endl;
			cout << "|  .  |" << endl;
			cout << "|     |" << endl;
			cout << "_______" << endl;
		}
		if (PCDrop == 2)
		{
			PCPoint += 2;
			cout << "_______" << endl;
			cout << "|  .  |" << endl;
			cout << "|     |" << endl;
			cout << "|  .  |" << endl;
			cout << "_______" << endl;
		}
		if (PCDrop == 3)
		{
			PCPoint += 3;
			cout << "_______" << endl;
			cout << "|  .  |" << endl;
			cout << "|  .  |" << endl;
			cout << "|  .  |" << endl;
			cout << "_______" << endl;
		}
		if (PCDrop == 4)
		{
			PCPoint += 4;
			cout << "_______" << endl;
			cout << "|.   .|" << endl;
			cout << "|     |" << endl;
			cout << "|.   .|" << endl;
			cout << "_______" << endl;
		}
		if (PCDrop == 5)
		{
			PCPoint += 5;
			cout << "_______" << endl;
			cout << "|.   .|" << endl;
			cout << "|  .  |" << endl;
			cout << "|.   .|" << endl;
			cout << "_______" << endl;
		}
		if (PCDrop == 6)
		{
			PCPoint += 6;
			cout << "_______" << endl;
			cout << "|.   .|" << endl;
			cout << "|.   .|" << endl;
			cout << "|.   .|" << endl;
			cout << "_______" << endl;
		}
	}
	if (PlayerIsFirst == 1);
	{
		cout << "Ваш первый бросок: " << endl;
		PlayerDrop = rand() % 6 + 1;
		if (PlayerDrop == 1)
		{
			PlayerPoints += 1;
			cout << "_______" << endl;
			cout << "|     |" << endl;
			cout << "|  .  |" << endl;
			cout << "|     |" << endl;
			cout << "_______" << endl;
		}
		if (PlayerDrop == 2)
		{
			PlayerPoints += 2;
			cout << "_______" << endl;
			cout << "|  .  |" << endl;
			cout << "|     |" << endl;
			cout << "|  .  |" << endl;
			cout << "_______" << endl;
		}
		if (PlayerDrop == 3)
		{
			PlayerPoints += 3;
			cout << "_______" << endl;
			cout << "|  .  |" << endl;
			cout << "|  .  |" << endl;
			cout << "|  .  |" << endl;
			cout << "_______" << endl;
		}
		if (PlayerDrop == 4)
		{
			PlayerPoints += 4;
			cout << "_______" << endl;
			cout << "|.   .|" << endl;
			cout << "|     |" << endl;
			cout << "|.   .|" << endl;
			cout << "_______" << endl;
		}
		if (PlayerDrop == 5)
		{
			PlayerPoints += 5;
			cout << "_______" << endl;
			cout << "|.   .|" << endl;
			cout << "|  .  |" << endl;
			cout << "|.   .|" << endl;
			cout << "_______" << endl;
		}
		if (PlayerDrop == 6)
		{
			PlayerPoints += 6;
			cout << "_______" << endl;
			cout << "|.   .|" << endl;
			cout << "|.   .|" << endl;
			cout << "|.   .|" << endl;
			cout << "_______" << endl;
		}
	}
}
void SecondThrow()
{

}
void ThirdThrow()
{

}
void FourthThrow()
{

}


int main()
{
	setlocale(LC_ALL, "Russian");
	string PlayerName;
	cout << "Добро пожаловать, дорогой игрок! Введи свое имя: ";
	cin >> PlayerName;
	cout << "Начинаем игру!" << endl;
	Queue();
}
