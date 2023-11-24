#include <iostream>
#include <stack>
using namespace std;
class Point
{
	int x;
	int y;
public:
	Point() { x = y = 0; }
	Point(int x, int y) { this->x = x; this->y = y; }

	int getX()const { return x; }
	int getY()const { return y; }

	void show()const {
		cout << "[" << x << ", " << y << "]" << endl;
	}
};

int main()
{
	const int row = 6;
	const int col = 10;
	const char* maze[row] = { "0000000000",
							  "0s000    0" 
							  "0 0 0 00 0" 
							  "0     00 0"
							  "00000000x0"
							  "0000000000"
	};

	stack<Point> way;
	int i = 1;
	int j = 1;
	while (maze[i][j] != 'x')
	{
		/*way.push(Point(i, j));*/
		cout << i << " " << j << endl;
		if (i + 1 != 0) {
			way.push(Point(++i, j));
		}
		else if (j + 1 != 0) {
			way.push(Point(i, ++j));
		}
		else if (j + 1 == 0) {
			if (i+1 != 0){
				i++;
			}
			else if (i - 1 != 0) {
				i--;
			}
		}
		else if (i + 1 == 0) {
			if (j + 1 != 0) {
				j++;
			}
			else if (j - 1 != 0) {
				j--;
			}
		}
	}
}