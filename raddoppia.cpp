#include <iostream> // Libreria per l'input/output

int main() {
    int numero; // Variabile per memorizzare il numero inserito dall'utente

    // Chiede all'utente di inserire un numero
    std::cout << "Inserisci un numero: ";
    std::cin >> numero;

    // Calcola il risultato e lo stampa
    int risultato = numero * 2;
    std::cout << "Il risultato della moltiplicazione per 2 è: " << risultato << std::endl;

    return 0; // Indica che il programma è terminato con successo
}
