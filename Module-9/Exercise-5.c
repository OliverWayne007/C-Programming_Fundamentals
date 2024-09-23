#include <stdio.h>

// Define the enum for different music genres
typedef enum {
    POP = 1,
    ROCK,
    HIPHOP,
    ELECTRONIC,
    CLASSICAL,
    JAZZ
} Genre;

// Function to display the genre name based on the Genre enum value
void displayGenre(Genre genre) {
    switch (genre) {
        case POP:
            printf("Genre of the song: Pop\n");
            break;
        case ROCK:
            printf("Genre of the song: Rock\n");
            break;
        case HIPHOP:
            printf("Genre of the song: Hip-Hop\n");
            break;
        case ELECTRONIC:
            printf("Genre of the song: Electronic\n");
            break;
        case CLASSICAL:
            printf("Genre of the song: Classical\n");
            break;
        case JAZZ:
            printf("Genre of the song: Jazz\n");
            break;
        default:
            printf("Invalid genre selected!\n");
            break;
    }
}

int main() {
    int choice;
    char cont = 'y';
    
    // Loop to allow the user to input multiple songs and their genres
    while (cont == 'y' || cont == 'Y') {
        printf("Select the genre of the song:\n");
        printf("1. Pop\n");
        printf("2. Rock\n");
        printf("3. Hip-Hop\n");
        printf("4. Electronic\n");
        printf("5. Classical\n");
        printf("6. Jazz\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        // Display the genre based on the user input
        displayGenre((Genre)choice);
        
        // Ask the user if they want to input another song
        printf("Do you want to input another song? (y/n): ");
        scanf(" %c", &cont);
    }
    
    return 0;
}