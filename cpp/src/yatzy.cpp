#include "yatzy.hpp"
#include <string.h>

int Yatzy::CalculateChance(int dice1, int dice2, int dice3, int dice4, int dice5)
{
    // Calculate the total sum of all dice
    return dice1 + dice2 + dice3 + dice4 + dice5;
}

int Yatzy::CalculateYatzy(int dice[])
{
    // Check if all dice have the same value (Yatzy)
    int counts[6] = { 0 };
    for (int i = 0; i < 5; i++)
    {
        counts[dice[i] - 1]++;
    }

    for (int i = 0; i < 6; i++)
    {
        if (counts[i] == 5)
        {
            return 50;
        }
    }

    return 0;
}

int Yatzy::CalculateOnes(int dice1, int dice2, int dice3, int dice4, int dice5)
{
    // Calculate the sum of dice with value 1
    int dice[] = { dice1, dice2, dice3, dice4, dice5 };
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (dice[i] == 1)
        {
            sum += dice[i];
        }
    }

    return sum;
}

int Yatzy::CalculateTwos(int dice1, int dice2, int dice3, int dice4, int dice5)
{
    // Calculate the sum of dice with value 2
    int dice[] = { dice1, dice2, dice3, dice4, dice5 };
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (dice[i] == 2)
        {
            sum += dice[i];
        }
    }

    return sum;
}

int Yatzy::CalculateThrees(int dice1, int dice2, int dice3, int dice4, int dice5)
{
    // Calculate the sum of dice with value 3
    int dice[] = { dice1, dice2, dice3, dice4, dice5 };
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (dice[i] == 3)
        {
            sum += dice[i];
        }
    }

    return sum;
}

int Yatzy::CalculateFours(int dice1, int dice2, int dice3, int dice4, int dice5)
{
    // Calculate the sum of dice with value 4
    int dice[] = { dice1, dice2, dice3, dice4, dice5 };
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (dice[i] == 4)
        {
            sum += dice[i];
        }
    }

    return sum;
}

int Yatzy::CalculateFives(int dice1, int dice2, int dice3, int dice4, int dice5)
{
    // Calculate the sum of dice with value 5
    int dice[] = { dice1, dice2, dice3, dice4, dice5 };
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (dice[i] == 5)
        {
            sum += dice[i];
        }
    }

    return sum;
}

int Yatzy::CalculateSixes(int dice1, int dice2, int dice3, int dice4, int dice5)
{
    // Calculate the sum of dice with value 6
    int dice[] = { dice1, dice2, dice3, dice4, dice5 };
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (dice[i] == 6)
        {
            sum += dice[i];
        }
    }

    return sum;
}

int Yatzy::CalculatePair(int dice1, int dice2, int dice3, int dice4, int dice5)
{
    // Calculate the score for a pair of dice with the same value
    int dice[] = { dice1, dice2, dice3, dice4, dice5 };
    int counts[6] = { 0 };
    for (int i = 0; i < 5; i++)
    {
        counts[dice[i] - 1]++;
    }

    for (int i = 5; i >= 0; i--)
    {
        if (counts[i] >= 2)
        {
            return (i + 1) * 2;
        }
    }

    return 0;
}

int Yatzy::CalculateTwoPairs(int dice1, int dice2, int dice3, int dice4, int dice5)
{
    // Calculate the score for two pairs of dice with the same value
    int dice[] = { dice1, dice2, dice3, dice4, dice5 };
    int counts[6] = { 0 };
    int pairCount = 0;
    int score = 0;
    for (int i = 0; i < 5; i++)
    {
        counts[dice[i] - 1]++;
    }

    for (int i = 5; i >= 0; i--)
    {
        if (counts[i] >= 2)
        {
            pairCount++;
            score += (i + 1) * 2;
        }
    }

    if (pairCount >= 2)
    {
        return score;
    }

    return 0;
}

int Yatzy::CalculateFourOfAKind(int dice1, int dice2, int dice3, int dice4, int dice5)
{
    // Calculate the score for four dice with the same value (Four of a Kind)
    int dice[] = { dice1, dice2, dice3, dice4, dice5 };
    int counts[6] = { 0 };
    for (int i = 0; i < 5; i++)
    {
        counts[dice[i] - 1]++;
    }

    for (int i = 5; i >= 0; i--)
    {
        if (counts[i] >= 4)
        {
            return (i + 1) * 4;
        }
    }

    return 0;
}

int Yatzy::CalculateThreeOfAKind(int dice1, int dice2, int dice3, int dice4, int dice5)
{
    // Calculate the score for three dice with the same value (Three of a Kind)
    int dice[] = { dice1, dice2, dice3, dice4, dice5 };
    int counts[6] = { 0 };
    for (int i = 0; i < 5; i++)
    {
        counts[dice[i] - 1]++;
    }

    for (int i = 5; i >= 0; i--)
    {
        if (counts[i] >= 3)
        {
            return (i + 1) * 3;
        }
    }

    return 0;
}

int Yatzy::CalculateSmallStraight(int dice1, int dice2, int dice3, int dice4, int dice5)
{
    // Check if the dice form a small straight (sequence of 1-5)
    int dice[] = { dice1, dice2, dice3, dice4, dice5 };
    int counts[6] = { 0 };
    for (int i = 0; i < 5; i++)
    {
        counts[dice[i] - 1]++;
    }

    for (int i = 0; i < 5; i++)
    {
        if (counts[i] != 1)
        {
            return 0;
        }
    }

    return 15;
}

int Yatzy::CalculateLargeStraight(int dice1, int dice2, int dice3, int dice4, int dice5)
{
    // Check if the dice form a large straight (sequence of 2-6)
    int dice[] = { dice1, dice2, dice3, dice4, dice5 };
    int counts[6] = { 0 };
    for (int i = 0; i < 5; i++)
    {
        counts[dice[i] - 1]++;
    }

    for (int i = 1; i < 6; i++)
    {
        if (counts[i] != 1)
        {
            return 0;
        }
    }

    return 20;
}

int Yatzy::CalculateFullHouse(int dice1, int dice2, int dice3, int dice4, int dice5)
{
    // Check if the dice form a full house (three of a kind and a pair)
    int dice[] = { dice1, dice2, dice3, dice4, dice5 };
    int counts[6] = { 0 };
    bool hasThreeOfAKind = false;
    bool hasPair = false;
    for (int i = 0; i < 5; i++)
    {
        counts[dice[i] - 1]++;
    }

    for (int i = 0; i < 6; i++)
    {
        if (counts[i] == 3)
        {
            hasThreeOfAKind = true;
        }
        else if (counts[i] == 2)
        {
            hasPair = true;
        }
    }

    if (hasThreeOfAKind && hasPair)
    {
        return CalculateChance(dice1, dice2, dice3, dice4, dice5);
    }

    return 0;
}
