#include <stdio.h>
#include <stdbool.h>
#include "input.h"
#include "calculations.h"

int main(void) {

    int choice = 0;
    int c;
    bool running = true;


    while(running) {

        printf("\n=====================================\n");
        printf("=       Rocket Mission Analysis       =\n");
        printf("=======================================\n\n");

        printf("1) Calculate Delta-V. \n");
        printf("2) Quit\n\n");
        printf("\nEnter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid Input.\n");
            while((c = getchar()) != '\n' && c != EOF);
            continue;
        }

        switch (choice)
        {
            case 1: {

                printf("\n==========================\n");
                printf("=    Calculate Delta-V   =\n");
                printf("==========================\n");
                printf("\n");

                double initialMass = getInitialMass();
                printf("\n");

                double finalMass = getFinalMass();
                printf("\n");

                double specificImpulse = getSpecificImpulse();
                printf("\n");

                double propellantMass = calculatePropellantMass(initialMass, finalMass);
                double massRatio = calculateMassRatio(initialMass, finalMass);
                double DeltaV = calculateDeltaV(specificImpulse, initialMass, finalMass);

                printf("==== Answers ====\n\n");

                printf("The propellant mass of the Rocket is %.2f kg\n\n", propellantMass);
                printf("The mass ratio of the Rocket is %.2f\n\n", massRatio);
                printf("The Delta-V value of the Rocket is %.2f m/s\n\n", DeltaV);
                
                break;
            }
            case 2: 
                running = false;
                break;
            default:
                printf("Please enter 1 or 2.\n");

        }
    }

    return 0;
}