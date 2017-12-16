#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;

//funkcja rysujaca plansze
char rysuj(char plansza[])
{
     cout << plansza[1] << "|" << plansza[2] << "|" << plansza[3] << endl;
     cout << "------" << endl;
     cout << plansza[4] << "|" << plansza[5] << "|" << plansza[6] << endl;
     cout << "------" << endl;
     cout << plansza[7] << "|" << plansza[8] << "|" << plansza[9] << endl;
     cout << endl;     
}

char rysuj2()
{    
     cout << "                           Witaj w grze Kolko i Krzyzyk!" << endl <<endl;
     cout << "Numeracja pol wyglada nastepujaco:" << endl <<endl;
     cout << 1 << "|" << 2 << "|" << 3 << endl;
     cout << "------" << endl;
     cout << 4 << "|" << 5 << "|" << 6 << endl;
     cout << "------" << endl;
     cout << 7 << "|" << 8 << "|" << 9 << endl << endl;
     cout << "------" << endl;
     cout << endl;     
}


//glowna funkcja programu
int main()
{
    char znak, plansza[9];
    int i, x;

    //czyszczenie tablicy
    for (i=0; i<9; i++)
    {
        plansza[i] = ' ';
    }
    //-------------------
    
    rysuj2();
    rysuj(plansza);   
    
    
    do {
       cout << "Wybierz o lub x aby zaczac: ";
       cin >> znak;
       cout << endl;
    
       if (znak != 'x' and znak != 'o')
       {
          cout << "Wybrano zly znak!" << endl;
       }
    } while (znak != 'x' and znak != 'o');
 
    
    do {
    
    pole_zajete1:                                      
 
    do 
    {
       cout << "Podaj numer pola: ";
       cin >> x;
       
       if (x<1 or x>9 or isalnum(x)==true)
       {
          cout << "Niepoprawna liczba!" << endl;                     
       }
    }
    while (x<1 or x>9);
                   
    switch(x)
    {
    case 1:
         if (plansza[1] == 'x' or plansza[1] == 'o')
         {
            cout << "Pole zajete!" << endl;
            goto pole_zajete1;
         }
         else
         {
             system("cls");
             plansza[1] = znak;
             rysuj(plansza);
         }
         break;
    
    case 2:
         if (plansza[2] == 'x' or plansza[2] == 'o')
         {
            cout << "Pole zajete!" << endl;
            goto pole_zajete1;
         }
         else
         {
             system("cls");
             plansza[2] = znak;
             rysuj(plansza);
         }
         break;
    
    case 3:
         if (plansza[3] == 'x' or plansza[3] == 'o')
         {
            cout << "Pole zajete!" << endl;
            goto pole_zajete1;
         }
         else
         {
             system("cls");
             plansza[3] = znak;
             rysuj(plansza);
         }
         break;
    
    case 4:
         if (plansza[4] == 'x' or plansza[4] == 'o')
         {
            cout << "Pole zajete!" << endl;
            goto pole_zajete1;
         }
         else
         {
             system("cls");
             plansza[4] = znak;
             rysuj(plansza);
         }
         break;
    
    case 5:
         if (plansza[5] == 'x' or plansza[5] == 'o')
         {
            cout << "Pole zajete!" << endl;
            goto pole_zajete1;
         }
         else
         {
             system("cls");
             plansza[5] = znak;
             rysuj(plansza);
         }
         break;
         
    case 6:
         if (plansza[6] == 'x' or plansza[6] == 'o')
         {
            cout << "Pole zajete!" << endl;
            goto pole_zajete1;
         }
         else
         {
             system("cls");
             plansza[6] = znak;
             rysuj(plansza);
         }
         break;
         
    case 7:
        if (plansza[7] == 'x' or plansza[7] == 'o')
         {
            cout << "Pole zajete!" << endl;
            goto pole_zajete1;
         }
         else
         {
             system("cls");
             plansza[7] = znak;
             rysuj(plansza);
         }
         break;
         
    case 8:
         if (plansza[8] == 'x' or plansza[8] == 'o')
         {
            cout << "Pole zajete!" << endl;
            goto pole_zajete1;
         }
         else
         {
             system("cls");
             plansza[8] = znak;
             rysuj(plansza);
         }
         break;
         
    case 9:
         if (plansza[9] == 'x' or plansza[9] == 'o')
         {
            cout << "Pole zajete!" << endl;
            goto pole_zajete1;
         }
         else
         {
             system("cls");
             plansza[9] = znak;
             rysuj(plansza);
         }
         break;
    default:
            cout << "ddf";
            break;
            
    }
    
    if ((plansza[1]==plansza[2] and plansza[2]==plansza[3]) and (plansza[1] != ' ' and plansza[2] != ' ' and plansza[3] != ' '))
    {
        cout << "Wygral gracz: " << znak;
       goto koniec;
       getch();
    }
    if ((plansza[4]==plansza[5] and plansza[5]==plansza[6]) and (plansza[4] != ' ' and plansza[5] != ' ' and plansza[6] != ' '))
    {
        cout << "Wygral gracz: " << znak;
       goto koniec;
       getch();;
    }
    if ((plansza[7]==plansza[8] and plansza[8]==plansza[9]) and (plansza[7] != ' ' and plansza[8] != ' ' and plansza[9] != ' '))
    {
        cout << "Wygral gracz: " << znak;
       goto koniec;
       getch();
    }
    if ((plansza[1]==plansza[5] and plansza[5]==plansza[9]) and (plansza[1] != ' ' and plansza[5] != ' ' and plansza[9] != ' '))
    {
        cout << "Wygral gracz: " << znak;
       goto koniec;
       getch();
    }
    if ((plansza[3]==plansza[5] and plansza[5]==plansza[7]) and (plansza[3] != ' ' and plansza[5] != ' ' and plansza[7] != ' '))
    {
        cout << "Wygral gracz: " << znak;
       goto koniec;
       getch();
    }
    if ((plansza[1]==plansza[4] and plansza[4]==plansza[7]) and (plansza[1] != ' ' and plansza[4] != ' ' and plansza[7] != ' '))
    {
        cout << "Wygral gracz: " << znak;
       goto koniec;
       getch();
    }
    if ((plansza[2]==plansza[5] and plansza[5]==plansza[8]) and (plansza[2] != ' ' and plansza[5] != ' ' and plansza[8] != ' '))
    {
        cout << "Wygral gracz: " << znak;
       goto koniec;
       getch();
    }
    if ((plansza[3]==plansza[7] and plansza[7]==plansza[9]) and (plansza[3] != ' ' and plansza[7] != ' ' and plansza[9] != ' '))
    {
       cout << "Wygral gracz: " << znak;
       goto koniec;
       getch();
    }
    if (plansza[1] != ' ' and plansza[2] != ' ' and plansza[3] != ' ' and plansza[4] != ' ' 
      and plansza[5] != ' ' and plansza[6] != ' ' and plansza[7] != ' ' and plansza[8] != ' ' 
      and plansza[9] != ' ')
    {
         cout << "Remis!";
         getch();
    }    
    
    if (znak=='x')
    {
       znak='o';
    }
    else
    {
        znak='x';
    }
    
}
    while(plansza[1] == ' ' or plansza[2] == ' ' or plansza[3] == ' ' or plansza[4] == ' ' 
    or plansza[5] == ' ' or plansza[6] == ' ' or plansza[7] == ' ' or plansza[8] == ' ' or plansza[9] == ' ');
      
    koniec:
    cout << endl << endl;
    getch();
    return 0;
}
