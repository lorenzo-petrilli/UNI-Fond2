# Classi 
## Preambolo
#### Capiamo la differenza tra classi e struct 

Definizione di Struct
Una struct è un tipo di dato definito dall'utente che permette di raggruppare variabili sotto un unico nome. In C++, le struct sono molto simili alle classi, con alcune differenze chiave.

` Accesso Predefinito `: I membri di una struct sono pubblici per default, mentre quelli di una classe sono privati.
`Uso Storico`: Le struct sono spesso usate per raggruppare semplici dati senza funzionalità di incapsulamento.

```cpp
struct NomeStruct {
    Tipo variabile;
    void metodo();
};
```

|Classi|Struct|
|-------------------|-----------------------|
|I membri sono privati per default.|Struct: I membri sono pubblici per default.
|Utilizzata principalmente per definire oggetti con incapsulamento, ereditarietà e polimorfismo.| Utilizzata per raggruppare semplici dati senza la necessità di incapsulamento.|
|Supporta ereditarietà pubblica, protetta e privata.|Struct: Supporta ereditarietà, ma i membri ereditati sono pubblici per default.|
|Può avere più overhead dovuto all'uso delle caratteristiche OOP.|Generalmente ha meno overhead, essendo utilizzata per dati più semplici.|

