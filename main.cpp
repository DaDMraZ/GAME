
#include "TXLib.h"
/*struct Button
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
    txSetFillColor (TX_BLUE);

    Win32::RoundRect(txDC(), x, y, x+w, y+h, 30, 30);
    txSelectFont("Arial Rounded MT",30);
    txDrawText(x,  y,  x+w,  y+h, text);
   }

bool click()
{

  return  (txMouseX()>x && txMouseX()<x+w &&
           txMouseY()>y && txMouseY()<y+h &&
           txMouseButtons() == 1 && visible);

 }

 };
  */
struct Sonic
{
   int x;
   int y;
   int vx;
   HDC image;
   HDC image_R;
   HDC image_L;
   int n_card ;

 void draw()
    {
      txTransparentBlt(txDC(),x,300,59,100,image,150*n_card,0,TX_WHITE);

    }

    void animation()
    {

      n_card += 1;

      if(n_card<11)
      {
        n_card = 0;

      }
    }


 };





int main()
    {
    txCreateWindow (1000, 600);
    txTextCursor (false);



 while(!GetAsyncKeyState(VK_ESCAPE))
 {
     txClear();
     txBegin();


Sonic sonic = {1191,165,100, txLoadImage("sonic_R.bmp"),txLoadImage("sonic_R.bmp"),txLoadImage("sonic_L.bmp"), 0};

sonic.animation();
sonic.draw();


 sonic.n_card += 1;


 sonic.x += sonic.vx;




 if(sonic.n_card<11)
      {
        sonic.n_card = 0;
      }

        if(sonic.x<700 )
        {
         sonic.vx = -sonic.vx ;
         sonic.image = sonic.image_L;
         }
        if(sonic.x<100)
        {
         sonic.vx = -sonic.vx ;
         sonic.image = sonic.image_R;

        }


      End();
      Sleep(20);
 }

    DeleteDC(sonic.image);
    txDisableAutoPause();
    return 0;
    }

