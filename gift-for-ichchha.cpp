#include <iostream>
#include <string>
#include <thread>
#include <chrono>

void printHeart()
{
    std::cout << "  **     **  \n";
    std::cout << " ****   **** \n";
    std::cout << "****** ******\n";
    std::cout << " *********** \n";
    std::cout << "  *********  \n";
    std::cout << "   *******   \n";
    std::cout << "    *****    \n";
    std::cout << "     ***     \n";
    std::cout << "      *      \n";
}

void printChristmasTree()
{
    std::cout << "         *         \n";
    std::cout << "        ***        \n";
    std::cout << "       *****       \n";
    std::cout << "      *******      \n";
    std::cout << "     *********     \n";
    std::cout << "    ***********    \n";
    std::cout << "   *************   \n";
    std::cout << "  ***************  \n";
    std::cout << "        |||        \n";
}

void printSnowflake()
{
    std::cout << "     *     \n";
    std::cout << "    * *    \n";
    std::cout << "   *   *   \n";
    std::cout << "  *     *  \n";
    std::cout << " *       * \n";
    std::cout << "* * * * * *\n";
    std::cout << " *       * \n";
    std::cout << "  *     *  \n";
    std::cout << "   *   *   \n";
    std::cout << "    * *    \n";
    std::cout << "     *     \n";
}

void playLoveGame()
{
    std::string secretWord = "LOVE";
    std::string guess;
    int attempts = 0;

    std::cout << "Welcome to the Love Game, Ichchha!\n";
    std::cout << "You have to guess a secret word that means a lot to both of us.\n";
    std::cout << "You have unlimited attempts, but I'll give you hints if you need them!\n";

    while (true)
    {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess == secretWord)
        {
            std::cout << "Congratulations, Ichchha! You guessed it right in " << attempts << " attempts!\n";
            std::cout << "Here's a heart for you:\n";
            printHeart();
            std::cout << "Let's move on to the next part!\n";
            break;
        }
        else
        {
            std::cout << "Oops! Try again, my love.\n";

            if (attempts == 3)
            {
                std::cout << "Hint: It's a four-letter word that defines our relationship.\n";
            }
            else if (attempts == 6)
            {
                std::cout << "Hint: It starts with 'L' and ends with 'E'.\n";
            }
        }
    }
}

void playChristmasTreeGame()
{
    std::string guess;
    std::cout << "Guess what this next illustration represents...\n";
    printChristmasTree();
    std::cout << "Enter your guess: ";
    std::cin >> guess;

    if (guess == "Christmas tree" || guess == "tree" || guess == "Christmas")
    {
        std::cout << "Correct! It's a Christmas tree. Let's move on to the next part!\n";
    }
    else
    {
        std::cout << "Nice try! It's a Christmas tree. Let's move on to the next part!\n";
    }
}

void playSnowflakeGame()
{
    std::string guess;
    std::cout << "Guess what this next illustration represents...\n";
    printSnowflake();
    std::cout << "Enter your guess: ";
    std::cin >> guess;

    if (guess == "Snowflake" || guess == "snowflake" || guess == "snow")
    {
        std::cout << "Correct! It's a snowflake. Let's move on to the next part!\n";
    }
    else
    {
        std::cout << "Nice try! It's a snowflake. Let's move on to the next part!\n";
    }
}

void christmasFacts()
{
    std::cout << "\nDid you know?\n";
    std::cout << "1. Christmas was first celebrated on December 25th, 336 AD in Rome.\n";
    std::cout << "2. The tradition of Santa Claus comes from St. Nicholas, a 4th-century bishop known for his generosity.\n";
    std::cout << "3. The world's tallest Christmas tree was over 221 feet tall!\n";
    std::cout << "Let's celebrate Christmas with joy and love!\n";
}

void riddleGame()
{
    std::string answer;
    std::cout << "\nLet's play a riddle game!\n";
    std::cout << "Here's your riddle:\n";
    std::cout << "I am tall when I am young, and I am short when I am old. What am I?\n";

    std::cout << "Enter your answer: ";
    std::cin >> answer;

    if (answer == "Candle" || answer == "candle")
    {
        std::cout << "Wow! You're so smart, Ichchha! Correct answer!\n";
    }
    else
    {
        std::cout << "Nice try! The correct answer is 'Candle'.\n";
    }
}

void christmasStory()
{
    std::cout << "\nLet's enjoy a short Christmas story together.\n";
    std::cout << "Once upon a time, in a small village, there was a magical Christmas tree...\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "The tree glowed with lights of different colors, bringing joy to everyone who saw it...\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "On Christmas Eve, the villagers gathered around the tree to sing carols and share gifts...\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "The tree's magic spread happiness and love throughout the village, making it the best Christmas ever!\n";
}

void secretCodeGame()
{
    std::string secretCode = "10JUNE";
    std::string codeGuess;

    std::cout << "\nNow, it's time for the final challenge!\n";
    std::cout << "You need to enter a secret code. It's a very special date for both of us.\n";
    std::cout << "Hint: It's the day you confessed your love to me.\n";

    while (true)
    {
        std::cout << "Enter the secret code: ";
        std::cin >> codeGuess;

        if (codeGuess == secretCode)
        {
            std::cout << "You did it, Ichchha! You remembered our special day: June 10th, the day you confessed your love.\n";
            std::cout << "Here's another heart for you:\n";
            printHeart();
            break;
        }
        else
        {
            std::cout << "That's not quite right. Think about the date that changed our lives.\n";
        }
    }
}

void countdownToChristmas()
{
    std::cout << "\nLet's countdown to Christmas together!\n";
    for (int i = 10; i > 0; --i)
    {
        std::cout << i << "...\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "Merry Christmas, Ichchha! Here's a Christmas tree for you:\n";
    printChristmasTree();
}

void snowflakeShow()
{
    std::cout << "\nAnd here's a little snowflake show for you!\n";
    for (int i = 0; i < 5; ++i)
    {
        printSnowflake();
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main()
{
    std::cout << "Merry Christmas, Ichchha!\n";
    playLoveGame();
    playChristmasTreeGame();
    christmasFacts();
    playSnowflakeGame();
    riddleGame();
    christmasStory();
    secretCodeGame();
    countdownToChristmas();
    snowflakeShow();
    std::cout << "\nThank you for playing, Ichchha! I love you so much. Let's make many more beautiful memories together!\n";
    return 0;
}
