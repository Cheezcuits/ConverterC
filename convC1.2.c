#include <iostream>
#include <stdio.h>

void Welcome() {
    printf("Welcome to CheddarConv! v1.2\n[Do note, this code sucks so bad. Don't copy this.] \n");
    printf("   \n");
}

void toMeasure(int &measureMode) {
    printf("Choose what to measure:\n ");
    printf("(1)Length \n (2)Weight \n>");
    scanf("%d", &measureMode);
}

void Mode(int &conversionMode) {
    printf("Choose a mode you're converting to. \n");
    printf("(1)Metric to Imperial \n(2)Imperial to Metric \n>");
    scanf("%d", &conversionMode);
}

void enterValue (double &value){
    printf("Please input your number.");
    scanf("%lf", &value); // Don't change the %lf to %.10lf in this line, it will screw the whole program. AND I DONT KNOW WHY!
}
void chooseLMetricUnit(int &unitLength1) {
    printf("Please choose a unit. \n");
    printf("(1)km / Kilometer to mi / Miles \n(2)m / Meter to yd / Yard \n(3)cm / Centimeter to ft / Foot \n(4)mm / Millimeter to in / Inches \n>");
    scanf("%d", &unitLength1);
}

void chooseLImperialUnit(int &unitLength2) {
    printf("Please choose a unit. \n");
    printf("(1)mi / Miles to  kg / Kilometer \n(2)yd / Yard  to m / Meter \n(3)ft / Foot to cm / Centimeter \n(4)in / inches to mm / Millimeter \n>");
    scanf("%d", &unitLength2);
}

void chooseWMetricUnit(int &unitWeight1) {
    printf("Please choose a unit. \n");
    printf("(1)kg / Kilogram to lbs / Pounds \n(2)kg / Kilogram to oz / ounce \n(3)g / Grams to lbs / Pounds / Ounce \n(4)g / Grams to oz \n>");
    scanf("%d", &unitWeight1);
}

void chooseWImperialUnit(int &unitWeight2) {
    printf("Please choose a unit. \n");
    printf("(1)lbs / Pounds to kg /Kilograms \n(2)lbs / Pounds to g / Grams \n(3)oz / Ounce to kg / Kilograms \n(4)oz / Ounce to g / Grams \n>");
    scanf("%d", &unitWeight2);
}


int main() {
    int conversionMode, measureMode, unitLength1, unitLength2, unitWeight1, unitWeight2;
    double value, Result;

    Welcome();
    toMeasure(measureMode);
    Mode(conversionMode);
    enterValue(value); 

    // the computation part 
    switch(measureMode){
    case 1: //length
        switch (conversionMode) {
            case 1: // Metric to Imperial
                chooseLMetricUnit(unitLength1);
                if (unitLength1 == 1) {
                    Result = value / 1.60934;
                    printf("It is approximately %.10lf mi", Result);
                } 
                else if (unitLength1 == 2) {
                    Result = value * 1.09361;
                    printf("It is approximately %.10lf yd", Result);
                } 
                else if (unitLength1 == 3) {
                    Result = value / 30.48;
                    printf("It is approximately %.10lf ft", Result);
                } 
                else if (unitLength1 == 4) {
                    Result = value / 25.4;
                    printf("It is approximately %.10lf in", Result);
                } 
                else {
                    printf("Invalid conversion mode choice.\n");
                }
                break;

            case 2: // Imperial to Metric
                chooseLImperialUnit(unitLength2);
                if (unitLength2 == 1) {
                    Result = value * 1.60934;
                    printf("It is approximately %.10lf km", Result);
                } 
                else if (unitLength2 == 2) {
                    Result = value / 1.09361;
                    printf("It is approximately %.10lf m", Result);
                } 
                else if (unitLength2 == 3) {
                    Result = value * 30.48;
                    printf("It is approximately %.10lf cm", Result);
                } 
                else if (unitLength2 == 4) {
                    Result = value * 25.4;
                    printf("It is approximately %.10lf mm", Result);
                } 
                else {
                    printf("Invalid conversion mode choice.\n");
                }
                break;

            default:
                printf("Invalid conversion mode choice.\n");
                break;
        }
        break;
    case 2: //weight
        switch (conversionMode) {
            case 1: // Metric to Imperial
                chooseWMetricUnit(unitWeight1);
                if (unitWeight1 == 1) {
                    Result = value * 2.20462;
                    printf("It is approximately %.10lf lbs", Result);
                }
                else if (unitWeight1 == 2) {
                    Result = value * 35.274;
                    printf("It is approximately %.10lf oz", Result);
                }
                else if (unitWeight1 == 3) {
                    Result = value / 453.592;
                    printf("It is approximately %.10lf lbs", Result);
                }
                else if (unitWeight1 == 4) {
                    Result = value /28.3495;
                    printf("It is approximately %.10lf oz", Result);
                } 
                else {
                    printf("Invalid conversion mode choice.\n");
                }
                break;
            case 2: //Imperial to Metric
                chooseWImperialUnit(unitWeight2);
                if (unitWeight2 == 1) {
                    Result = value / 2.20462;
                    printf("It is approximately %.10lf kg", Result);
                } 
                else if (unitWeight1 == 2) {
                    Result = value / 35.274;
                    printf("It is approximately %.10lf g", Result);
                }
                else if (unitWeight1 == 3) {
                    Result = value * 453.592;
                    printf("It is approximately %.10lf kg", Result);
                }
                else if (unitWeight2 == 4) {
                    Result = value * 28.3495;
                    printf("It is approximately %.10lf g", Result);
                } 
                else {
                    printf("Invalid conversion mode choice.\n");
                }
                break;
            
            default:
                printf("Invalid conversion mode choice.\n");
                break;
        }
    }
    
    return 0;
}