
#include "TXLib.h"
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
      txTransparentBlt(txDC(),x,100,330,300,image,165*n_card,0,TX_WHITE);

    }

    void animation()
    {

      n_card += 1;

      if(n_card<8)
      {
        n_card = 0;

      }
    }

 };

//��� �����                                                                                                                                                                                                                                                                                                                                                                       �����                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          � ����� � ���//////////////////////////////////////////////////////////                                                                                                                                                                                                                                                                                                                                                                                                                                                   //////////////////////////////////////////////////////////////////��� ���� ���  /                        //////////////////////////////////////////////////////////////////////////* /* /* /*/ /* / /*/ */ */ */ */////////////////////////////////////////


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





 sonic.x += sonic.vx;




 if(sonic.n_card<8)
      {
        sonic.n_card = 0;
      }



    if(!GetAsyncKeyState(VK_RIGHT))
      {
       sonic.y + 10;
       sonic.n_card += 1;
       sonic.image = sonic.image_R;
      }

      if(!GetAsyncKeyState(VK_RIGHT))
      {
       sonic.x - 10;
       sonic.n_card += 1;
       sonic.image = sonic.image_L  ;
      }


       //End();
      Sleep(20);
    }

    //DeleteDC(sonic.image);
    txDisableAutoPause();
    return 0;
    }

