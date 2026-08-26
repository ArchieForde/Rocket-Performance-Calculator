#ifndef CALCULATIONS_H
#define CALCULATIONS_H

double calculatePropellantMass(double initialMass, double finalMass);
double calculateMassRatio(double initialMass, double finalMass);
double calculateDeltaV(double specificImpulse, double initialMass, double finalMass);

#endif