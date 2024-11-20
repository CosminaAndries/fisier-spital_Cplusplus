#include <iostream>

using namespace std;
class Doctor
{
    string nume;
    string specializare;



};

class Pacient
{
public:
    int varsta;
    string Nume_familie;
    string Prenume;
    char sex;
};
class Semne_Vitale
{
    double temperatura;
    int frecventa_cardiaca;
    int frecventa_respiratorie;
    int presiune_sistolica;
    int presiune_diastolica;



    void afisare_S_V()
    {
        cout<<"AFISARE SEMNE VITALE"<<endl;
        cout<<"Temperatura(°C): "<<temperatura<<endl;
        cout<<"Frecventa cardiaca(bpm): "<<frecventa_cardiaca<<endl;
        cout<<"Frecventa respiratorie(rpm): "<<frecventa_respiratorie<<endl;
        cout<<"Presiune arteriala (mm/Hg):"<<presiune_sistolica<< " "<<presiune_diastolica<<endl;
    }
// void interpretarea_rezultatelorS
    string interpretare_temperatura(double t, double varsta_temp)
    {
        if (varsta_temp>=18 && varsta_temp <= 60)
        {
            if(t>= 36.1 && t<= 37.2)
            {
                return " Normala";
            }
            else if(t<36.1)
            {
                return " Scazuta";
            }
            else if(fc>37.2)
            {
                return " Ridicata";
            }
        }
        if (age>=12 && age<18)
        {
            if(fc>=60 && fc<= 100)
            {
                return " Normala";
            }
            else if(fc<60)
            {
                return " Scazuta";
            }
            else if(fc>100)
            {
                return " Ridicata";
            }
        }
        if (age>=1 && age<=10)
        {
            if(fc>=70 && fc<=120)
            {
                return " Normala";
            }
            else if(fc<70)
            {
                return " Scazuta";
            }
            else if(fc>120)
            {
                return " Ridicata";
            }
        }
        if (age>=60)
        {
            if(fc>=35.5 && fc<=36)
            {
                return " Normala";
            }
            else if(fc<60)
            {
                return " Scazuta";
            }
            else if(fc>100)
            {
                return " Ridicata";
            }
        }

        if(age=>0 && age<1)
        {
            if(fc>=100 && fc<=160)
            {
                return " Normala";
            }
            else if(fc<100)
            {
                return " Scazuta";
            }
            else if(fc>160)
            {
                return " Ridicata";
            }
        }
    }

    string interpretare_fc(int age, int fc)
    {
        if (age>=18 && age <= 60)
        {
            if(fc>=60 && fc<= 100)
            {
                return " Normala";
            }
            else if(fc<60)
            {
                return " Scazuta";
            }
            else if(fc>100)
            {
                return " Ridicata";
            }
        }
        if (age>=12 && age<18)
        {
            if(fc>=60 && fc<= 100)
            {
                return " Normala";
            }
            else if(fc<60)
            {
                return " Scazuta";
            }
            else if(fc>100)
            {
                return " Ridicata";
            }
        }
        if (age>=1 && age<=10)
        {
            if(fc>=70 && fc<=120)
            {
                return " Normala";
            }
            else if(fc<70)
            {
                return " Scazuta";
            }
            else if(fc>120)
            {
                return " Ridicata";
            }
        }
        if (age>=60)
        {
            if(fc>=60 && fc<= 100)
            {
                return " Normala";
            }
            else if(fc<60)
            {
                return " Scazuta";
            }
            else if(fc>100)
            {
                return " Ridicata";
            }
        }

        if(age=>0 && age<1)
        {
            if(fc>=100 && fc<=160)
            {
                return " Normala";
            }
            else if(fc<100)
            {
                return " Scazuta";
            }
            else if(fc>160)
            {
                return " Ridicata";
            }
        }
    }
};
class Rezultate_Laborator
{
    class  test_urina;
    class test_sange;
    double
}


class test_urina
{
    double densitatea_urinara;
    bool leucocite;
    bool sange;
    bool bacterii;
    bool nitriti;
    bool bilirubina;
    bool urobilinogenul;
    double pH;
    string culoare;
    string aspect;
//if (densitate_urinara>1.005 && densitate_urinara<1.030){
    //  printf("Densitate ")


    void afisare_Rezultate()
    {
        // cout <<"R Urina"<
        cout<<" Densitate urinara : " <<densitatea_urinara<<interpretarea_rezultatelor(densitatea_urinara);
                <<endl;
        if(leucocite==true)
        {
            cout<<" Leucocite : Pozitiv" <<leucocite<<endl;
        }
        else
        {
            cout<<" Leucocite : Negativ" <<leucocite<<endl;
        }
        if(sange==true)
        {
            cout<<" Sange : Pozitiv"<<endl;
        }
        else
        {
            cout<<" Sange : Negativ"<<endl;
        }
        if(bacterii==true)
        {
            cout<<" Bacterii : Pozitiv"<<endl;
        }
        else
        {
            cout<<" Bacterii : Negativ"<<endl;
        }
        if(nitriti==true)
        {
            cout<<" Nitriti : Pozitiv"<<endl;
        }
        else
        {
            cout<<" Nitriti : Negativ"<<endl;
        }
        if(bilirubina==true)
        {
            cout<<" Bilirubina : Pozitiv"<<endl;
        }
        else
        {
            cout<<" Bilirubina : Negativ"<<endl;
        }
        cout<<" pH: "<<interpretarea_rezultatelor_densitatiiUrinare(double pH)<<endl;
        cout<<" Culoarea: "<< interpretarea_culoareUrina(string culoare)<<endl;
        cout<<"Aspect: "<<
    }

    void interpretarea_rezultatelor_densitatiiUrinare(double du)
    {
        if (du>1.005 && du < 1.030)
        {
            cout <<"Normal"<<;
        }
        else if (du<1.005)
        {
            cout<<"Scazut"<<;
        }
        else if (du>1.030)
        {

            cout<<"Ridicat"<<;

        }
    }
    string  interpretarea_rezultatelor_PH(double ph)
    {
        if(ph<4.5)
        {
            return"Scazut"
        }
        if(ph>=4.5&&ph=<8.0)
        {
            return "Normal";
        }
        if(ph<4.5)
        {
            return "Scazut";
        }
        else if(ph>=4.5&&ph=<8.0)
        {
            return "Normal";

        }
        else if(ph>8.0)
        {
            return"Ridicat";
        }
    }

    string interpretarea_culoareUrina(string c)
    {

        if (c== "Galben deschis" || c == "Galben pale")
        {
            cout << "Culoare normala, urina indicand hidratare adecvata." << endl;
        }
        else if (c == "Galben inchis")
        {
            cout << "Posibila deshidratare usoara." << endl;
        }
        else if (c == "Galben-verde")
        {
            cout << "Poate fi cauzata de suplimente sau medicamente." << endl;
        }
        else if (c== "Portocalie")
        {
            cout << "Poate fi cauzata de deshidratare sau medicamente." << endl;
        }
        else if (c== "Rosie" || c == "Roz")
        {
            cout << "Posibila hematurie (sange in urina), necesita consult medical." << endl;
        }
        else if (c == "Albastra" || c == "Verde")
        {
            cout << "Poate fi cauzata de medicamente sau infectii rare." << endl;
        }
        else if (c== "Maronie")
        {
            cout << "Poate semnala hematurie severa sau afecțiuni hepatice." << endl;
        }
        else if (c == "Transparenta")
        {
            cout << "Poate indica hidratare excesiva." << endl;
        }
        else
        {
            cout << "Culoare necunoscuta. Consultati un medic." << endl;
        }
    }
    string interpretare_aspectUrina(string a)
    {
        if (a== "Clar")
        {
            cout << "Aspect normal, urina limpede, indicand hidratare adecvata." << endl;
        }
        else if (a == "Tulbure")
        {
            cout << "Posibila infectie urinara sau cristale. Se recomanda un consult medical." << endl;
        }
        else if (a== "Mălai" || aspect == "Lapte")
        {
            cout << "Posibila infectie severa sau prezenta de lipide in urina. Consult medical necesar." << endl;
        }
        else if (a== "Rosie" || aspect == "Bruna")
        {
            cout << "Posibila hematurie (sange in urina), necesita consult medical." << endl;
        }
        else if (a == "Spumoasa")
        {
            cout << "Posibila proteinurie (proteine in urina), indicand o problema renala. Se recomanda consult medical." << endl;
        }
        else
        {
            cout << "Aspect necunoscut. Consultati un medic." << endl;
        }
    }
};


class test_sange()
{
private:
    double hematocrit, hemoglobina;
    int numar_globule_rosii;
    int numar_globule_albe;
    int numar_trombocite;
    double glucoza;
    double colesterol;
    double creatinina;
    double uree;

    test_sange()
    {


    }


    void afisare rezultate_Test_Sange
    {
        // cout <<"R Urina"<
        cout<<" Hematocrit : " <<hematocrit<<interpretarea_rezultatelor_Testsange(hematocrit);
                <<endl;
        cout<<" Hemoglobina : " <<hemoglobina<<interpretarea_rezultatelor_Testsange(hemoglobina );
                <<endl;
        cout<<" Numar globule rosii : " <<hematocrit<<interpretarea_rezultatelor_Testsange(hematocrit);
                <<endl;
        cout<<" Numar globule albe: " <<hematocrit<<interpretarea_rezultatelor_Testsange(hematocrit);
                <<endl;
        cout<<"Numar trombocite:"<< numar_trombocite<<interpretarea_rezultatelor_Testsange(trombocite);
        cout<<"Glucoza:"<< numar_trombocite<<interpretarea_rezultatelor_Testsange(glucoza);
        cout<<"Colesterol:"<< colesterol<<interpretarea_rezultatelor_Testsange(colesterol);
        cout<<"Creatina:"<<creatinina<<interpretarea_rezultatelor_Testsange(creatinina);
        cout <<"Uree:"<<uree<<interpretarea_rezultatelor_Testsange(uree);

    }
    string  interpretarea_rezultatelor_hematocrit(char gen, int hematocrit, int varsta_ptSange)
    {
        if ((gen=='F'|| gen='f')&&varsta_ptSange >=18){
            if (hematocrit>=37 && hematocrit=<47)
            {
                return("Normal");
            }
            else if (hematocrit<37)
            {
                return("Scazut");
            }
            else if(hematocrit>47)
            {
                return("Ridicat");
            }
        }
        if ((gen=='M'|| gen='m')&&varsta_ptSange >=18)
        {
            if (hematocrit>=40 && hematocrit=<54)
            {
                return("Normal");
            }
            else if (hematocrit<40)
            {
                return("Scazut");
            }
            else if(hematocrit>54)
            {
                return("Ridicat");
            }
        }
        if(varsta_ptSange>=1&&varsta_pt_sange<=5){ //Pentru copii mici , nu conteaza genul copilului
           if (hematocrit>=31 && hematocrit=<41)
            {
                return("Normal");
            }
            else if (hematocrit<31)
            {
                return("Scazut");
            }
            else if(hematocrit>41)
            {
                return("Ridicat");
            }
        }
        if(varsta_ptSange>=6&&varsta_pt_sange<=18){
           if (hematocrit>=35 && hematocrit=<45)
            {
                return("Normal");
            }
            else if (hematocrit<35)
            {
                return("Scazut");
            }
            else if(hematocrit>45)
            {
                return("Ridicat");
            }
        }
       if(varsta_ptSange>0&&varsta_ptSange<1)   {
        if (hematocrit>=44 && hematocrit=<64)
            {
                return("Normal");
            }
            else if (hematocrit<44)
            {
                return("Scazut");
            }
            else if(hematocrit>64)
            {
                return("Ridicat");
            }
       }

        }

string interpretarea_rezultatelor_hemoglobina(char gen2, double HGB){
     if ((gen2=='M'|| gen2='m')&&varsta_ptSange >=18){
            if (HGB>=37 && HGB=<47)
            {
                return("Normal");
            }
            else if (HGB<37)
            {
                return("Scazut");
            }
            else if(HGB>47)
            {
                return("Ridicat");
            }
        }





Bărbați adulți: 13.8-17.2 g/dL
Femei adulte: 12.1-15.1 g/dL
Copii:
Nou-născuți: 14-24 g/dL
1-5 ani: 11.5-13.5 g/dL
6-18 ani: 12.0-15.5 g/dL










}




}




}


















}  ;






int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
