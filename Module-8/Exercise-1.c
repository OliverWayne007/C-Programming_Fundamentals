#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// static variables are only initialized once and live till the end of the program. 
// That is why they can retain their value between multiple function calls.

static int interaction_count = 0;

void buttonPress()
{
    printf("Interaction count before button press: %d\n" , interaction_count);
    printf("Button is pressed....\n");
    interaction_count++;
    printf("Interaction count after button press: %d\n" , interaction_count);

    // static variables are only initialized once and live till the end of the program. 
    // That is why they can retain their value between multiple function calls.

    static int numberOfButtonPresses = 0;
    numberOfButtonPresses += 1;
    printf("Number of times button is pressed: %d\n" , numberOfButtonPresses);

    printf("%c" , '\n');
}

int main()
{
    printf("%c" , '\n');

    buttonPress();
    buttonPress();
    buttonPress();

    printf("%c" , '\n');
    return 0;
}