#include <stdio.h>

int main() {
    // Creiamo una matrice 3x3 per il gioco del tris
    int board[3][3];

    // Chiediamo all'utente di inserire i valori per ogni casella
    printf("Inserisci la matrice 3x3 per il gioco del tris.\n");
    printf("Usa 0 per una casella vuota, 1 per X e 2 per O.\n");

    // Cicli per raccogliere i dati da parte dell'utente
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Inserisci valore per la posizione (%d, %d): ", i+1, j+1);
            scanf("%d", &board[i][j]);
        }
    }

    // Mostriamo il tabellone per il controllo
    printf("\nTabellone finale:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }

    // Controlliamo le righe per determinare se c'è un vincitore
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != 0) {
            if (board[i][0] == 1) {
                printf("Vincitore: X (Riga %d)\n", i + 1);
                return 0;
            } else if (board[i][0] == 2) {
                printf("Vincitore: O (Riga %d)\n", i + 1);
                return 0;
            }
        }
    }

    // Controlliamo le colonne
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != 0) {
            if (board[0][i] == 1) {
                printf("Vincitore: X (Colonna %d)\n", i + 1);
                return 0;
            } else if (board[0][i] == 2) {
                printf("Vincitore: O (Colonna %d)\n", i + 1);
                return 0;
            }
        }
    }


    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != 0) {
        if (board[0][0] == 1) {
            printf("Vincitore: X (Diagonale principale)\n");
            return 0;
        } else if (board[0][0] == 2) {
            printf("Vincitore: O (Diagonale principale)\n");
            return 0;
        }
    }

    // Controlliamo la diagonale secondaria (da top-right a bottom-left)
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != 0) {
        if (board[0][2] == 1) {
            printf("Vincitore: X (Diagonale secondaria)\n");
            return 0;
        } else if (board[0][2] == 2) {
            printf("Vincitore: O (Diagonale secondaria)\n");
            return 0;
        }
    }


    printf("Partita in pareggio.\n");

    return 0;
}
