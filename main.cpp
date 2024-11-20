#include "std_lib_inc.h"

double durchschnittBerechnen (vector <double> eingabe)
{
    // if (eingabe.empty())
    //  {
    //  return 0.0;
    //  }

    double summe = 0.0;
    for (double abstand : eingabe)
    {
        summe += abstand;
    }
    return summe / eingabe.size();
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
    double durchschnittsabstand = durchschnittBerechnen(abstaende);
    cout << "Der Durchschnittsabstand ist " << durchschnittsabstand << '\n';
    return 0;
}