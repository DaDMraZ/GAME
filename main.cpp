
#include "TXLib.h"
struct Finish
{
  int x;
  int y;
  int w;
  int h;


 void draw()
    {
      txBitBlt (txDC(), x, y, w, h);

    }


};
struct Fon
{
  int x;
  int y;
  int w;
  int h;
  HDC image;

 void draw()
    {
      txBitBlt (txDC(), x, y, w, h, image);

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
 /////////////////////////                                    //////////////////////////////////////////////////ghbdtn vtyz pjden rbhbk vyt 13 ktn yj xthtp 5 vtczxtd ,eltn 14 z bp ekmzyjdcrf b hjbkcz nj;t nfv vj` [j,,b 'nj evyst cnhfntubb yfghbvth rkti hjzkm bkb ljnf dtlm vyt yhfdbncz levfnm////////////////////////////                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 �����                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          � ����� � ���//////////////////////////////////////////////////////////                                                                                                                                                                                                                                                                                                                                                                                                                                                   //////////////////////////////////////////////////////////////////��� ���� ���  /                        //////////////////////////////////////////////////////////////////////////* /* /* /*/ /* / /*/ */ */ */ */////////////////////////////////////////


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
Truba truba1 = {750,319,161, 281,txLoadImage("��������/truba_up.bmp"),txLoadImage("��������/truba_up.bmp"),txLoadImage("��������/truba_down.bmp")};
Truba truba2 = {1400,0,161, 281,txLoadImage("��������/truba_down.bmp"),txLoadImage("��������/truba_up.bmp"),txLoadImage("��������/truba_down.bmp")};
Fon fon = {0,0,1000,600,txLoadImage("��������/fon1.bmp")};


    while(!GetAsyncKeyState(VK_ESCAPE)/*!(btn4.click())*/)
    {
        txClear();
        txBegin();



        fon.draw();
        birsd.draw();
        truba1.draw();
        truba2.draw();

        if(GetAsyncKeyState(VK_SPACE))
        {
            birsd.y -= 30;
            birsd.image = birsd.image_jump;
        }
        else
        {
            birsd.y += 15;
            birsd.image = birsd.image_fly;
        }

        truba1.x -= 10;
        truba2.x -= 10;


        if(GetAsyncKeyState(VK_LEFT))
        {
            truba2.x = 1400;
            truba1.x = 750;
            birsd.y = 225;
        }

        if(truba1.x == -300 )
        {
         truba1.x += 1300;
        }

        if(truba2.x == -300 )
        {
         truba2.x += 1300;
        }


        txEnd();
        txSleep(10);

      }



txDeleteDC(truba1.image);
txDeleteDC(truba2.image);
txDeleteDC(birsd.image);
txDeleteDC(fon.image);
txDisableAutoPause();

return 0;
}
