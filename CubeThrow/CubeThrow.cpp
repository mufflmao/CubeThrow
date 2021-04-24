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
	if (turn = 0)
	{
		PlayerIsFirst = 0;
		cout << "Компьютер ходит первый!" << endl;
	}
}

int PCPoint = 0, PlayerPoints = 0, PCGapDrop = 0, PlayerGapDrop = 0;

void FirstCubeThrow()
{

}
void SecondCubeThrow()
{

}

int main()
{


}
