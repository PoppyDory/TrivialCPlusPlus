# TrivialCPlusPlus
<b> Presentazione del progetto di fine corso </B><br>

Il seguente progetto è stato realizzato da Marzia, Rosita e Valerio per la chiusura del corso di programmazione in C++ organizzato da AstroIT in collaborazione con Umana.
Il programma rappresenta un semplice gioco a risposta multipla.
Il programma è stato sviluppato con argomentazioni studiate ed approfondite in questo corso. 

<B> Trivial Pursuit versione C++ </b>

<u> Spiegazione dell'esercizio in pseudocodice </u>

1 -Inizializziamo un array bool domande[30] <br>
2 -Inizializziamo un array string risposte[30] <br>
3 - apriamo file quiz (ifstream)<br>
4 - scelgo numero random % 30<br>
5 - controllo bool domande se true (gia chiesta) chiediamo nuova domanda <br>
6 - nuovo numero random se false -------> moltiplichiamo per 5 e prendiamo la 7 7 - linea corrispondente nel file <br>
8 - stampiamo domanda corrispondente + le 4 righe (riposte) <br> 
9 - utente sceglie risposta <br>
10 - se risposta scelta presente in array risposte ----> stampa esatto -----> contatotre ++, contatore(servira' per punteggio finale)<br>
11 - se risposta non è presente in array risposte sbagliate stampa sbagliato 
12 - per terminare partita "frase".<br>