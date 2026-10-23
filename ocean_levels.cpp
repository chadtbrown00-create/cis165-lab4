
#include <iostream>
using namespace std;

int main() {
    const double OCEAN_RISE_PER_YEAR = 1.5;

    const int YEARS_5 = 5;
    const int YEARS_7 = 7;
    const int YEARS_10 = 10;

    double rise_5_years = OCEAN_RISE_PER_YEAR * YEARS_5;
    double rise_7_years = OCEAN_RISE_PER_YEAR * YEARS_7;
    double rise_10_years = OCEAN_RISE_PER_YEAR * YEARS_10;

    cout << "Ocean-level rise after 5 years: "
         << rise_5_years << " millimeters" << endl;
    cout << "Ocean-level rise after 7 years: "
         << rise_7_years << " millimeters" << endl;
    cout << "Ocean-level rise after 10 years: "
         << rise_10_years << " millimeters" << endl;

    return 0;
}

