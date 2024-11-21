#include "std_lib_inc.h"

double summeBerechnen(vector<double> eingabe)
{
    double summe = 0.0;
    for (double wert : eingabe)
    {
        summe += wert;
    }
    return summe;
}

int main()
{
    vector <double> abstaende = {};
    double abstand = 0.0;
    cin >> abstand;

    while(cin)
    {
        abstaende.push_back(abstand);
        cin >> abstand;
    }

    // durchschnittliche Entfernung berechnen
    double summeAbstaende = summeBerechnen(abstaende);
    cout << "Der Gesamtabstand ist " << summeAbstaende << '\n';
    return 0;
}