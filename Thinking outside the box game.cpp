#include<bits/stdc++.h>
#include<graphics.h>
#include<stdio.h>
#include<windows.h>
#include<dos.h>
#define H 1400
#define W 1400
int level=1;
void homepage();
void game();
void selectlevel();
void about();
void questione1();
void questione2();
void questione3();
void questione4();
void questione5();


int main()

{
    initwindow(H,W);

    homepage();
    getch();
    closegraph();
}
void homepage()
{
    readimagefile("background.JPG",0,0,H,W);
    setbkcolor(WHITE);
    setcolor(BLACK);
    settextstyle(BOLD_FONT,HORIZ_DIR,6);
    outtextxy(150,100,"Thinking Outside the box Game");
    outtextxy(150,200,"Main menu:");
    outtextxy(150,300,"Play game");
    outtextxy(150,400,"Select Level");
    outtextxy(150,500,"About Game");
    while(1)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            int x,y;
            getmouseclick(WM_LBUTTONDOWN,x,y);

            if(x>=150&&x<=450&&y>=300&&y<=350)
            {
                game();
            }
            if(x>=150&&x<=500&&y>=400&&y<=450)
            {
                selectlevel();
            }
            if(x>=150&&x<=450&&y>=500&&y<=550)
            {
                about();
            }

        }
    }
}

void questione1()
{
    cleardevice();
    outtextxy(100,50,"i.if 6+5=111");
    outtextxy(110,100,"  11+2=913");
    outtextxy(110,150,"  11+9=?");
    outtextxy(110,200,"  a.20  b.200");
    outtextxy(110,250,"  c.220 d.222");
    outtextxy(150,410,"Main menu");

    while(1)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            int x,y;
            getmouseclick(WM_LBUTTONDOWN,x,y);
            if(x>=150 && x<=400 && y>=420 && y<=450)homepage();

            if((x>=170&&x<=290&&y>=210&&y<=240)||(x>=355&&x<=505&&y>=210&&y<=240)||(x>=355&&x<=505&&y>=260&&y<=290))
            {
                outtextxy(150,300,"Wrong answer");
                outtextxy(150,350,"Next question");
                outtextxy(150,400,"Main menu");
                line(150,360,410,390);
                while(1)
                {
                    if(ismouseclick(WM_LBUTTONDOWN))
                    {
                        int x,y;
                        getmouseclick(WM_LBUTTONDOWN,x,y);

                        if(x>=150&&x<=410&&y>=360&&y<=390)
                        {
                           questione2();
                        }
                        if(x>=150&&x<=550&&y>=410&&y<=445)
                        {
                           homepage();
                        }

                    }
                }
            }

            else if(x>=170&&x<=320&&y>=260&&y<=290)
            {
                outtextxy(150,300,"Correct answer");
                outtextxy(150,350,"Main menu");
                outtextxy(150,400,"Next question");
                line(150,350,450,380);
                while(1)
                {
                    if(ismouseclick(WM_LBUTTONDOWN))
                    {
                        int x,y;
                        getmouseclick(WM_LBUTTONDOWN,x,y);
                        if(x>=150&&x<=445&&y>=350&&y<=380)
                        {
                            cleardevice();
                            homepage();
                        }


                        if(x>=150&&x<=550&&y>=410&&y<=445)
                        {
                            cleardevice();
                            questione2();

                        }

                    }
                }

            }

        }
    }
}

void questione2()
{
    cleardevice();
    outtextxy(100,50,"ii.1,1,1,3,5,9,17....... ");
    outtextxy(110,100,"  Find the next value of the series.");
    outtextxy(110,150,"  ");
    outtextxy(110,200,"  a.31  b.25");
    outtextxy(110,250,"  c.21  d.29");
    outtextxy(150,410,"Main menu");
    line(170,200,320,240);
    while(1)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            int x,y;
            getmouseclick(WM_LBUTTONDOWN,x,y);
            if(x>=100 && x<=400 && y>=400 && y<=450){homepage();}


            if((x>=170&&x<=320&&y>=260&&y<=290)||(x>=355&&x<=505&&y>=210&&y<=240)||(x>=355&&x<=505&&y>=260&&y<=290))
            {
                outtextxy(150,300,"Wrong answer");
                outtextxy(150,350,"Next question");
                outtextxy(150,400,"Main menu");
                line(150,360,410,390);
                while(1)
                {
                    if(ismouseclick(WM_LBUTTONDOWN))
                    {
                        int x,y;
                        getmouseclick(WM_LBUTTONDOWN,x,y);

                        if(x>=150&&x<=410&&y>=360&&y<=390)
                        {
                           questione3();
                        }
                        if(x>=150&&x<=550&&y>=410&&y<=445)
                        {
                           homepage();
                        }

                    }
                }
            }

            else if(x>=170&&x<=290&&y>=210&&y<=240)
            {
                outtextxy(150,300,"Correct answer");
                outtextxy(150,350,"Main menu");
                outtextxy(150,400,"Next question");

                while(1)
                {
                    if(ismouseclick(WM_LBUTTONDOWN))
                    {
                        int x,y;
                        getmouseclick(WM_LBUTTONDOWN,x,y);
                         if(x>=150&&x<=445&&y>=350&&y<=380)
                        {
                            cleardevice();
                            homepage();
                        }


                        if(x>=150&&x<=550&&y>=410&&y<=445)
                        {
                            cleardevice();
                            questione3();

                        }

                    }
                }

            }

        }
    }
}
void questione3()
{
    cleardevice();
    outtextxy(100,50,"iii.12345678910111213....... ");
    outtextxy(110,100,"  Find the 190th digit of the number?");
    outtextxy(110,150,"  ");
    outtextxy(110,200,"  a.1  b.5");
    outtextxy(110,250,"  c.0  d.9");
    outtextxy(150,410,"Main menu");

    while(1)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            int x,y;
            getmouseclick(WM_LBUTTONDOWN,x,y);
            if(x>=100 && x<=400 && y>=400 && y<=450){homepage();}


            if((x>=170&&x<=320&&y>=260&&y<=290)||(x>=355&&x<=505&&y>=210&&y<=240)||(x>=355&&x<=505&&y>=260&&y<=290))
            {
                outtextxy(150,300,"Wrong answer");
                outtextxy(150,350,"Next question");
                outtextxy(150,400,"Main menu");

                while(1)
                {
                    if(ismouseclick(WM_LBUTTONDOWN))
                    {
                        int x,y;
                        getmouseclick(WM_LBUTTONDOWN,x,y);

                        if(x>=150&&x<=410&&y>=360&&y<=390)
                        {
                           questione4();
                        }
                        if(x>=150&&x<=550&&y>=410&&y<=445)
                        {
                           homepage();
                        }

                    }
                }
            }

            else if(x>=170&&x<=290&&y>=210&&y<=240)
            {
                outtextxy(150,300,"Correct answer");
                outtextxy(150,350,"Main menu");
                outtextxy(150,400,"Next question");

                while(1)
                {
                    if(ismouseclick(WM_LBUTTONDOWN))
                    {
                        int x,y;
                        getmouseclick(WM_LBUTTONDOWN,x,y);
                         if(x>=150&&x<=445&&y>=350&&y<=380)
                        {
                            cleardevice();
                            homepage();
                        }


                        if(x>=150&&x<=550&&y>=410&&y<=445)
                        {
                            cleardevice();
                            questione4();
                        }

                    }
                }

            }

        }
    }
}
void questione4()
{
    cleardevice();
    outtextxy(100,50,"iv.1+(1/2)+(1/4)+(1/8)....... ");
    outtextxy(110,100,"  What is the sum of this infinite series?");
    outtextxy(110,150,"  ");
    outtextxy(110,200,"  a.10 b.infinity");
    outtextxy(110,250,"  c.0  d.2");
    outtextxy(150,410,"Main menu");
    while(1)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            int x,y;
            getmouseclick(WM_LBUTTONDOWN,x,y);
            if(x>=100 && x<=400 && y>=400 && y<=450){homepage();}


            if((x>=170&&x<=320&&y>=260&&y<=290)||(x>=355&&x<=625&&y>=210&&y<=240)||(x>=355&&x<=505&&y>=260&&y<=290))
            {
                outtextxy(150,300,"Wrong answer");
                outtextxy(150,350,"Next question");
                outtextxy(150,400,"Main menu");
                line(150,360,410,390);
                while(1)
                {
                    if(ismouseclick(WM_LBUTTONDOWN))
                    {
                        int x,y;
                        getmouseclick(WM_LBUTTONDOWN,x,y);

                        if(x>=150&&x<=410&&y>=360&&y<=390)
                        {
                           questione2();
                        }
                        if(x>=150&&x<=550&&y>=410&&y<=445)
                        {
                           homepage();
                        }

                    }
                }
            }

            else if(x>=170&&x<=290&&y>=210&&y<=240)
            {
                outtextxy(150,300,"Correct answer");
                outtextxy(150,350,"Main menu");
                outtextxy(150,400,"Next question");

                while(1)
                {
                    if(ismouseclick(WM_LBUTTONDOWN))
                    {
                        int x,y;
                        getmouseclick(WM_LBUTTONDOWN,x,y);
                         if(x>=150&&x<=445&&y>=350&&y<=380)
                        {
                            cleardevice();
                            homepage();
                        }


                        if(x>=150&&x<=550&&y>=410&&y<=445)
                        {
                            cleardevice();

                        }

                    }
                }

            }

        }
    }
}
void game()
{

    cleardevice();
    if(level==1)
    {
        questione1();

    }
    else if(level==2)
    {
        outtextxy(100,50,"gh");
    }
    getch();

}
void selectlevel()
{
    cleardevice();
    outtextxy(100,50,"Level");
    outtextxy(100,100,"1.Easy");
    outtextxy(100,150,"2.Medium");
    outtextxy(100,200,"3.Hard");


    while(1)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            int x,y;
            getmouseclick(WM_LBUTTONDOWN,x,y);

            if(x>=100&&x<=300&&y>=120&&y<=140)
            {
                level=1;
                homepage();
            }
            if(x>=100&&x<=350&&y>=160&&y<=180)
            {
                level=2;
                homepage();
            }
            if(x>=100&&x<=300&&y>=220&&y<=240)
            {
                level=3;
                homepage();
            }

        }
    }


}
void about()
{
    cleardevice();
    outtextxy(100,50,"Game for mathlovers");
}
