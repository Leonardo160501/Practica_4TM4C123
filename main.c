
#include "lib/include.h"


int main(void)
{

    char c='a';
    Configurar_PLL(_20MHZ);  //Confiuracion de velocidad de reloj
    Configurar_UART0();//Yo FCLK 20MHZ Baudrate 9600

    //Experimento 1
    //  Configurar_UART1(); //Saul,Fabela -fclk 25MHZ Baud-rate 57600
    //  Configurar_UART7(); //Aleidis,Monse -fclk 50MHZ Baud-rate 57600
    //  Configurar_UART4(); //Christian,Abiu -fclk 10MHZ Baud-rate 4800
    //  Configurar_UART2(); //Majo,Alonso -fclk 40MHZ Baud-rate 115200
    //  Configurar_UART3(); //Rodolfo,Leonardo -fclk 80MHZ Baud-rate 19200
    //  Configurar_UART2(); //Pamela,Paulina -fclk 50MHZ Baud-rate 57600
    //  Configurar_UART5(); //Jozzafat -fclk 40MHZ Baud-rate 28800
    Configurar_GPIO();
   // Homogeneidad();
    //printString("Holis Bolis");
    printChar(c);
    //printString("\n");
   // char *arr = readString(',');
   // printString(&arr[0]);
    while(1)
    {
         c = readChar();
         switch(c)
         {
             case 'r':
                 //GPIODATA port F 662
                 GPIOF->DATA = (1<<1);
                 break;
             case 'b':
                 //GPIODATA port F 662
                 GPIOF->DATA = (1<<2);
                 break;
             case 'g':
                 //GPIODATA port F 662
                 GPIOF->DATA = (1<<3);
                 break;
             default:
                 GPIOF->DATA = (0<<1) | (0<<2) | (0<<3);
                 break;
         }
    }
}