#include <stdio.h>
#include <math.h>

double getInitialMass(void)
    {

        double initialMass;
        int c;

        printf("Please enter the initial mass of the Rocket (in kg):\n");
        fflush(stdout);

        while(1) {

            if(scanf("%lf", &initialMass) != 1) {

                printf("Please enter a valid number.\n\n");

                while ((c = getchar()) != '\n' && c != EOF );
                printf("Please enter the initial mass of the Rocket (in kg):\n");
            }
            else if(initialMass <= 0) {

                printf("Please enter a number greater than 0.\n\n");
                }
            else {
                break;
            }
        }

        return initialMass;
    }

double getFinalMass()
    {
        double finalMass;
        int c;

        printf("Please enter the final mass of the Rocket (in kg):\n");
        fflush(stdout);

        while(1) {
            if(scanf("%lf", &finalMass) != 1) {

                printf("Please enter a valid number.\n\n");

                while((c = getchar()) != '\n' && c != EOF) {

                }

                printf("Please enter the final mass of the Rocket (in kg):\n");
            }
            else if(finalMass <= 0) {

                printf("Please enter a number greater than 0.\n\n");

                while(finalMass <= 0) {

                     printf("Please enter the final mass of the Rocket (in kg):\n");
                     scanf("%lf", &finalMass);

                }
            }
            else {
                break;
            }

        }
        
        return finalMass;
    }

double getSpecificImpulse() {

    double specificImpulse;
    int c;

    printf("Please enter the specific impulse of the Rocket (in seconds):\n");
    fflush(stdout);

    while(1) {
        
        if(scanf("%lf", &specificImpulse) != 1) {

            printf("Please enter a valid number.\n\n");

            while((c = getchar()) != '\n' && c != EOF) {

            }

            printf("Please enter the specific impulse of the Rocket (in seconds):\n");
        }
        else if( specificImpulse <= 0) {
            printf("Please enter a valid number greater than 0.\n\n");

            while(specificImpulse <= 0) {
                printf("Please enter the specific impulse of the Rocket (in seconds):\n");
                scanf("%lf", &specificImpulse);
            }
        }
        else{
            break;
        }
    }

    

    return specificImpulse;
}

double calculatePropellantMass(double initialMass, double finalMass) {

    double propellantMass = initialMass  - finalMass;

    return propellantMass;
}

double calculateMassRatio(double initialMass, double finalMass) {

    double massRatio = initialMass / finalMass;

    return massRatio;
}

double calculateDeltaV(double specificImpulse, double initialMass, double finalMass) {

    const double earthGravity = 9.80665;
    double massRatio = calculateMassRatio(initialMass, finalMass);
    double logOfRatio = log(massRatio);

    double DeltaV = specificImpulse * earthGravity * logOfRatio;

    return DeltaV;

} 


int main() {

    double initialMass = getInitialMass();    
    double finalMass = getFinalMass();
    double specificImpulse = getSpecificImpulse();
    double propellantMass = calculatePropellantMass(initialMass, finalMass);
    double massRatio = calculateMassRatio(initialMass, finalMass);
    double DeltaV = calculateDeltaV(specificImpulse, initialMass, finalMass);

    printf("The propellant mass of the Rocket is %.2f kg\n", propellantMass);
    printf("The mass ratio of the Rocket is %.2f\n", massRatio);
    printf("The Delta-V value of the Rocket is %.2f m/s\n", DeltaV);

    return 0;
}