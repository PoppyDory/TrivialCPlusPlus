# TrivialCPlusPlus

Trivial Pursuit versione C++

bool domande[30];
string risposte[30];
apriamo file quiz (ifstream)
scelgo numero random % 30
controllo bool domande se true (gia chiesta) chiediamo nuova domanda
nuovo numero random se false -------> moltiplichiamo per 5 e prendiamo la linea corrispondente nel file 

stampiamo domanda corrispondente + le 4 righe 
utente sceglie risposta 
se risposta scelta presente in array risposte ----> stampa esatto -----> ++ contatore(servirà per punteggio finale)
altrimenti stampa sbagliato 

per terminare partita "frase".