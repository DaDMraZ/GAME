
#include "TXLib.h"
struct Fon
{
  int x;
  int y;
  int w;
  int h;
  HDC image;



 void draw()
    {
      txTransparentBlt (txDC(),x,y,w ,h,image,TX_WHITE);

    }




};
struct Truba
{
  int x;
  int y;
  int w;
  int h;
  HDC image;
  HDC image_up;
  HDC image_down;



 void draw()
    {
      txTransparentBlt (txDC(),x,y,w ,h, image,0,0,TX_WHITE);

    }


};
struct Birsd
{
   int x;
   int y;
   int w;
   int h;
   HDC image;
   HDC image_jump;
   HDC image_fly;




 void draw()
    {
      txTransparentBlt (txDC(),x,y,w ,h, image,0,0,TX_WHITE);

    }


 };
struct Button
{
    int x;
    int y;
    int w;
    int h;
    const char* text;
    bool visible;

    void draw()
    {

    txSetColor (TX_WHITE, 3);
    txSetFillColor (TX_RED);
    Win32::RoundRect(txDC(), x, y, x+w, y+h, 42, 42);
    txSelectFont("Areal", 42);
    txDrawText(x, y, x+w, y+h, text);

    }

    bool click()
    {
        return  (txMouseX()>x && txMouseX()<x+w &&
                txMouseY()>y && txMouseY()<y+h &&
                txMouseButtons() == 1 && visible);





    }

};
 //////                                    //////////////////////////////////////////////////ghbdtn vtyz pjden rbhbk vyt 13 ktn yj xthtp 5 vtczxtd ,eltn 14 z bp ekmzyjdcrf b hjbkcz nj;t nfv vj` [j,,b 'nj evyst cnhfntubb yfghbvth rkti hjzkm bkb ljnf dtlm vyt yhfdbncz levfnm////////////////////////////                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 �����                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          � ����� � ���//////////////////////////////////////////////////////////                                                                                                                                                                                                                                                                                                                                                                                                                                                   //////////////////////////////////////////////////////////////////��� ���� ���  /                        //////////////////////////////////////////////////////////////////////////* /* /* /*/ /* / /*/ */ */ */ */////////////////////////////////////////


int main()
{
txCreateWindow (1000, 600);
txTextCursor (false);

string PAGE = "menu";

Button btn0 = {280, 90, 200, 45, "�����", true};
Button btn1 = {280, 155, 200, 45, "���������", true};
Button btn2 = {280, 220, 200, 45, "�������", true};
Button btn3 = {280, 285, 200, 45, "� ������������", true};
Button btn4 = {280, 360, 200, 45, "�����", true};


Birsd birsd = {225,225,100, 100,txLoadImage("��������/fly.bmp"),txLoadImage("��������/jump.bmp"),txLoadImage("��������/fly.bmp")};
Truba truba = {750,319,161, 281,txLoadImage("��������/truba_up.bmp"),txLoadImage("��������/truba_up.bmp"),txLoadImage("��������/truba_down.bmp")};
Fon fon = {0,0,1000, 600,txLoadImage("��������/fon1.bmp")};


    while(!(btn4.click()))
    {
        txClear();
        txBegin();


        //fon.draw();
        birsd.draw();
        truba.draw();

        if(GetAsyncKeyState(VK_SPACE))
        {
            birsd.y -= 70;
            birsd.image = birsd.image_jump;
        }

        birsd.y += 15;
        birsd.image =birsd.image_fly ;
        truba.x -= 15;

        if(GetAsyncKeyState(VK_LEFT))
        {
        truba.x = 750;
        }

        txEnd();
        Sleep(10);
    }

DeleteDC(birsd.image);
txDisableAutoPause();
return 0;
}
