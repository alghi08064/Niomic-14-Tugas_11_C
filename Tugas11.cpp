#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}


int luas_segitiga(int a,int t) {
	int luas;
	luas = (a*t)/2;
	setcolor(3);
	cout<<"Luas Segitiga Adalah: "<<luas;
	return 0;
	}

int main()
{
	int x, y;
    setcolor(5);
	cout<<"Inputkan alas segitiga: ";
	cin>>x;
	cout<<"Inputkan tinggi segitiga: ";
	cin>>y;
	luas_segitiga(x,y);
	return 0;
}
	

