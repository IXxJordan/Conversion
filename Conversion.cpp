#include "Conversion.h"

double Conversion::ConvertDistance(double value, string unitA, string unitB)
{
	double result = 0;

    if (unitA == "mm") // ######################## Metric ########################
    {
        if (unitB == "cm") { result = value / 10; }
        else if (unitB == "mtr") { result = value / 1000; }
        else if (unitB == "km") { result = value / 1000000; }
        else if (unitB == "in") { result = value / 25.4; }
        else if (unitB == "ft") { result = value / 305; }
        else if (unitB == "yrd") { result = value / 914; }
        else if (unitB == "mi") { result = (value / 1.609344) / 1000000; }
    }
    else if (unitA == "cm")
    {
        if (unitB == "mm") { result = value * 10; }
        else if (unitB == "mtr") { result = value / 100; }
        else if (unitB == "km") { result = value / 100000; }
        else if (unitB == "in") { result = value / 2.54; }
        else if (unitB == "ft") { result = value / 30.48; }
        else if (unitB == "yrd") { result = value / 91.44; }
        else if (unitB == "mi") { result = value / 160934.4; }
    }
    else if (unitA == "mtr")
    {
        if (unitB == "mm") { result = value * 1000; }
        else if (unitB == "cm") { result = value * 100; }
        else if (unitB == "km") { result = value / 1000; }
        else if (unitB == "in") { result = value * 39.37; }
        else if (unitB == "ft") { result = value * 3.281; }
        else if (unitB == "yrd") { result = value * 1.094; }
        else if (unitB == "mi") { result = value / 1609.344; }
    }
    else if (unitA == "km")
    {
        if (unitB == "mm") { result = value * 1000000; }
        else if (unitB == "cm") { result = value * 100000; }
        else if (unitB == "mtr") { result = value * 1000; }
        else if (unitB == "in") { result = value * 39370; }
        else if (unitB == "ft") { result = value * 3281; }
        else if (unitB == "yrd") { result = value * 1094; }
        else if (unitB == "mi") { result = value / 1.609344; }
    }
    else if (unitA == "in") // ######################## Imperial ########################
    {
        if (unitB == "mm") { result = value * 25.4; }
        else if (unitB == "cm") { result = value * 2.54; }
        else if (unitB == "mtr") { result = value / 39.37; }
        else if (unitB == "km") { result = value / 39370; }
        else if (unitB == "ft") { result = value / 12; }
        else if (unitB == "yrd") { result = value / 36; }
        else if (unitB == "mi") { result = value / 63360; }
    }
    else if (unitA == "ft") 
    {
        if (unitB == "mm") { result = value * 304.8; }
        else if (unitB == "cm") { result = value * 30.48; }
        else if (unitB == "mtr") { result = value / 3.281; }
        else if (unitB == "km") { result = value / 3281; }
        else if (unitB == "in") { result = value * 12; }
        else if (unitB == "yrd") { result = value / 3; }
        else if (unitB == "mi") { result = value / 5280; }
    }
    else if (unitA == "yrd")
    {
        if (unitB == "mm") { result = value * 914; }
        else if (unitB == "cm") { result = value * 91.44; }
        else if (unitB == "mtr") { result = value / 1.094; }
        else if (unitB == "km") { result = (value / 1.094) / 1000; }
        else if (unitB == "in") { result = value * 36; }
        else if (unitB == "ft") { result = value * 3; }
        else if (unitB == "mi") { result = value / 1760; }
    }
    else if (unitA == "mi")
    {
        if (unitB == "mm") { result = value * 1609344; }
        else if (unitB == "cm") { result = value * 160934.4; }
        else if (unitB == "mtr") { result = value * 1609.344; }
        else if (unitB == "km") { result = value * 1.609344; }
        else if (unitB == "in") { result = value * 63360; }
        else if (unitB == "ft") { result = value * 5280; }
        else if (unitB == "yrd") { result = value * 1760; }
    }
    else
    {
        cout << "ERROR: Unit of conversion is not recognised!\n";
    }
	return result;
}

/*
*  Metric -> Millimeter (mm), Centimeter (cm), Meter (mtr), Kilometer (km)
*  Imperial -> inch (in), foot (ft), yard (yrd), mile (mi)
*/