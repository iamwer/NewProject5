#include <iostream>
#include <conio.h>
using std::cout;
using std::endl;



int main()
{
	int x, y;
	char move;
	x = y = 0;
	bool work = true;

	while (work)
	{
		move = _getch();
		switch (move)
		{
		case 72: 
			y += 1;
			break;
		case 80:
			y -= 1;
			break;
		case 75:
			x -= 1;
			break;
		case 77:
			x += 1;
			break;
		case 'q':
			work = false;
			break;
		default:
			break;
		}
		cout << "x: " << x << " y: " << y << endl;

	}


	

	
	return 0;

}