#include <iostream>
#include <string>
#include <time.h>
#include <fstream>
using namespace std;
int main()
{
    ifstream fileQuestAnswer("domandeRisposte.txt"); // apro file di tutte domande risposte
    ifstream fileRisposteGiuste("risposteEsatte.txt");// apro file di tutte risposte giuste
    ofstream fileGiaUscite("domandeGiaUscite.txt");// volevo stampare su file le domande gia uscite ma penso non serva
    if ((fileQuestAnswer.is_open()) && (fileRisposteGiuste.is_open())) //sono aperti domande e risposte e risposte giuste
    {
        cout << "fileOk" << endl;
    }
    else
    {
        cout << "noFile" << endl;
    }
    srand(time(NULL)); // random sull orario
    bool giaUscite[30]; //vero e falso su indice di domanda gia uscite
    for (int y = 0; y < 30; y++)
    {
        giaUscite[y] == false; // tutto l'arrey è inizialmente falso diventa vero più giu
    }
    int indiceDomanda = 0;
    int rigaDomanda = 0;
    indiceDomanda = rand() % 30; 
    //rigaDomanda = indiceDomanda * 5; 
    while (giaUscite[indiceDomanda] == true) //solo se vero
    {
        indiceDomanda = rand() % 30; //random su 30 numeri
        rigaDomanda = indiceDomanda * 5;// moltiplica random trovato per 5 
        cout << indiceDomanda << endl;
        cout << rigaDomanda << endl;
    }
    cout << indiceDomanda << endl;
    cout << rigaDomanda << endl;
    string questAnswer; // file stampato su stringa 
    string risposteGiuste; 
    int contatore = 0; // contatore su righe da stampare
    //while(getline(fileRisposteGiuste,risposteGiuste)) volevo far scorrere le risposte giuste
    // bisogna inizializzare o un int o una string per risposta giusta
    while (getline(fileQuestAnswer, questAnswer))
    {
        contatore++; // contatore che aumenta
        for(int i=1;i<6;i++){
        if (contatore == rigaDomanda + i){ //se contatore trova l indice stampa da indice fino a 5
            cout<< questAnswer << endl;
            }
        }
       // cout<< "scrivi as-aa-11 per risposta giusta" << endl;
       // cin >> risposta << endl;//risposta - lettera - numero
      // while(getline(fileRisposteGiuste,risposteGiuste))
       //{
        //if(risposta == risposteGiuste){
           // cout<< "giusto!" << endl;
       // }
      // }
    }        
}

