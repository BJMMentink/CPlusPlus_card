#include <iostream>
#include <conio.h>

using namespace std;
enum Value
{
	two = 2,
	three,
	four,
	five,
	six,
	seven,
	eight,
	nine,
	ten,
	jack,
	queen,
	king,
	ace
};
enum Suit
{
	clubs,
	diamonds,
	hearts,
	spades
};
struct Card
{
	enum Value;
	enum Suit;
};
int main()
{


	(void)_getch();
	return 0;
}
