#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int main() {
    // 1. Setup & Challenge Extension (Randomness)
    srand(static_cast<unsigned int>(time(0))); // Seed the random generator
    const int secretTarget = rand() % 100 + 1; // Generates number between 1 and 100
    
    int guess = 0;
    int attempts = 0;

    std::cout << "--- Welcome to the Number Guessing Game! ---" << std::endl;
    std::cout << "I have picked a number between 1 and 100." << std::endl;

    // 2. The Loop
    while (guess != secretTarget) {
        // 3. The Logic (Inside the loop)
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        // Check the guess
        if (guess > secretTarget) {
            std::cout << "Too High!" << std::endl;
        } 
        else if (guess < secretTarget) {
            std::cout << "Too Low!" << std::endl;
        } 
        else {
            std::cout << "Correct!" << std::endl;
        }
    }

    // 4. Game Over
    std::cout << "You won in " << attempts << " attempts!" << std::endl;

    return 0;
}
