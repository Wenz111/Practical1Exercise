#include <Windows.h>
#include <gl/GL.h>

#pragma comment (lib, "OpenGL32.lib")

#define WINDOW_TITLE "Demo"


LRESULT WINAPI WindowProcedure(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
		break;

	case WM_KEYDOWN:
		if (wParam == VK_ESCAPE) PostQuitMessage(0);
		break;

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

	glClearColor(1.0f, 228.0/255.0f, 204.0/255.0f, 0.9f);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
	// Grey Box
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