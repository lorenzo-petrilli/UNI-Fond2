# Compilatore e linker 
### Capiamo ora due parti importanti del linguaggio c++
per capire meglio come funziona c++ " under the hood " dobbiamo capire due passaggi fondamentali di quando andiamo a compilare il nostro codice
Il compilatore C++ prende il nostro codice C++ e lo converte in codice macchina che il nostro computer può eseguire. Lo fa in due fasi principali:

1. Preelaborazione: Il preelaboratore prende il nostro codice C++ e fa alcune trasformazioni di base su di esso. Ad esempio, sostituisce le istruzioni #include con il contenuto dei file inclusi.
2. Compilazione: Il compilatore prende il codice preelaborato e lo converte in codice macchina. Questo comporta diverse fasi, tra cui la tokenizzazione del codice, l'analisi del codice, la generazione di un albero sintattico astratto e la generazione del codice macchina.

## Le fasi della compilazione
### 