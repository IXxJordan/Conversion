#include "Conversion.h"

int main()
{
    double dis = 0, result = 0;
    string sUnit = "", nUnit = "";

    cout << "Conversion App\n\n";
    cout << "Units Used:\nMetric - mm | cm | mtr | km |\nImperial - in | ft | yrd | mi |\n\nExample: 100 km cm\n\n";

    while (true)
    {
        cout << "Enter data: ";
        cin >> dis >> sUnit >> nUnit;

        if (dis <= 0)
        {
            cout << "ERROR: Distance must be above 0!\n\n";
            continue;
        }

        Conversion c;
        result = c.ConvertDistance(dis, sUnit, nUnit);
        cout << "Result: " << result;
    }
    return 0;
}