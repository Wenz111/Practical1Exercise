#include <Windows.h>
#include <gl/GL.h>
#include <math.h>

#pragma comment (lib, "OpenGL32.lib")

#define WINDOW_TITLE "Practical 1 Exercise"

int question;

void drawPahangFlag() {
	glClearColor(1.0f, 228.0 / 255.0f, 204.0 / 255.0f, 0.9f);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);

	// Flag White Part
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.5f, 0.1f);    // x, y
	glVertex2f(0.5f, 0.1f);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(-0.5f, 0.5f);

	// Flag Black Part
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.5f, -0.3f);    // x, y
	glVertex2f(0.5f, -0.3f);
	glVertex2f(0.5f, 0.1f);
	glVertex2f(-0.5f, 0.1f);
	glEnd();
}

void drawNegeriSembilangFlag() {
	glClearColor(1.0f, 228.0 / 255.0f, 204.0 / 255.0f, 0.9f);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
	// Flag Yellow Part
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.5f, 0.2f);    // x, y
	glVertex2f(0.6f, 0.2f);
	glVertex2f(0.6f, 0.8f);
	glVertex2f(-0.5f, 0.8f);
	glEnd();

	glBegin(GL_TRIANGLES);
	// Flag Black Part
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.5f, 0.5f);    // x, y
	glVertex2f(0.0f, 0.5f);
	glVertex2f(-0.5f, 0.8f);
	glEnd();

	glBegin(GL_TRIANGLES);
	// Flag Red Part
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.5f);    // x, y
	glVertex2f(0.0f, 0.8f);
	glVertex2f(-0.5f, 0.8f);
	glEnd();
}

void drawEnglandFlag() {
	glClearColor(1.0f, 228.0 / 255.0f, 204.0 / 255.0f, 0.9f);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
	// Flag Grey - White Part
	glColor3f(199.0 / 255.0f, 199.0 / 255.0f, 199.0 / 255.0f);
	glVertex2f(-0.8f, 0.5f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-0.8f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	// Flag Grey - White Part
	glColor3f(199.0 / 255.0f, 199.0 / 255.0f, 199.0 / 255.0f);
	glVertex2f(0.8f, 0.5f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.8f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	// Flag Grey - White Part
	glColor3f(199.0 / 255.0f, 199.0 / 255.0f, 199.0 / 255.0f);
	glVertex2f(0.8f, -0.5f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.5f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.8f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	// Flag Grey - White Part
	glColor3f(199.0 / 255.0f, 199.0 / 255.0f, 199.0 / 255.0f);
	glVertex2f(-0.8f, -0.5f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.5f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-0.8f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	// Flag Red Part - Horizontal
	glColor3f(129.0 / 255.0f, 1.0 / 255.0f, 1.0 / 255.0f);
	glVertex2f(-0.8f, -0.1f);
	glVertex2f(0.8f, -0.1f);
	glVertex2f(0.8f, 0.1f);
	glVertex2f(-0.8f, 0.1f);
	glEnd();

	glBegin(GL_QUADS);
	// Flag Red Part - Vertical
	glColor3f(129.0 / 255.0f, 1.0 / 255.0f, 1.0 / 255.0f);
	glVertex2f(-0.1f, -0.5f);
	glVertex2f(0.1f, -0.5f);
	glVertex2f(0.1f, 0.5f);
	glVertex2f(-0.1f, 0.5f);
	glEnd();
}

void drawScotlandFlag() {
	glClearColor(1.0f, 228.0 / 255.0f, 204.0 / 255.0f, 0.9f);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
	// Flag White Part
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.5f);
	glVertex2f(0.8f, -0.5f);
	glVertex2f(0.8f, 0.5f);
	glVertex2f(-0.8f, 0.5f);
	glEnd();

	//glColor3f(0.0f, 101.0 / 255.0f, 189.0 / 255.0f);
	glBegin(GL_TRIANGLES);
	// Flag Upper Blue Part
	glColor3f(0.0f, 101.0 / 255.0f, 189.0 / 255.0f);
	glVertex2f(-0.65f, 0.5f);
	glVertex2f(0.0f, 0.1f);
	glVertex2f(0.65f, 0.5f);
	glEnd();

	glBegin(GL_TRIANGLES);
	// Flag Lower Blue Part
	glColor3f(0.0f, 101.0 / 255.0f, 189.0 / 255.0f);
	glVertex2f(0.65f, -0.5f);
	glVertex2f(0.0f, -0.1f);
	glVertex2f(-0.65f, -0.5f);
	glEnd();

	glBegin(GL_TRIANGLES);
	// Flag Left Blue Part
	glColor3f(0.0f, 101.0 / 255.0f, 189.0 / 255.0f);
	glVertex2f(-0.8f, 0.4f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.8f, -0.4f);
	glEnd();

	glBegin(GL_TRIANGLES);
	// Flag Right Blue Part
	glColor3f(0.0f, 101.0 / 255.0f, 189.0 / 255.0f);
	glVertex2f(0.8f, -0.4f);
	glVertex2f(0.2f, 0.0f);
	glVertex2f(0.8f, 0.4f);
	glEnd();
}

void drawJapanFlag() {
	glClearColor(1.0f, 228.0 / 255.0f, 204.0 / 255.0f, 0.9f);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.5f, 0.3f);
	glVertex2f(-0.5f, 0.3f);
	glVertex2f(-0.5f, -0.3f);
	glVertex2f(0.5f, -0.3f);
	glEnd();

	float x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0;
	float angle = 0.0;
	float radius = 0.2;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);

	for (angle = 0; angle <= 360; angle += 0.2) {
		x2 = x1 + cos(angle) * radius;
		y2 = y1 + sin(angle) * radius;
		glVertex2f(x2, y2);
	}
	glEnd();
}

void drawPikachuFace() {
	glClearColor(1.0f, 228.0 / 255.0f, 204.0 / 255.0f, 0.9f);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
	// Grey Box
	glColor3f(79.0 / 255.0f, 79.0 / 255.0f, 79.0 / 255.0f);
	glVertex2f(-0.8f, -0.8f);
	glVertex2f(0.8f, -0.8f);
	glVertex2f(0.8f, 0.8f);
	glVertex2f(-0.8f, 0.8f);
	glEnd();

	// Pikachu Round Face
	float x1 = 0.0, y1 = -0.3, x2 = 0.0, y2 = 0.0;
	float angle = 0.0;
	float radius = 0.4;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(253.0 / 255.0f, 215.0 / 255.0f, 36.0 / 255.0f);
	glVertex2f(0.0f, 0.0f);

	for (angle = 0; angle <= 360; angle += 0.2) {
		x2 = x1 + cos(angle) * radius;
		y2 = y1 + sin(angle) * radius;
		glVertex2f(x2, y2);
	}
	glEnd();

	//// Pikachu Left Yellow Face
	//float x5 = -0.3, y5 = -0.5, x6 = 0.0, y6 = 0.0;
	//float angle2 = 0.0;
	//float radius2 = 0.13;

	//glBegin(GL_TRIANGLE_FAN);
	//glColor3f(253.0 / 255.0f, 215.0 / 255.0f, 36.0 / 255.0f);
	//glVertex2f(x5, y5);

	//for (angle2 = 0; angle2 <= 360; angle2 += 0.2) {
	//	x6 = x5 + cos(angle2) * radius2;
	//	y6 = y5 + sin(angle2) * radius2;
	//	glVertex2f(x6, y6);
	//}
	//glEnd();

	// Pikachu Left Red Face
	float x3 = -0.3, y3 = -0.5, x4 = 0.0, y4 = 0.0;
	float angle1 = 0.0;
	float radius1 = 0.13;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(233.0 / 255.0f, 79.0 / 255.0f, 36.0 / 255.0f);
	glVertex2f(x3, y3);

	for (angle1 = 0; angle1 <= 360; angle1 += 0.2) {
		x4 = x3 + cos(angle1) * radius1;
		y4 = y3 + sin(angle1) * radius1;
		glVertex2f(x4, y4);
	}
	glEnd();

	// Pikachu Right Red Face
	float x5 = 0.3, y5 = -0.5, x6 = 0.0, y6 = 0.0;
	float angle2 = 0.0;
	float radius2 = 0.13;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(233.0 / 255.0f, 79.0 / 255.0f, 36.0 / 255.0f);
	glVertex2f(x5, y5);

	for (angle2 = 0; angle2 <= 360; angle2 += 0.2) {
		x6 = x5 + cos(angle2) * radius2;
		y6 = y5 + sin(angle2) * radius2;
		glVertex2f(x6, y6);
	}
	glEnd();

	// Pikachu Left Black Eye
	float x1reye = -0.18, y1reye = -0.2, x2reye = 0.0, y2reye = 0.0;
	float anglereye = 0.0;
	float radiusreye = 0.1;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(x1reye, y1reye);

	for (anglereye = 0; anglereye <= 360; anglereye += 0.2) {
		x2reye = x1reye + cos(anglereye) * radiusreye;
		y2reye = y1reye + sin(anglereye) * radiusreye;
		glVertex2f(x2reye, y2reye);
	}
	glEnd();

	// Pikachu Left Outer White Eye
	float x1obeye = -0.20, y1obeye = -0.18, x2obeye = 0.0, y2obeye = 0.0;
	float angleobeye = 0.0;
	float radiusobeye = 0.045;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(x1obeye, y1obeye);

	for (angleobeye = 0; angleobeye <= 360; angleobeye += 0.2) {
		x2obeye = x1obeye + cos(angleobeye) * radiusobeye;
		y2obeye = y1obeye + sin(angleobeye) * radiusobeye;
		glVertex2f(x2obeye, y2obeye);
	}
	glEnd();

	// Pikachu Left Inner White Eye
	float x1ibeye = -0.188, y1ibeye = -0.26, x2ibeye = 0.0, y2ibeye = 0.0;
	float angleibeye = 0.0;
	float radiusibeye = 0.015;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(x1ibeye, y1ibeye);

	for (angleibeye = 0; angleibeye <= 360; angleibeye += 0.2) {
		x2ibeye = x1ibeye + cos(angleibeye) * radiusibeye;
		y2ibeye = y1ibeye + sin(angleibeye) * radiusibeye;
		glVertex2f(x2ibeye, y2ibeye);
	}
	glEnd();

	// Pikachu Right Black Eye
	float x1leye = 0.18, y1leye = -0.2, x2leye = 0.0, y2leye = 0.0;
	float angleleye = 0.0;
	float radiusleye = 0.1;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(x1leye, y1leye);

	for (angleleye = 0; angleleye <= 360; angleleye += 0.2) {
		x2leye = x1leye + cos(angleleye) * radiusleye;
		y2leye = y1leye + sin(angleleye) * radiusleye;
		glVertex2f(x2leye, y2leye);
	}
	glEnd();

	// Pikachu Right Outer White Eye
	float x1obreye = 0.16, y1obreye = -0.18, x2obreye = 0.0, y2obreye = 0.0;
	float angleobreye = 0.0;
	float radiusobreye = 0.045;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(x1obreye, y1obreye);

	for (angleobreye = 0; angleobreye <= 360; angleobreye += 0.2) {
		x2obreye = x1obreye + cos(angleobreye) * radiusobreye;
		y2obreye = y1obreye + sin(angleobreye) * radiusobreye;
		glVertex2f(x2obreye, y2obreye);
	}
	glEnd();

	// Pikachu Right Inner White Eye
	float x1rbeye = 0.155, y1rbeye = -0.26, x2rbeye = 0.0, y2rbeye = 0.0;
	float anglerbeye = 0.0;
	float radiusrbeye = 0.015;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(x1rbeye, y1rbeye);

	for (anglerbeye = 0; anglerbeye <= 360; anglerbeye += 0.2) {
		x2rbeye = x1rbeye + cos(anglerbeye) * radiusrbeye;
		y2rbeye = y1rbeye + sin(anglerbeye) * radiusrbeye;
		glVertex2f(x2rbeye, y2rbeye);
	}
	glEnd();

	// Pikachu's Nose
	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, -0.45f);
	glVertex2f(0.06f, -0.38f);
	glVertex2f(-0.06f, -0.38f);
	glEnd();

	// Pikachu's Mouth
	glLineWidth(4);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.12f, -0.5f);
	glVertex2f(-0.05f, -0.55f);
	glVertex2f(0.0f, -0.5f);
	glVertex2f(0.05f, -0.55f);
	glVertex2f(0.12f, -0.5f);
	glEnd();
	glLineWidth(1);

	// Pikachu Left Yellow Ear
	// x1lear = -0.35 to move the ear outer a little bit
	float x1lear = -0.3, y1lear = 0.0, x2lear = 0.0, y2lear = 0.0;
	float anglelear = 0.0;
	float radiuslear = 0.13;

	//glVertex2f(-0.65, 0.45);

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(253.0 / 255.0f, 215.0 / 255.0f, 36.0 / 255.0f);
	glVertex2f(-0.65, 0.45);

	for (anglelear = 0; anglelear <= 360; anglelear += 0.2) {
		x2lear = x1lear + cos(anglelear) * radiuslear;
		y2lear = y1lear + sin(anglelear) * radiuslear;
		glVertex2f(x2lear, y2lear);
	}
	glEnd();

	// Pikachu's Left Top Black Ear
	glBegin(GL_POLYGON);
	glColor3f(34.0 / 255.0f, 30.0 / 255.0f, 28.0 / 255.0f);
	glVertex2f(-0.45f, 0.3f);
	glVertex2f(-0.58f, 0.4f);
	glVertex2f(-0.65f, 0.45f);
	glVertex2f(-0.55f, 0.2f);
	glEnd();

	// Pikachu Right Yellow Ear
	// x1rear = -0.35 to move the ear outer a little bit
	float x1rear = 0.3, y1rear = 0.0, x2rear = 0.0, y2rear = 0.0;
	float anglerear = 0.0;
	float radiusrear = 0.13;

	//glVertex2f(-0.65, 0.45);

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(253.0 / 255.0f, 215.0 / 255.0f, 36.0 / 255.0f);
	glVertex2f(0.65, 0.45);

	for (anglerear = 0; anglerear <= 360; anglerear += 0.2) {
		x2rear = x1rear + cos(anglerear) * radiusrear;
		y2rear = y1rear + sin(anglerear) * radiusrear;
		glVertex2f(x2rear, y2rear);
	}
	glEnd();

	// Pikachu's Right Top Black Ear
	glBegin(GL_POLYGON);
	glColor3f(34.0 / 255.0f, 30.0 / 255.0f, 28.0 / 255.0f);
	glVertex2f(0.45f, 0.3f);
	glVertex2f(0.58f, 0.4f);
	glVertex2f(0.65f, 0.45f);
	glVertex2f(0.55f, 0.2f);
	glEnd();
}

LRESULT WINAPI WindowProcedure(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
		break;

	case WM_KEYDOWN:
		if (wParam == VK_ESCAPE) {
			PostQuitMessage(0);
			break;
		}
		if (wParam == 0x31) {
			question = 1;
			break;
		}
		if (wParam == 0x32) {
			question = 2;
			break;
		}
		if (wParam == 0x33) {
			question = 3;
			break;
		}
		if (wParam == 0x34) {
			question = 4;
			break;
		}
		if (wParam == 0x35) {
			question = 5;
			break;
		}
		if (wParam == 0x36) {
			question = 6;
			break;
		}
	default:
		break;
	}

	return DefWindowProc(hWnd, msg, wParam, lParam);
}
//--------------------------------------------------------------------

bool initPixelFormat(HDC hdc)
{
	PIXELFORMATDESCRIPTOR pfd;
	ZeroMemory(&pfd, sizeof(PIXELFORMATDESCRIPTOR));

	pfd.cAlphaBits = 8;
	pfd.cColorBits = 32;
	pfd.cDepthBits = 24;
	pfd.cStencilBits = 0;

	pfd.dwFlags = PFD_DOUBLEBUFFER | PFD_SUPPORT_OPENGL | PFD_DRAW_TO_WINDOW;

	pfd.iLayerType = PFD_MAIN_PLANE;
	pfd.iPixelType = PFD_TYPE_RGBA;
	pfd.nSize = sizeof(PIXELFORMATDESCRIPTOR);
	pfd.nVersion = 1;

	// choose pixel format returns the number most similar pixel format available
	int n = ChoosePixelFormat(hdc, &pfd);

	// set pixel format returns whether it sucessfully set the pixel format
	if (SetPixelFormat(hdc, n, &pfd))
	{
		return true;
	}
	else
	{
		return false;
	}
}
//--------------------------------------------------------------------

void display()
{
	//--------------------------------
	//	OpenGL drawing
	//--------------------------------

	//switch (question)
	//{
	//case 1:
	//	drawPahangFlag();
	//	break;
	//case 2:
	//	drawNegeriSembilangFlag();
	//	break;
	//case 3:
	//	drawEnglandFlag();
	//	break;
	//case 4:
	//	drawScotlandFlag();
	//	break;
	//case 5:
	//	drawJapanFlag();
	//	break;
	//case 6:
	//	drawPikachuFace();
	//	break;
	//default:
	//	break;
	//}

	glClearColor(1.0f, 228.0 / 255.0f, 204.0 / 255.0f, 0.9f);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
	// Grey Box
	glColor3f(79.0 / 255.0f, 79.0 / 255.0f, 79.0 / 255.0f);
	glVertex2f(-0.8f, -0.8f);
	glVertex2f(0.8f, -0.8f);
	glVertex2f(0.8f, 0.8f);
	glVertex2f(-0.8f, 0.8f);
	glEnd();

	glBegin(GL_QUADS);
	// Write Pikachu
	glColor3f(79.0 / 255.0f, 79.0 / 255.0f, 79.0 / 255.0f);
	glVertex2f(-0.8f, -0.8f);
	glVertex2f(0.8f, -0.8f);
	glVertex2f(0.8f, 0.8f);
	glVertex2f(-0.8f, 0.8f);
	glEnd();

	//--------------------------------
	//	End of OpenGL drawing
	//--------------------------------
}
//--------------------------------------------------------------------

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE, LPSTR, int nCmdShow)
{
	WNDCLASSEX wc;
	ZeroMemory(&wc, sizeof(WNDCLASSEX));

	wc.cbSize = sizeof(WNDCLASSEX);
	wc.hInstance = GetModuleHandle(NULL);
	wc.lpfnWndProc = WindowProcedure;
	wc.lpszClassName = WINDOW_TITLE;
	wc.style = CS_HREDRAW | CS_VREDRAW;

	if (!RegisterClassEx(&wc)) return false;

	HWND hWnd = CreateWindow(WINDOW_TITLE, WINDOW_TITLE, WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT, 400, 400,
		NULL, NULL, wc.hInstance, NULL);

	//--------------------------------
	//	Initialize window for OpenGL
	//--------------------------------

	HDC hdc = GetDC(hWnd);

	//	initialize pixel format for the window
	initPixelFormat(hdc);

	//	get an openGL context
	HGLRC hglrc = wglCreateContext(hdc);

	//	make context current
	if (!wglMakeCurrent(hdc, hglrc)) return false;

	//--------------------------------
	//	End initialization
	//--------------------------------

	ShowWindow(hWnd, nCmdShow);

	MSG msg;
	ZeroMemory(&msg, sizeof(msg));

	while (true)
	{
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			if (msg.message == WM_QUIT) break;

			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}

		display();

		SwapBuffers(hdc);
	}

	UnregisterClass(WINDOW_TITLE, wc.hInstance);

	return true;
}
//--------------------------------------------------------------------