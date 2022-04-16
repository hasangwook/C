#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define PI 3.141592

double rad(double degree)
{
	return PI * degree / 180.0;
}
int main(void)
{
	system("color 1a");
	int degree, x, y;
	double radian, result;

	HWND hwnd = GetForegroundWindow();
	HDC hdc = GetWindowDC(hwnd);

	MoveToEx(hdc, 30, 200, 0);
	LineTo(hdc, 500, 200);
	// (30, 200)~(500, 200)까지 x축 출력
	MoveToEx(hdc, 30, 200, 0);
	LineTo(hdc, 30, 0);
	// (30, 200)~(30, 0)까지 y축 출력

	for (degree = 0; degree <= 360; degree++)
	{
		result = sin(rad((double)degree));
		x = degree + 30;
		y = 200 - (int)(100.0 * result);
		SetPixel(hdc, x, y, RGB(255, 0, 0));
		//선으로 삼각함수를 그린게 아니라 여기선 정확히 점을 찍어 표현했다.
	}
	getchar();
	return 0;
}