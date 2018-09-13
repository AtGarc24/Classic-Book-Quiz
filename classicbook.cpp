//
//  classicbook.cpp
//  ProjectWorkspace
//
//  Created by Atalie Garcia on 4/24/18.
//  Copyright © 2018 Atalie Garcia. All rights reserved.
//


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    enum fields {TITLE, DESC, NUM_FIELDS};
    srand(static_cast<unsigned int>(time(0)));
    
    //In this section I'm declaring my arrays of diff. book genre's
    
    const string ROM[6][NUM_FIELDS] =
    {
        {"Jane Eyre", "Mystery & romance, all wrapped in one 600 page package about a woman discovering herself while unraveling the dark character that is Mr. Heathcliff"},
        {"Pride and Prejudice","Oh Darcy! If you haven't read this witty novel- do yourself the favor and become enraptured by Elizabeth and Darcy's enemies to friends to lovers tale. "},
        {"Bridehead Revisited", "I have no idea what this is about, but I heard it's dope"},
        {"Madame Bovary", "Romance, but in French"},
        {"Sense & Sensibility", "Pride and Prejudice, before the bug fixes"},
        {"Princess Bride","A satire on the fairytale romance genre that does a great job with romance"}
    };
    
    const string ADV[6][NUM_FIELDS] =
    {
        {"Moby Dick", "Mostly whales, sometimes action"},
        {"Treasure Island", "This was cool before Pirate's of the Caribean"},
        {"Count of Monte Cristo", "Revenge stories are the best stories"},
        {"The Call of the Wild", "Pretty sure there are wolves in here"},
        {"The Hobbit", "It's like Lord of the Rings, but beter"},
        {"Heart of Darkness","Hellow Darkness my old friends..."}
    };
    
    const string CHBK[6][NUM_FIELDS] =
    {
        {"Alice's Adventures in Wonderland", "Down the rabbit hole...."},
        {"The Little Prince", "A children's book...but french"},
        {"Tom Sawyer", "A children's book, but American"},
        {"Chronicles of Narnia","A childrens book...but Christian"},
        {"Harry Potter", "Every child in the world knows this book"},
        {"Matilda", "A child genius who loves to read!"}
    };
    
    const string HOR[6][NUM_FIELDS] =
    {
        {"Frankenstein", "Prometheus Unbound"},
        {"Dracula", "The original vampire story"},
        {"Dr. Jekyll and Mr. Hyde", "Also known as the gemini novel"},
        {"Carrie","Puberty can be a frightening thing"},
        {"H.P. Lovecraft: Collected Stories", ""},
        {"Edgar Allan Poe: Collected Short Stories & Poems","The master of gothic"}
    };
    
    //Declaring variables that I will need (user input, random number generator, etc
    
    string answer;
    string option;
    
    
    // First message player see's and input of choice
    
    cout << "\nWelcome to the classic book quiz!\nWhere we help you choose a classic book!" <<endl;
    cout << "\nWe'll ask a few questions and see which book YOU best match with!" <<endl;
    cout << "\nLet's begin!" <<endl;
    
    cout << "\nWhich genre do you prefer?" << "\nType \nH for Horror \nA for Adventure \nC for children's books \nR for Romance" <<endl;
    
    cin >> answer;
    
    
    //Conditional statement that test's user input
    
    
    
    if(answer == "H" || answer == "h")
    {
        cout << "\nOh, into the spooky stuff huh? \nLet's see what we can offer you, boo" <<endl;
    }
    else if (answer == "A" || answer == "a")
    {
        cout << "\nAdventure is out there! And you are ready to find it...through a good book!" <<endl;
    }
    else if (answer == "C" || answer == "c")
    {
        cout << "\nCuriouser and curiouser! Let's take you to some great childrens classics!" <<endl;
    }
    else if (answer == "R" || answer == "r" )
    {
        cout << "\nDarcy, Heathcliff, and Rochester, oh my!" <<endl;
    } else
    {
        cout << "\n Para de joder and pick a real answer!" <<endl;
    }
    
    // In this section we choose the book for the user based on their choice
    
    //cout << "\nNow we get to the fun part! Let see which book we'll choose for you!" << endl;
    
    if(answer == "H" || answer == "h")
    {
        for(int i = 0; i < 3; ++i)
        {
            int randomNum = rand();
            int num = (randomNum % 6);
            string book = HOR[num][TITLE];
            string descr = HOR[num][DESC];
            cout << "You got " << book << "\nSummary: " << descr << endl;
            cout << "\nDo you like this option?\n Put Y for Yes or N for No" <<endl;
            
            cin >> option;
            if (option == "Y")
            {
                i = i + 5;
            }
            else if (i == 2)
            {
                cout << "\nYou have run out of options, sorry boo boo, better luck next time" << endl;
                i = i + 5;
            }
            
        }
    }
    else if (answer == "A"||answer == "a")
    {
        for(int i = 0; i < 3; ++i)
        {
            int randomNum = rand();
            int num = (randomNum % 6);
            string book = ADV[num][TITLE];
            string descr = ADV[num][DESC];
            cout << "You got " << book << "\nSummary" << descr << endl;
            cout << "\nDo you like this option?\n Put Y for Yes or N for No" <<endl;
            
            if (option == "Y")
            {
                i = i + 5;
            }
            else if (i == 2)
            {
                cout << "\nIt's just no your lucky day, bae.  Better luck next time" << endl;
                i = i + 5;
            }
            
        }
    }
    else if (answer == "C" ||answer == "c")
    {
        for(int i = 0; i < 3; ++i)
        {
            int randomNum = rand();
            int num = (randomNum % 6);
            string book = CHBK[num][TITLE];
            string descr = CHBK[num][DESC];
            cout << "You got " << book << "\nSummary" << descr << endl;
            cout << "\nDo you like this option?\n Put Y for Yes or N for No" <<endl;
            
            if (option == "Y")
            {
                i = i + 5;
            }
            else if (i == 2)
            {
                cout << "\nWhere did all the books go? Away, it seems. Better luck next time" << endl;
                i = i + 5;
            }
        }
    }
    else if (answer == "R" ||answer == "r" )
    {
        for(int i = 0; i < 3; ++i)
        {
            int randomNum = rand();
            int num = (randomNum % 6);
            string book = HOR[num][TITLE];
            string descr = HOR[num][DESC];
            cout << "You got " << book << "\nSummary" << descr << endl;
            cout << "\nDo you like this option?\n Put Y for Yes or N for No" <<endl;
            if (option == "Y")
            {
                cout << "\nA wonderful world of romance awaits with your choice of" << book << ". \nEnjoy!" <<endl;
                i = i + 5;
            }
            else if (i == 2)
            {
                cout << "\nWhere did all the books go? Away, it seems. Better luck next time" << endl;
                i = i + 5;
            }
        }
        
    }
    
    return 0;
    
}
