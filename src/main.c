#include <stdio.h>
#include <math.h>

double getInitialMass()
    {

        double initialMass;

        printf("Please enter the initial mass of the Rocket (in kg):\n");
        fflush(stdout);
        scanf("%lf", &initialMass);

        return initialMass;
    }

double getFinalMass()
    {
        double finalMass;

        printf("Please enter the final mass of the Rocket (in kg):\n");
        fflush(stdout);
        scanf("%lf", &finalMass);

        return finalMass;
    }

double getSpecificImpulse() {

    double specificImpulse;

    printf("Please enter the specific impulse of the Rocket (in seconds):\n");
    fflush(stdout);
        scanf("%lf", &specificImpulse);

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