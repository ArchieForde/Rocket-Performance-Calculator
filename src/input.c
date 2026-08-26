#include <stdio.h>
#include "input.h"

double getInitialMass(void)
    {

        double initialMass;
        int c;

        printf("Please enter the initial mass of the Rocket (in kg):\n");
        fflush(stdout);

        while(1) {

            if(scanf("%lf", &initialMass) != 1) {

                printf("\nPlease enter a valid number.\n\n");

                while ((c = getchar()) != '\n' && c != EOF );
                printf("Please enter the initial mass of the Rocket (in kg):\n");
            }
            else if(initialMass <= 0) {

                printf("\nPlease enter a number greater than 0.\n\n");

                printf("Please enter the initial mass of the Rocket (in kg):\n");
                }
            else {
                break;
            }
        }

        return initialMass;
    }

double getFinalMass(void)
    {
        double finalMass;
        int c;

        printf("Please enter the final mass of the Rocket (in kg):\n");
        fflush(stdout);

        while(1) {
            if(scanf("%lf", &finalMass) != 1) {

                printf("Please enter a valid number.\n\n");

                while((c = getchar()) != '\n' && c != EOF);
                printf("Please enter the final mass of the Rocket (in kg):\n");
            }
            else if(finalMass <= 0) {

                printf("Please enter a number greater than 0.\n\n");

                printf("Please enter the final mass of the Rocket (in kg):\n");
            }
            else {
                break;
            }
        }
        return finalMass;
    }

double getSpecificImpulse(void) {

    double specificImpulse;
    int c;

    printf("Please enter the specific impulse of the Rocket (in seconds):\n");
    fflush(stdout);

    while(1) {
        
        if(scanf("%lf", &specificImpulse) != 1) {

            printf("Please enter a valid number.\n\n");

            while((c = getchar()) != '\n' && c != EOF);

            printf("Please enter the specific impulse of the Rocket (in seconds):\n");
        }
        else if( specificImpulse <= 0) {
            printf("Please enter a valid number greater than 0.\n\n");

            printf("Please enter the specific impulse of the Rocket (in seconds):\n");
        }
        else{
            break;
        }
    }
    return specificImpulse;
}