#ifndef YATZY_INCLUDED
#define YATZY_INCLUDED

class Yatzy
{
public:
    // Calculate the total sum of all dice
    static int CalculateChance(int dice1, int dice2, int dice3, int dice4, int dice5);

    // Check if all dice have the same value (Yatzy)
    static int CalculateYatzy(int dice[]);

    // Calculate the sum of dice with value 1
    static int CalculateOnes(int dice1, int dice2, int dice3, int dice4, int dice5);

    // Calculate the sum of dice with value 2
    static int CalculateTwos(int dice1, int dice2, int dice3, int dice4, int dice5);

    // Calculate the sum of dice with value 3
    static int CalculateThrees(int dice1, int dice2, int dice3, int dice4, int dice5);

    // Calculate the sum of dice with value 4
    static int CalculateFours(int dice1, int dice2, int dice3, int dice4, int dice5);

    // Calculate the sum of dice with value 5
    static int CalculateFives(int dice1, int dice2, int dice3, int dice4, int dice5);

    // Calculate the sum of dice with value 6
    static int CalculateSixes(int dice1, int dice2, int dice3, int dice4, int dice5);

    // Calculate the score for a pair of dice with the same value
    static int CalculatePair(int dice1, int dice2, int dice3, int dice4, int dice5);

    // Calculate the score for two pairs of dice with the same value
    static int CalculateTwoPairs(int dice1, int dice2, int dice3, int dice4, int dice5);

    // Calculate the score for four dice with the same value (Four of a Kind)
    static int CalculateFourOfAKind(int dice1, int dice2, int dice3, int dice4, int dice5);

    // Calculate the score for three dice with the same value (Three of a Kind)
    static int CalculateThreeOfAKind(int dice1, int dice2, int dice3, int dice4, int dice5);

    // Check if the dice form a small straight (sequence of 1-5)
    static int CalculateSmallStraight(int dice1, int dice2, int dice3, int dice4, int dice5);

    // Check if the dice form a large straight (sequence of 2-6)
    static int CalculateLargeStraight(int dice1, int dice2, int dice3, int dice4, int dice5);

    // Check if the dice form a full house (three of a kind and a pair)
    static int CalculateFullHouse(int dice1, int dice2, int dice3, int dice4, int dice5);
};

#endif
