#ifndef UTENTE_H
#define UTENTE_H

class Utente {
    private:
    string nome;
    int punteggio;
    int partite;

    public: 
    //costruttore 
    Utente( string nome, int punteggio){
        nome=nome;
        punteggio=punteggio;
        partite =0;
    }

    string getNome()
    {
        return nome;
    }
    int getPunteggio()
    {
        return punteggio;
    }

    void incrementaPunteggio(int punti)
    {
        punteggio+=punti;
    }

    void finePartita()
    {
        partite++;
    }

    int getPartite()
    {
        return partite;
    }
   
}; 
#endif