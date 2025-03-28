#include <stdio.h>
#include <stdlib.h>

void computeRanks(int *leaderboard, int n, int *playerScores, int m) {
    int *ranks = (int *)malloc(n * sizeof(int));
    int rank = 1;

    // Assign ranks to leaderboard (Dense Ranking)
    ranks[0] = rank;
    for (int i = 1; i < n; i++) {
        if (leaderboard[i] == leaderboard[i - 1])
            ranks[i] = rank;
        else
            ranks[i] = ++rank;
    }

    int index = n - 1; // Start from the lowest rank in the leaderboard

    // Process each player's score
    for (int i = 0; i < m; i++) {
        while (index >= 0 && playerScores[i] >= leaderboard[index])
            index--; // Move up in rank
        
        printf("%d\n", index == -1 ? 1 : ranks[index] + 1);
    }

    free(ranks); // Free allocated memory
}

int main() {
    int n, m;
    
    // Read leaderboard size and scores
    scanf("%d", &n);
    int *leaderboard = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &leaderboard[i]);

    // Read number of games and player scores
    scanf("%d", &m);
    int *playerScores = (int *)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++)
        scanf("%d", &playerScores[i]);

    // Compute ranks after each game
    computeRanks(leaderboard, n, playerScores, m);

    // Free allocated memory
    free(leaderboard);
    free(playerScores);

    return 0;
}