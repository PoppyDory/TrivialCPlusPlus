#include <iostream>
#include <string>
#include <time.h>
#include <fstream>
using namespace std;
int main()
{
    ifstream fileQuestAnswer("domandeRisposte.txt");                   // apro file di tutte domande risposte
    ifstream fileRisposteGiuste("risposteGiuste.txt");                 // apro file di tutte risposte giuste
    
    if ((fileQuestAnswer.is_open()) && (fileRisposteGiuste.is_open())) // sono aperti domande e risposte e risposte giuste
    {
        cout << "fileOk" << endl;
    }
    else
    {
        cout << "noFile" << endl;
    }
    srand(time(NULL));  // random sull orarion
    
    bool domandeGiaChieste[30]; 
    
    for (int y = 0; y < 30; y++)
    {
        domandeGiaChieste[y] = false; // tutto l'arrey è inizialmente falso, diventa vero quando faccio una domanda 
    }
    
    int indiceDomanda = 0;
    int rigaDomanda = 0;
    
    do
    {
        indiceDomanda = rand() % 31;
    } while (domandeGiaChieste[indiceDomanda] == true); // solo se vero

    rigaDomanda = indiceDomanda * 5 +1;

    string questAnswer; // file stampato su stringa

    int contatore = 0; // contatore su righe da stampare
    string risposte[5];
    // while(getline(fileRisposteGiuste,risposteGiuste)) volevo far scorrere le risposte giuste
    //  bisogna inizializzare o un int o una string per risposta giusta
    cout << endl;
    while (getline(fileQuestAnswer, questAnswer))
    {
        contatore++;
        if (contatore == rigaDomanda)
        {
            cout << indiceDomanda + 1 << ". "<< questAnswer << endl;
            cout << endl; // stampo lariga della domanda
        }
    
        for (int i = 1; i < 5; i++)
        {
            if (contatore == rigaDomanda + i)
            {
                risposte[i] = questAnswer;
                cout << i << ". " << questAnswer << endl; // stampo le succhessive 4 righe con le possibili risposte e gli indici
            }
        }
    }
    cout<< endl;
    cout << "Seleziona la risposta giusta da 1 a 4: " << endl;
    int numeroRisposta = 0;
    cin >> numeroRisposta;
    
    string risposteGiuste;
    int trovaRiga = 0;
    bool seGiusto = false;
    
    while (getline(fileRisposteGiuste, risposteGiuste))
    {
        // cout << numeroRisposta <<endl ;
        trovaRiga++;
        if ((trovaRiga == indiceDomanda+1) && (risposte[numeroRisposta] == risposteGiuste))
        {
            seGiusto = true;
        } // confrontare stringa di risposteGiuste con filedomande
    }
    if (seGiusto == true)
    {
        cout << "bravo" << endl;
    }
    else
    {
        cout << "stupido" << endl;
    }
}
