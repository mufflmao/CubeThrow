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

int PCPoint = 0, PlayerPoints = 0, PCDrop = 0, PlayerDrop = 0, drop = 0;

void PCThrow()
{
	cout << "Бросок компьютера: (кубик 1) " << endl;
	PCDrop = rand() % 6 + 1;
	if (PCDrop == 1)
	{
		PCPoint += 1;
		cout << "*******" << endl;
		cout << "*     *" << endl;
		cout << "*  .  *" << endl;
		cout << "*     *" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 2)
	{
		PCPoint += 2;
		cout << "*******" << endl;
		cout << "*  .  *" << endl;
		cout << "*     *" << endl;
		cout << "*  .  *" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 3)
	{
		PCPoint += 3;
		cout << "*******" << endl;
		cout << "*  .  *" << endl;
		cout << "*  .  *" << endl;
		cout << "*  .  *" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 4)
	{
		PCPoint += 4;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*     *" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 5)
	{
		PCPoint += 5;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*  .  *" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 6)
	{
		PCPoint += 6;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*.   .*" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	cout << PCDrop << endl;
	cout << PCPoint << endl;
	cout << "Бросок компьютера: (кубик 2) " << endl;
	PCDrop = rand() % 6 + 1;
	if (PCDrop == 1)
	{
		PCPoint += 1;
		cout << "*******" << endl;
		cout << "*     *" << endl;
		cout << "*  .  *" << endl;
		cout << "*     *" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 2)
	{
		PCPoint += 2;
		cout << "*******" << endl;
		cout << "*  .  *" << endl;
		cout << "*     *" << endl;
		cout << "*  .  *" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 3)
	{
		PCPoint += 3;
		cout << "*******" << endl;
		cout << "*  .  *" << endl;
		cout << "*  .  *" << endl;
		cout << "*  .  *" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 4)
	{
		PCPoint += 4;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*     *" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 5)
	{
		PCPoint += 5;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*  .  *" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 6)
	{
		PCPoint += 6;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*.   .*" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	cout << PCDrop << endl;
	cout << PCPoint << endl;
}
void PlayerThrow()
{
	cout << "Ваш первый бросок: (кубик 1) " << endl;
	PlayerDrop = rand() % 6 + 1;
	if (PlayerDrop == 1)
	{
		PlayerPoints += 1;
		cout << "*******" << endl;
		cout << "*     *" << endl;
		cout << "*  .  *" << endl;
		cout << "*     *" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 2)
	{
		PlayerPoints += 2;
		cout << "*******" << endl;
		cout << "*  .  *" << endl;
		cout << "*     *" << endl;
		cout << "*  .  *" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 3)
	{
		PlayerPoints += 3;
		cout << "*******" << endl;
		cout << "*  .  *" << endl;
		cout << "*  .  *" << endl;
		cout << "*  .  *" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 4)
	{
		PlayerPoints += 4;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*     *" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 5)
	{
		PlayerPoints += 5;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*  .  *" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 6)
	{
		PlayerPoints += 6;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*.   .*" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	cout << PlayerDrop << endl;
	cout << PlayerPoints << endl;
	cout << "Ваш первый бросок: (кубик 2) " << endl;
	PlayerDrop = rand() % 6 + 1;
	if (PlayerDrop == 1)
	{
		PlayerPoints += 1;
		cout << "*******" << endl;
		cout << "*     *" << endl;
		cout << "*  .  *" << endl;
		cout << "*     *" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 2)
	{
		PlayerPoints += 2;
		cout << "*******" << endl;
		cout << "*  .  *" << endl;
		cout << "*     *" << endl;
		cout << "*  .  *" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 3)
	{
		PlayerPoints += 3;
		cout << "*******" << endl;
		cout << "*  .  *" << endl;
		cout << "*  .  *" << endl;
		cout << "*  .  *" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 4)
	{
		PlayerPoints += 4;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*     *" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 5)
	{
		PlayerPoints += 5;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*  .  *" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 6)
	{
		PlayerPoints += 6;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*.   .*" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	cout << PlayerDrop << endl;
	cout << PlayerPoints << endl;
}
void WinCheck()
{
	if (PlayerPoints > PCPoint)
	{
		cout << "Поздравляю, вы победили бога рандома!" << endl;
	}
	if (PlayerPoints < PCPoint)
	{
		cout << "К сожалению, вы проиграли богу рандома!" << endl;
	}
	if (PlayerPoints == PCPoint)
	{
		cout << "Ничья! Вы теперь брат бога рандома! :D" << endl;
	}
}

int main()
{

	setlocale(LC_ALL, "Russian");
	string PlayerName;
	cout << "Добро пожаловать, дорогой игрок! Введи свое имя: ";
	cin >> PlayerName;
	cout << "Начинаем игру!" << endl;
	Queue();

	if (PlayerIsFirst == 1)
	{
		PlayerThrow();
		PCThrow();
		PlayerThrow();
		PCThrow();
		PlayerThrow();
		PCThrow();
		PlayerThrow();
		PCThrow();
	}
	else
	{
		PCThrow();
		PlayerThrow();
		PCThrow();
		PlayerThrow();
		PCThrow();
		PlayerThrow();
		PCThrow();
		PlayerThrow();
	}
	cout << "Итог невероятной битвы:\nВаши очки: " << PlayerPoints << endl;
	cout << "Очки компьютера: " << PCPoint << endl;
	WinCheck();
}
