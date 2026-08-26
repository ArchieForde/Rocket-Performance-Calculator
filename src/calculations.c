#include <stdio.h>
#include <math.h>

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