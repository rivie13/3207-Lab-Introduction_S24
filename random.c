/*random.c
* created for: 3207 OS and systems programming
* created by: Riviera sperduto
* last edited: 1/19/2024
*/

/*create a program that will select
*a random character a - z 
*just using lowercase because doesn't
*really matter      
*/

#include "random.h"
#include <stdlib.h>


int randchar()
{
    //ascii lowercase numbers are from 97 to 122
    //need to adjust by one because of 0 index
    //mod by the specific range then add minimum
    // to get into the actual number range
    // this is because the range of numbers is less
    // than where the letters start 
   return (rand() % (122 + 1 - 97) + 97);
}