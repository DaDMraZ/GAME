
#include "TXLib.h"
struct Zalp
{
   int x;
   int y;
   int w;
   int h;
   HDC image;







 void draw()
    {
      txTransparentBlt (txDC(),x,y,w ,h, image,TX_WHITE);

    }







};
struct Boss
{
   int x;
   int y;
   int w;
   int h;
   HDC image;






 void draw()
    {
      txTransparentBlt (txDC(),x,y,w ,h, image,TX_WHITE);

    }


 };
struct Boron
{
  int x;
  int y;
  int w;
  int h;
  HDC image;

 void draw()
    {
      txTransparentBlt (txDC(), x, y, w, h,image);

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
    txSetFillColor (TX_YELLOW);
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
 /////////////////////////                                    //////////////////////////////////////////////////ghbdtn vtyz pjden rbhbk vyt 13 ktn yj xthtp 5 vtczxtd ,eltn 14 z bp ekmzyjdcrf b hjbkcz nj;t nfv vj` [j,,b 'nj evyst cnhfntubb yfghbvth rkti hjzkm bkb ljnf dtlm vyt yhfdbncz levfnm////////////////////////////                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 øóòêà                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          à ìîæåò è íåò//////////////////////////////////////////////////////////                                                                                                                                                                                                                                                                                                                                                                                                                                                   //////////////////////////////////////////////////////////////////ìíå ëåíü óæå  /                        //////////////////////////////////////////////////////////////////////////* /* /* /*/ /* / /*/ */ */ */ */////////////////////////////////////////


int main()
{
txCreateWindow (1000, 600);
txTextCursor (false);

string PAGE = "menu";

Button btn0 = {280, 90, 200, 45, "Ñòàðò", true};
Button btn1 = {280, 155, 200, 45, "Íàñòðîéêè", true};
Button btn2 = {280, 220, 200, 45, "Ïðàâèëà", true};
Button btn3 = {280, 285, 200, 45, "Î Ðàçðàáîò÷èêå", true};
Button btn4 = {280, 360, 200, 45, "Âûõîä", true};


Birsd birsd = {225,225,100, 100,txLoadImage("ÊÀÐÒÈÍÊÈ/fly.bmp"),txLoadImage("ÊÀÐÒÈÍÊÈ/jump.bmp"),txLoadImage("ÊÀÐÒÈÍÊÈ/fly.bmp")};
Truba truba1 = {750,319,161, 281,txLoadImage("ÊÀÐÒÈÍÊÈ/truba_up.bmp"),txLoadImage("ÊÀÐÒÈÍÊÈ/truba_up.bmp"),txLoadImage("ÊÀÐÒÈÍÊÈ/truba_down.bmp")};
Truba truba2 = {1400,0,161, 281,txLoadImage("ÊÀÐÒÈÍÊÈ/truba_down.bmp"),txLoadImage("ÊÀÐÒÈÍÊÈ/truba_up.bmp"),txLoadImage("ÊÀÐÒÈÍÊÈ/truba_down.bmp")};
Fon fon = {0,0,1000,600,txLoadImage("ÊÀÐÒÈÍÊÈ/fon1.bmp")};
Boron boron = {1200,150,143,120,txLoadImage("ÊÀÐÒÈÍÊÈ/boron.bmp")};
Boss boss = {800,225,280,244,txLoadImage("ÊÀÐÒÈÍÊÈ/boss.bmp")};
Zalp zalp = {800,225,446,113,txLoadImage("ÊÀÐÒÈÍÊÈ/zalp.bmp")};

    while(!(btn4.click()))
    {
        txClear();
        txBegin();


    if(PAGE == "menu")
    {
      txSetFillColor(TX_BLACK);
      txSetFillColor(TX_GREEN);
      txRectangle (225, 225, 100, 100);

        btn0.draw();
        btn1.draw();
        btn2.draw();
        btn3.draw();
        btn4.draw();

        btn0.visible = true;
        btn1.visible = true;
        btn2.visible = true;
        btn3.visible = true;
        btn4.visible = true;

        if(btn0.click())
        {
         PAGE="Ñòàðò";
        btn0.visible = false;
        btn1.visible = false;
        btn2.visible = false;
        btn3.visible = false;
        btn4.visible = false;
        }
        if(btn1.click())
        {
         PAGE="Íàñòðîéêè";
        btn0.visible = false;
        btn1.visible = false;
        btn2.visible = false;
        btn3.visible = false;
        btn4.visible = false;
        }
        if(btn2.click())
        {
         PAGE="Ïðàâèëà";
        btn0.visible = false;
        btn1.visible = false;
        btn2.visible = false;
        btn3.visible = false;
        btn4.visible = false;

        }
        if(btn3.click())
        {
         PAGE="Î Ðàçðàáîò÷èêå";

        btn0.visible = false;
        btn1.visible = false;
        btn2.visible = false;
        btn3.visible = false;
        btn4.visible = false;
        }






    }

    if(PAGE == "Íàñòðîéêè")
     {
      txSetFillColor(TX_BLACK);

    if(GetAsyncKeyState(VK_ESCAPE))
      {
       PAGE="menu";
      }
      txSetFillColor (TX_GREEN);

     }
    if(PAGE == "Ïðàâèëà")
     {
    txSetFillColor(TX_BLACK);

      if(GetAsyncKeyState(VK_ESCAPE))
      {
       PAGE="menu";
      }

    txSetFillColor (TX_GREEN);

     }
    if(PAGE == "Î Ðàçðàáîò÷èêå")
     {
         if(GetAsyncKeyState(VK_ESCAPE))
          {
            PAGE="menu";

          }
        txSetFillColor(TX_BLACK);

          if(GetAsyncKeyState(VK_ESCAPE))
          {
           PAGE="menu";
          }
        txSetFillColor (TX_GREEN);


     }
    if(PAGE == "Ñòàðò")
     {
       if(GetAsyncKeyState(VK_ESCAPE))
          {
            PAGE="menu";

          }

        fon.draw();
        boron.draw();
        birsd.draw();
        truba1.draw();
        truba2.draw();

        if(GetAsyncKeyState(VK_UP))
        {
          boron.y -= 5;

        }


        if(GetAsyncKeyState(VK_DOWN))
        {
         boron.y += 5;
        }

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
        boron.x -= 13 ;

        if(GetAsyncKeyState(VK_LEFT))
        {
            truba2.x = 1400;
            truba1.x = 750;
            birsd.y = 225;
            boron.x = 1200;
            boron.y = 150;
        }



        if(truba1.x == -300 )
        {
         truba1.x += 1300;
        }

        if(truba2.x == -300 )
        {
         truba2.x += 1300;
        }

        if(boron.x == -100)
        {
         boron.x += 1300;
         boron.y += 50;

        }
        if(boron.y == 300 )
        {
         boron.y -= 150;
        }
        if(boron.y == 150)
         {
          boron.y += 150;
         }



        txEnd();
        txSleep(10);


      }
    if(PAGE == "Âûõîä")
     {
    txSetFillColor(TX_BLACK);

    txSetFillColor (TX_GREEN);

     }


      }


txDeleteDC(boron.image);
txDeleteDC(truba1.image);
txDeleteDC(truba2.image);
txDeleteDC(birsd.image);
txDeleteDC(fon.image);
txDisableAutoPause();

return 0;
}
