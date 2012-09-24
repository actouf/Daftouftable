/*

Daftouf table / kit arduino (Daft Punk Table)

actouf

https://github.com/actouf/Daftouftable

http://www.geektoolbox.fr/2010/08/14/daftouf-table-kit-arduino-daft-punk-table/

daftouf table by actouf est mis à disposition selon les termes de la licence Creative Commons Paternité – Pas d’Utilisation Commerciale – Partage des Conditions Initiales à l’Identique 3.0 Unported.

*/ 


#include <Tlc5940.h>

/* EXAMPLES : 

  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 4095);
  Tlc.set(2, 4095);
  Tlc.set(3, 4095);
  Tlc.set(4, 4095);
  Tlc.set(5, 4095);
  Tlc.set(6, 4095);
  Tlc.set(7, 4095);
  Tlc.set(8, 4095);
  Tlc.set(9, 4095);
  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  Tlc.set(12, 4095);
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);
  Tlc.set(15, 4095);
  Tlc.set(16, 4095);
  Tlc.set(17, 4095);
  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.set(20, 4095);
  Tlc.set(21, 4095);
  Tlc.set(22, 4095);
  Tlc.set(23, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(2000);
  
*/

void daft();
void respire();
void actouf();
void cube();

void setup()
{
  Tlc.init();
}

void loop()
{
  int direction = 1;
  for (int channel = 0; channel < 25; channel += direction) {

    /* Tlc.clear() sets all the grayscale values to zero, but does not send
       them to the TLCs.  To actually send the data, call Tlc.update() */
    Tlc.clear();

    /* Tlc.set(channel (0-15), value (0-4095)) sets the grayscale value for
       one channel (15 is OUT15 on the first TLC, if multiple TLCs are daisy-
       chained, then channel = 16 would be OUT0 of the second TLC, etc.).

       value goes from off (0) to always on (4095).

       Like Tlc.clear(), this function only sets up the data, Tlc.update()
       will send the data. */
    if (channel == 0) {
      direction = 1;
      cube();
       actouf();
       daft();
    } else {
      Tlc.set(channel - 1, 1000);
    }
    Tlc.set(channel, 4095);
    if (channel != 25 - 1) {
      Tlc.set(channel + 1, 1000);
    } else {
      direction = -1;
      cube();
      daft();
    }

    /* Tlc.update() sends the data to the TLCs.  This is when the LEDs will
       actually change. */
    Tlc.update();

    delay(150);
  }

}

void daft(){
  // MOVIE
  //http://www.youtube.com/watch?v=zCA79Du-WqY
  
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 4095);
  Tlc.set(5, 4095);
  Tlc.set(6, 4095);
  
  Tlc.set(3, 4095);
  Tlc.set(4, 4095);
  Tlc.set(8, 4095);
  Tlc.set(9, 4095);
  
  Tlc.set(15, 4095);
  Tlc.set(16, 4095);
  Tlc.set(20, 4095);
  Tlc.set(21, 4095);
  
  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.set(23, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  Tlc.clear();
  Tlc.set(5, 4095);
  Tlc.set(6, 4095);
  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  Tlc.set(15, 4095);
  Tlc.set(16, 4095);
  
  Tlc.set(8, 4095);
  Tlc.set(9, 4095);
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);
  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.update();
  delay(1000);
  
  Tlc.clear();
  Tlc.set(6, 4095);
  Tlc.set(7, 4095);
  Tlc.set(8, 4095);

  Tlc.set(11, 4095);
  Tlc.set(12, 4095);
  Tlc.set(13, 4095);
  
  Tlc.set(16, 4095);
  Tlc.set(17, 4095);
  Tlc.set(18, 4095);
  Tlc.update();
  delay(1000);
  
  Tlc.clear();
  Tlc.set(1, 4095);
  Tlc.set(2, 4095);
  Tlc.set(3, 4095);
  Tlc.set(6, 4095);
  Tlc.set(7, 4095);
  Tlc.set(8, 4095);
  
  Tlc.set(16, 4095);
  Tlc.set(17, 4095);
  Tlc.set(18, 4095);
  Tlc.set(21, 4095);
  Tlc.set(22, 4095);
  Tlc.set(23, 4095);
  Tlc.update();
  delay(1000);

  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 4095);
  Tlc.set(5, 4095);
  Tlc.set(6, 4095);
  
  Tlc.set(3, 4095);
  Tlc.set(4, 4095);
  Tlc.set(8, 4095);
  Tlc.set(9, 4095);
  
  Tlc.set(15, 4095);
  Tlc.set(16, 4095);
  Tlc.set(20, 4095);
  Tlc.set(21, 4095);
  
  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.set(23, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(2, 4095);
  Tlc.set(4, 4095);
  
  Tlc.set(10, 4095);
  Tlc.set(14, 4095);
  
  Tlc.set(20, 4095);
  Tlc.set(22, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  Tlc.clear();
  Tlc.set(6, 4095);
  Tlc.set(7, 4095);
  Tlc.set(8, 4095);
  
  Tlc.set(11, 4095);
  Tlc.set(13, 4095);
  
  Tlc.set(16, 4095);
  Tlc.set(17, 4095);
  Tlc.set(18, 4095);
  Tlc.update();
  delay(1000);
  
    Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(2, 4095);
  Tlc.set(4, 4095);
  
  Tlc.set(10, 4095);
  Tlc.set(14, 4095);
  
  Tlc.set(20, 4095);
  Tlc.set(22, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  
  Tlc.clear();
  Tlc.set(2, 4095);
  Tlc.set(3, 4095);
  Tlc.set(4, 4095);
  
  Tlc.set(7, 4095);
  Tlc.set(9, 4095);
  
  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  Tlc.set(12, 4095);
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);

  Tlc.set(15, 4095);
  Tlc.set(17, 4095);
  
  Tlc.set(20, 4095);
  Tlc.set(21, 4095);
  Tlc.set(22, 4095);
  Tlc.update();
  delay(1000);
  
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 4095);
  Tlc.set(2, 4095);
  
  Tlc.set(5, 4095);
  Tlc.set(7, 4095);
  
  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  Tlc.set(12, 4095);
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);

  Tlc.set(17, 4095);
  Tlc.set(19, 4095);
  
  Tlc.set(22, 4095);
  Tlc.set(23, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 4095);  
  Tlc.set(2, 4095);
  Tlc.set(3, 4095);
  Tlc.set(4, 4095);
  Tlc.set(5, 4095);
  
  Tlc.set(7, 4095);
  Tlc.set(9, 4095);
  
  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  Tlc.set(12, 4095);
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);
  Tlc.set(15, 4095);
  
  Tlc.set(17, 4095);
  
  Tlc.set(19, 4095);
  
  Tlc.set(20, 4095);
  Tlc.set(21, 4095);
  Tlc.set(22, 4095);
  Tlc.set(23, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  //0:07
  Tlc.clear();

  Tlc.set(5, 4095);
  Tlc.set(6, 4095);
  Tlc.set(7, 4095);
  Tlc.set(8, 4095);
  Tlc.set(9, 4095);
  Tlc.set(10, 4095);

  Tlc.set(14, 4095);
  Tlc.set(15, 4095);
  Tlc.set(16, 4095);
  Tlc.set(17, 4095);
  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.update();
  delay(1000);
  
  //0:08
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(4, 4095);
  
  Tlc.set(5, 4095);

  Tlc.set(8, 4095);
  Tlc.set(9, 4095);
  
  Tlc.set(10, 4095);
  Tlc.set(12, 4095);
  Tlc.set(14, 4095);
  
  Tlc.set(15, 4095);
  Tlc.set(16, 4095);
  Tlc.set(19, 4095);
  
  Tlc.set(20, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
    //0:09
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(4, 4095);
  
  Tlc.set(5, 4095);

  Tlc.set(6, 4095);
  Tlc.set(9, 4095);
  
  Tlc.set(10, 4095);
  Tlc.set(12, 4095);
  Tlc.set(14, 4095);
  
  Tlc.set(15, 4095);
  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  
  Tlc.set(20, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  //0:09
  Tlc.clear();
  Tlc.set(5, 4095);
  Tlc.set(6, 4095);
  Tlc.set(10, 4095);
  Tlc.set(11, 4095);

  Tlc.set(13, 4095);
  Tlc.set(14, 4095);
  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.update();
  delay(1000);
  
  //0:10
  Tlc.clear();
  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  Tlc.set(15, 4095);
  Tlc.set(16, 4095);
  
  Tlc.set(8, 4095);
  Tlc.set(9, 4095);
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);
  Tlc.update();
  delay(1000);
  
    //0:11
    Tlc.clear();
  Tlc.set(0, 4095);

  Tlc.set(4, 4095);
  Tlc.set(5, 4095);

  Tlc.set(9, 4095);
  Tlc.set(10, 4095);

  Tlc.set(14, 4095);
  Tlc.set(15, 4095);

  Tlc.set(19, 4095);
  Tlc.set(20, 4095);

  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  //0:11
  Tlc.clear();

  Tlc.set(1, 4095);
  Tlc.set(3, 4095);

  Tlc.set(6, 4095);
  Tlc.set(8, 4095);

  Tlc.set(11, 4095);
  Tlc.set(13, 4095);

  Tlc.set(16, 4095);
  Tlc.set(18, 4095);

  Tlc.set(21, 4095);
  Tlc.set(23, 4095);

  Tlc.update();
  delay(1000);
  
  //0:13
  Tlc.clear();
  Tlc.set(2, 4095);
  Tlc.set(7, 4095);
  Tlc.set(12, 4095);
  Tlc.set(17, 4095);
  Tlc.set(22, 4095);
  Tlc.update();
  delay(1000);
  
  //0:13
  Tlc.clear();
  Tlc.set(2, 4095);


  Tlc.set(6, 4095);
  Tlc.set(7, 4095);
  Tlc.set(8, 4095);

  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  Tlc.set(12, 4095);
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);
  Tlc.set(15, 4095);
  Tlc.set(16, 4095);

  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.set(20, 4095);

  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  //0:14
  Tlc.clear();
  Tlc.set(0, 4095);

  Tlc.set(4, 4095);
  Tlc.set(5, 4095);
  Tlc.set(6, 4095);

  Tlc.set(8, 4095);
  Tlc.set(9, 4095);
  
  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  Tlc.set(12, 4095);
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);

  Tlc.set(16, 4095);
  Tlc.set(17, 4095);
  Tlc.set(18, 4095);

  Tlc.set(22, 4095);

  Tlc.update();
  delay(1000);
  
  //0:15
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 4095);
  Tlc.set(2, 4095);
  Tlc.set(3, 4095);
  Tlc.set(4, 4095);
  Tlc.set(5, 4095);

  Tlc.set(9, 4095);
  Tlc.set(10, 4095);

  Tlc.set(14, 4095);
  Tlc.set(15, 4095);

  Tlc.set(19, 4095);
  Tlc.set(20, 4095);
  Tlc.set(21, 4095);
  Tlc.set(22, 4095);
  Tlc.set(23, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  //0:16
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(4, 4095);
  Tlc.set(6, 4095);
  Tlc.set(8, 4095);
  Tlc.set(12, 4095);
  Tlc.set(16, 4095);
  Tlc.set(18, 4095);
  Tlc.set(20, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  //0:17
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(4, 4095);
  Tlc.set(5, 4095);
  Tlc.set(6, 4095);
  Tlc.set(8, 4095);
  Tlc.set(9, 4095);
  Tlc.set(11, 4095);
  Tlc.set(12, 4095);
  Tlc.set(13, 4095);
  Tlc.set(15, 4095);
  Tlc.set(16, 4095);
  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.set(20, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  //0:18
  Tlc.clear();
  Tlc.set(6, 4095);
  Tlc.set(8, 4095);

  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  Tlc.set(12, 4095);
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);

  Tlc.set(16, 4095);
  Tlc.set(18, 4095);

  Tlc.update();
  delay(1000);
  
  
  //0:19
  Tlc.clear();
  Tlc.set(7, 4095);

  Tlc.set(11, 4095);
  Tlc.set(12, 4095);
  Tlc.set(13, 4095);

  Tlc.set(17, 4095);

  Tlc.update();
  delay(1000);
  
  //0:20
  Tlc.clear();

  Tlc.set(6, 4095);
  Tlc.set(8, 4095);

  Tlc.set(12, 4095);

  Tlc.set(16, 4095);
  Tlc.set(18, 4095);

  Tlc.update();
  delay(1000);
  
    //0:21
  Tlc.clear();
  Tlc.set(2, 4095);
  Tlc.set(7, 4095);

  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  Tlc.set(12, 4095);
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);

  Tlc.set(17, 4095);
  Tlc.set(22, 4095);

  Tlc.update();
  delay(1000);
  
  
    //0:21
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(4, 4095);
  

  Tlc.set(6, 4095);
  Tlc.set(8, 4095);


  Tlc.set(16, 4095);
  Tlc.set(18, 4095);
  
  Tlc.set(20, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  
   //0:22
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 4095);
  Tlc.set(3, 4095);
  Tlc.set(4, 4095);
  Tlc.set(5, 4095);
  Tlc.set(6, 4095);
  Tlc.set(8, 4095);
  Tlc.set(9, 4095);

  Tlc.set(15, 4095);
  Tlc.set(16, 4095);
  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.set(20, 4095);
  Tlc.set(21, 4095);
  Tlc.set(23, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000); 
  
    //0:23
  Tlc.clear();
  Tlc.set(5, 4095);
  Tlc.set(6, 4095);
  Tlc.set(8, 4095);
  Tlc.set(9, 4095);
  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);
  Tlc.set(15, 4095);
  Tlc.set(16, 4095);
  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.update();
  delay(1000);
  
  //0:25
  Tlc.clear();
  Tlc.set(6, 4095);
  Tlc.set(7, 4095);
  Tlc.set(8, 4095);
  Tlc.set(11, 4095);
  Tlc.set(12, 4095);
  Tlc.set(13, 4095);
  Tlc.set(16, 4095);
  Tlc.set(17, 4095);
  Tlc.set(18, 4095);
  Tlc.update();
  delay(1000);
  
  //0:23
  Tlc.clear();

  Tlc.set(1, 4095);
  Tlc.set(2, 4095);
  Tlc.set(3, 4095);


  Tlc.set(6, 4095);
  Tlc.set(7, 4095);
  Tlc.set(8, 4095);

  Tlc.set(16, 4095);
  Tlc.set(17, 4095);
  Tlc.set(18, 4095);
  Tlc.set(21, 4095);
  Tlc.set(22, 4095);
  Tlc.set(23, 4095);
  Tlc.update();
  delay(1000);
  
  
  //0:23
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 4095);

  Tlc.set(3, 4095);
  Tlc.set(4, 4095);
  Tlc.set(5, 4095);
  Tlc.set(6, 4095);

  Tlc.set(8, 4095);
  Tlc.set(9, 4095);

  Tlc.set(15, 4095);
  Tlc.set(16, 4095);

  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.set(20, 4095);
  Tlc.set(21, 4095);

  Tlc.set(23, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  //0:24
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(2, 4095);
  Tlc.set(4, 4095);
  
  Tlc.set(10, 4095);

  Tlc.set(14, 4095);
  
  Tlc.set(20, 4095);
  Tlc.set(22, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  
  //0:25
  Tlc.clear();
  Tlc.set(6, 4095);
  Tlc.set(7, 4095);
  Tlc.set(8, 4095);

  Tlc.set(11, 4095);

  Tlc.set(13, 4095);

  Tlc.set(16, 4095);
  Tlc.set(17, 4095);
  Tlc.set(18, 4095);
  Tlc.update();
  delay(1000);
  
  
  //0:25
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(2, 4095);
  Tlc.set(4, 4095);
  
  Tlc.set(10, 4095);

  Tlc.set(14, 4095);
  
  Tlc.set(20, 4095);
  Tlc.set(22, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  //END
  
  
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(4, 4095);
  
  Tlc.set(5, 4095);
  Tlc.set(9, 4095);
  
  Tlc.set(10, 4095);
  Tlc.set(14, 4095);
  
  Tlc.set(15, 4095);
  Tlc.set(19, 4095);
  
  Tlc.set(20, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  
  Tlc.clear();
  Tlc.set(1, 4095);
  Tlc.set(3, 4095);
  
  Tlc.set(6, 4095);
  Tlc.set(8, 4095);

  Tlc.set(11, 4095);
  Tlc.set(13, 4095);

  Tlc.set(16, 4095);
  Tlc.set(18, 4095);

  Tlc.set(21, 4095);
  Tlc.set(23, 4095);
  Tlc.update();
  delay(1000);
  
  
  Tlc.clear();
  Tlc.set(2, 4095);
  Tlc.set(7, 4095);
  Tlc.set(12, 4095);
  Tlc.set(17, 4095);
  Tlc.set(22, 4095);
  Tlc.update();
  delay(1000);
  
  
    Tlc.clear();
  Tlc.set(1, 4095);
  Tlc.set(2, 4095);
  Tlc.set(3, 4095);
  Tlc.set(6, 4095);
  Tlc.set(7, 4095);
  Tlc.set(8, 4095);
  Tlc.set(11, 4095);
  Tlc.set(12, 4095);
  Tlc.set(13, 4095);
  Tlc.set(16, 4095);
  Tlc.set(17, 4095);
  Tlc.set(18, 4095);
  Tlc.set(21, 4095);
  Tlc.set(22, 4095);
  Tlc.set(23, 4095);
  Tlc.update();
  delay(1000);
  
  
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 4095);
  Tlc.set(2, 4095);
  Tlc.set(3, 4095);
  Tlc.set(4, 4095);
  Tlc.set(5, 4095);
  Tlc.set(6, 4095);
  Tlc.set(7, 4095);
  Tlc.set(8, 4095);
  Tlc.set(9, 4095);
  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  Tlc.set(12, 4095);
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);
  Tlc.set(15, 4095);
  Tlc.set(16, 4095);
  Tlc.set(17, 4095);
  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.set(20, 4095);
  Tlc.set(21, 4095);
  Tlc.set(22, 4095);
  Tlc.set(23, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(2000);
  
  for(int i = 0; i < 10; i++)
  {
    Tlc.clear();
  Tlc.set(0, 1000);
  Tlc.set(1, 4095);
  Tlc.set(2, 1000);
  Tlc.set(3, 4095);
  Tlc.set(4, 1000);
  Tlc.set(5, 4095);
  Tlc.set(6, 1000);
  Tlc.set(7, 4095);
  Tlc.set(8, 1000);
  Tlc.set(9, 4095);
  Tlc.set(10, 1000);
  Tlc.set(11, 4095);
  Tlc.set(12, 1000);
  Tlc.set(13, 4095);
  Tlc.set(14, 1000);
  Tlc.set(15, 4095);
  Tlc.set(16, 1000);
  Tlc.set(17, 4095);
  Tlc.set(18, 1000);
  Tlc.set(19, 4095);
  Tlc.set(20, 1000);
  Tlc.set(21, 4095);
  Tlc.set(22, 1000);
  Tlc.set(23, 4095);
  Tlc.set(24, 1000);
  Tlc.update();
  delay(200);
  
    Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 1000);
  Tlc.set(2, 4095);
  Tlc.set(3, 1000);
  Tlc.set(4, 4095);
  Tlc.set(5, 1000);
  Tlc.set(6, 4095);
  Tlc.set(7, 1000);
  Tlc.set(8, 4095);
  Tlc.set(9, 1000);
  Tlc.set(10, 4095);
  Tlc.set(11, 1000);
  Tlc.set(12, 4095);
  Tlc.set(13, 1000);
  Tlc.set(14, 4095);
  Tlc.set(15, 1000);
  Tlc.set(16, 4095);
  Tlc.set(17, 1000);
  Tlc.set(18, 4095);
  Tlc.set(19, 1000);
  Tlc.set(20, 4095);
  Tlc.set(21, 1000);
  Tlc.set(22, 4095);
  Tlc.set(23, 1000);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(200);
  }
  
    
    
  
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 4095);
  Tlc.set(2, 4095);
  Tlc.set(3, 4095);
  Tlc.set(4, 4095);
  Tlc.set(5, 4095);
  Tlc.set(6, 4095);
  Tlc.set(7, 4095);
  Tlc.set(8, 4095);
  Tlc.set(9, 4095);
  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  Tlc.set(12, 4095);
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);
  Tlc.set(15, 4095);
  Tlc.set(16, 4095);
  Tlc.set(17, 4095);
  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.set(20, 4095);
  Tlc.set(21, 4095);
  Tlc.set(22, 4095);
  Tlc.set(23, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  
  
    Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 4095);
  Tlc.set(2, 4095);
  Tlc.set(3, 4095);
  Tlc.set(4, 4095);
  Tlc.set(5, 4095);
  Tlc.set(6, 4095);
  Tlc.set(8, 4095);
  Tlc.set(9, 4095);
  Tlc.set(10, 4095);
  Tlc.set(14, 4095);
  Tlc.set(15, 4095);
  Tlc.set(16, 4095);
  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.set(20, 4095);
  Tlc.set(21, 4095);
  Tlc.set(22, 4095);
  Tlc.set(23, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  
    Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 4095);
  Tlc.set(2, 4095);
  Tlc.set(3, 4095);
  Tlc.set(4, 4095);
  Tlc.set(5, 4095);
  Tlc.set(6, 4095);
  Tlc.set(7, 4095);
  Tlc.set(8, 4095);
  Tlc.set(9, 4095);

  Tlc.set(15, 4095);
  Tlc.set(16, 4095);
  Tlc.set(17, 4095);
  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.set(20, 4095);
  Tlc.set(21, 4095);
  Tlc.set(22, 4095);
  Tlc.set(23, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  
    Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 4095);
  Tlc.set(2, 4095);
  Tlc.set(3, 4095);
  Tlc.set(4, 4095);

  Tlc.set(20, 4095);
  Tlc.set(21, 4095);
  Tlc.set(22, 4095);
  Tlc.set(23, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(4, 4095);

  Tlc.set(12, 4095);

  Tlc.set(20, 4095);

  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
}

void actouf(){

//A
  Tlc.clear();
  Tlc.set(1, 4095);
  Tlc.set(2, 4095);
  Tlc.set(3, 4095);
  Tlc.set(5, 4095);

  Tlc.set(9, 4095);
  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  Tlc.set(12, 4095);
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);
  Tlc.set(15, 4095);

  Tlc.set(19, 4095);
  Tlc.set(20, 4095);

  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
	
//C
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 4095);
  Tlc.set(2, 4095);
  Tlc.set(3, 4095);
  Tlc.set(4, 4095);
  
  Tlc.set(9, 4095);
  Tlc.set(14, 4095);
  Tlc.set(19, 4095);

  Tlc.set(20, 4095);
  Tlc.set(21, 4095);
  Tlc.set(22, 4095);
  Tlc.set(23, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  //T
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 4095);
  Tlc.set(2, 4095);
  Tlc.set(3, 4095);
  Tlc.set(4, 4095);

  Tlc.set(7, 4095);
  Tlc.set(12, 4095);
  Tlc.set(17, 4095);
  Tlc.set(22, 4095);

  Tlc.update();
  delay(1000);
  
  //O
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 4095);
  Tlc.set(2, 4095);
  Tlc.set(3, 4095);
  Tlc.set(4, 4095);
  Tlc.set(5, 4095);

  Tlc.set(9, 4095);
  Tlc.set(10, 4095);

  Tlc.set(14, 4095);
  Tlc.set(15, 4095);

  Tlc.set(19, 4095);
  Tlc.set(20, 4095);
  Tlc.set(21, 4095);
  Tlc.set(22, 4095);
  Tlc.set(23, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  //U
  Tlc.clear();
  Tlc.set(0, 4095);

  Tlc.set(4, 4095);
  Tlc.set(5, 4095);

  Tlc.set(9, 4095);
  Tlc.set(10, 4095);

  Tlc.set(14, 4095);
  Tlc.set(15, 4095);

  Tlc.set(19, 4095);
  Tlc.set(20, 4095);
  Tlc.set(21, 4095);
  Tlc.set(22, 4095);
  Tlc.set(23, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(1000);
  
  //F
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 4095);
  Tlc.set(2, 4095);
  Tlc.set(3, 4095);
  Tlc.set(4, 4095);
  
  Tlc.set(9, 4095);
  Tlc.set(14, 4095);
  
  Tlc.set(13, 4095);
  Tlc.set(12, 4095);
  Tlc.set(19, 4095);
  Tlc.set(24, 4095);

  Tlc.update();
  delay(1000);
}

void respire(){

  for (int intens = 0; intens <= 4095; intens += intens+5) 
  {
    Tlc.clear();
   
    for (int channel = 0; channel < 25; channel++) {
      Tlc.set(channel, intens);
    }

    Tlc.update();
    delay(500);
  }
delay(1000);
}

void cube(){
  
  for(int i = 0; i < 15; i++)
  {
    Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(2, 4095);
  Tlc.set(4, 4095);
  
  Tlc.set(10, 4095);
   Tlc.set(12, 1000);
  Tlc.set(14, 4095);
  
  Tlc.set(20, 4095);
  Tlc.set(22, 4095);
  Tlc.set(24, 4095);
  
    Tlc.set(1, 1000);
  Tlc.set(3, 1000);
  
  Tlc.set(5, 1000);
  Tlc.set(9, 1000);
  
  Tlc.set(15, 1000);
  Tlc.set(19, 1000);
  
  Tlc.set(21, 1000);
  Tlc.set(23, 1000);
  Tlc.update();
  delay(200);
  
  
  Tlc.clear();
  Tlc.set(1, 4095);
  Tlc.set(3, 4095);
  
  Tlc.set(5, 4095);
  Tlc.set(9, 4095);
  Tlc.set(12, 4095);
  Tlc.set(15, 4095);
  Tlc.set(19, 4095);
  
  Tlc.set(21, 4095);
  Tlc.set(23, 4095);
  
  Tlc.set(0, 1000);
  Tlc.set(2, 1000);
  Tlc.set(4, 1000);
  
  Tlc.set(10, 1000);
  Tlc.set(14, 1000);
  
  Tlc.set(20, 1000);
  Tlc.set(22, 1000);
  Tlc.set(24, 1000);
  Tlc.update();
  delay(200);
  }
  
    for(int i = 0; i < 10; i++)
  {
  Tlc.clear();
  Tlc.set(6, 4095);
  Tlc.set(8, 4095);
  Tlc.set(16, 4095);
  Tlc.set(18, 4095);
  Tlc.set(7, 1000);
  Tlc.set(12, 1000);
  Tlc.set(13, 1000);
  Tlc.set(17, 1000);
  Tlc.set(11, 1000);
  Tlc.update();
  delay(200);
  
  Tlc.clear();
  Tlc.set(7, 4095);
  Tlc.set(13, 4095);
  Tlc.set(17, 4095);
  Tlc.set(11, 4095);
  Tlc.set(12, 4095);
  Tlc.set(6, 1000);
  Tlc.set(8, 1000);
  Tlc.set(16, 1000);
  Tlc.set(18, 1000);
  Tlc.update();
  delay(200);
}


for(int i = 0; i < 2; i++)
  {
  Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 4095);
  Tlc.set(5, 4095);
  Tlc.set(6, 4095);

  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.set(23, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(500);


  Tlc.clear();
  Tlc.set(5, 4095);
  Tlc.set(6, 4095);
  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);
  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.update();
  delay(500);


  Tlc.clear();
  Tlc.set(8, 4095);
  Tlc.set(9, 4095);
  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);
  Tlc.set(15, 4095);
  Tlc.set(16, 4095);
  Tlc.update();
  delay(500);
  
    Tlc.clear();
  Tlc.set(3, 4095);
  Tlc.set(4, 4095);
  Tlc.set(8, 4095);
  Tlc.set(9, 4095);
  
  Tlc.set(15, 4095);
  Tlc.set(16, 4095);
  Tlc.set(20, 4095);
  Tlc.set(21, 4095);
  Tlc.update();
  delay(500);
  
  
    Tlc.clear();
  Tlc.set(8, 4095);
  Tlc.set(9, 4095);
  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);
  Tlc.set(15, 4095);
  Tlc.set(16, 4095);
  Tlc.update();
  delay(500);
  
  
  Tlc.clear();
  Tlc.set(5, 4095);
  Tlc.set(6, 4095);
  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);
  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.update();
  delay(500);
  
    Tlc.clear();
  Tlc.set(0, 4095);
  Tlc.set(1, 4095);
  Tlc.set(5, 4095);
  Tlc.set(6, 4095);

  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.set(23, 4095);
  Tlc.set(24, 4095);
  Tlc.update();
  delay(500);
  
    Tlc.clear();
  Tlc.set(2, 4095);
  Tlc.set(1, 4095);
  Tlc.set(7, 4095);
  Tlc.set(6, 4095);

  Tlc.set(18, 4095);
  Tlc.set(17, 4095);
  Tlc.set(23, 4095);
  Tlc.set(22, 4095);
  Tlc.update();
  delay(500);
  
  
      Tlc.clear();
  Tlc.set(2, 4095);
  Tlc.set(3, 4095);
  Tlc.set(7, 4095);
  Tlc.set(8, 4095);

  Tlc.set(16, 4095);
  Tlc.set(17, 4095);
  Tlc.set(21, 4095);
  Tlc.set(22, 4095);
  Tlc.update();
  delay(500);
  
  
      Tlc.clear();
  Tlc.set(3, 4095);
  Tlc.set(4, 4095);
  Tlc.set(8, 4095);
  Tlc.set(9, 4095);
  
  Tlc.set(15, 4095);
  Tlc.set(16, 4095);
  Tlc.set(20, 4095);
  Tlc.set(21, 4095);
  Tlc.update();
  delay(500);
  
      
    Tlc.clear();
  Tlc.set(8, 4095);
  Tlc.set(9, 4095);
  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);
  Tlc.set(15, 4095);
  Tlc.set(16, 4095);
  Tlc.update();
  delay(500);
  
  


  Tlc.clear();
  Tlc.set(5, 4095);
  Tlc.set(6, 4095);
  Tlc.set(10, 4095);
  Tlc.set(11, 4095);
  
  Tlc.set(13, 4095);
  Tlc.set(14, 4095);
  Tlc.set(18, 4095);
  Tlc.set(19, 4095);
  Tlc.update();
  delay(500);  
  }
}
