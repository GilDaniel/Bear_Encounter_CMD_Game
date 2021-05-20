#include <iostream>
#include <windows.h>
#include <ctime>
int main(){
    srand(time(NULL));
    std::cout << "===================================\n";
    std::cout << "=======CMDGAME-BY Gil Daniel=======\n";
    std::cout << "===================================\n\n";

    std::cout << "You are walking in the woods and see a bear going towards you, what will you do?\n";
    
    std::cout << "A)  Run to the opposite direction\n";
    std::cout << "B)  Try to see it's color\n";
    std::cout << "C)  Raise your arms up\n\n\n";

    std::cout << "Type the answer letter\n";

    char userinput;
    bool asking = true;
    while(asking){
        
        std::cin >> userinput;
        switch (userinput)
        {
        case 'A':
            
            std::cout <<"The bear now started to chase you. What will you do ?\n";
            asking = false;
        break;
        case 'B':
            std::cout<< "It's a brown bear, and it get nearer. What will you do ?\n";
            asking = false;
        break;

        case 'C':
            std::cout <<"The bear became confused, but continue to go in your direction. What will you do ?\n";
            asking = false;
        break;
        default:
            std::cout <<"Invalid, try to type 'A','B' or 'C'\n";
            asking = true;
            break;
        }
    }
    if (userinput == 'A')
    {
        std::cout <<"A) Run faster.\n";
        std::cout <<"B) Hide behind a tree.\n";
        std::cout <<"C) Throw a rock.\n";
        bool asking2 = true;
        while (asking2)
        {
        char input2;
        std::cin >> input2;
        
        switch (input2)
        {
        case 'A':
            std::cout <<"You ran faster\n";
            Sleep(2000);
            std::cout <<"===================================\n";
            std::cout <<"==The bear reach you and you die.==\n";
            std::cout <<"===================================\n";
            Sleep(1000);
            asking2 = false;
            return 0;
            break;
        case 'B':
            std::cout << "You hide behind a tree.\n";
            Sleep(3000);
            std::cout <<"===================================\n";
            std::cout <<"The bear sniffed and kill you\n";
            std::cout <<"===================================\n";
            
            Sleep(1000);
            asking2 = false;
            return 0;
            
            break;
        case 'C':
            std::cout << "You Throw a rock\n";
            Sleep(1000);
            int chance;
            chance = rand() % 100;
            if(chance < 30){
                std::cout <<"===========================================\n";
                std::cout <<"==By a unbelivable luck the bear run away==\n";
                std::cout <<"===========================================\n";
                Sleep(2000);
                std::cout <<"===================================\n";
                std::cout <<"============You Survive!===========\n";
                std::cout <<"===================================\n";
                 
                Sleep(3000);
                asking2 = false;
                return 0;           
                }
            else{
                
                std::cout <<"===================================\n";
                std::cout <<"==The bear reach you and you die.==\n";
                std::cout <<"===================================\n";
                Sleep(1000);
                asking2 = false;
                return 0;
            }
            break;
            default:
                std::cout << "Invalid, try to type 'A','B' or 'C'\n";
                asking2 = true;
            break;
                
        }
        }
    }
        if (userinput == 'B')
        {
        Sleep(1000);
        std::cout <<"A) Post on TikTok\n";
        std::cout <<"B) Scream.\n";
        std::cout <<"C) Throw a rock.\n";
        
        char input3;
        
        bool asking3 = true;
        while (asking3)
        {
        std::cin >> input3;
        switch (input3)
        {
        case 'A':
            std::cout <<"You film the bear that suddenty starts dancing.\n";
            Sleep(5000);
            std::cout <<"================================================\n";
            std::cout <<"==The bear remember it is hungry and kill you.==\n";
            std::cout <<"================================================\n";
            Sleep(1000);
            asking3 = false;
            return 0;
            break;
        case 'B':
            std::cout << "You scream a lot.\n";
            Sleep(3000);
            std::cout <<"===================================\n";
            std::cout <<"==The bear don't like it and run.==\n";
            std::cout <<"===================================\n";
            Sleep(1000);
            std::cout <<"===================================\n";
            std::cout <<"============You Survive!===========\n";
            std::cout <<"===================================\n";
            asking3 = false;
            Sleep(3000);
            return 0;
            break;
        case 'C':
            std::cout << "You Throw a rock\n";
            Sleep(1000);
            int chance2;
            chance2 =  rand() % 100;
            if(chance2 < 40){
                std::cout <<"===========================================\n";
                std::cout <<"==By a unbelivable luck the bear run away==\n";
                std::cout <<"===========================================\n\n\n";
                Sleep(2000);
                std::cout <<"===================================\n";
                std::cout <<"============You Survive!===========\n";
                std::cout <<"===================================\n";
                Sleep(3000);
                asking3 = false;
                return 0;
            }
            else{
                
                std::cout <<"===================================\n";
                std::cout <<"==The bear reach you and you die.==\n";
                std::cout <<"===================================\n";
                Sleep(1000);
                asking3 = false;
                return 0;
            }
            
        default:
            std::cout << "Invalid, try to type 'A','B' or 'C'\n";
            asking3 = true;
            break;
        }
        }  
    }
    if (userinput == 'C')
        {
        Sleep(1000);
        std::cout <<"A) Play Dead\n";
        std::cout <<"B) Scream.\n";
        std::cout <<"C) Walk back slowly.\n";
        
        char input4;
        
        bool asking4 = true;
        while (asking4)
        {
        std::cin >> input4;
        switch (input4)
        {
        case 'A':
            std::cout <<"You lay on the dirt.\n";
            Sleep(5000);
            std::cout <<"================================================\n";
            std::cout <<"========The bear trample and kill you.==========\n";
            std::cout <<"================================================\n";
            Sleep(1000);
            asking4 = false;
            return 0;
            break;
        case 'B':
            std::cout << "You scream a lot.\n";
            Sleep(3000);
            std::cout <<"=========================================\n";
            std::cout <<"==The bear realy don't like it and run.==\n";
            std::cout <<"=========================================\n";
            Sleep(1000);
            std::cout <<"===================================\n";
            std::cout <<"============You Survive!===========\n";
            std::cout <<"===================================\n";
            asking4 = false;
            Sleep(3000);
            return 0;
            break;
        case 'C':
            std::cout << "You go away slowy\n";
            Sleep(1000);
            int chance3;
            chance3 =  rand() % 100;
            if(chance3 < 50){
                std::cout <<"===================================\n";
                std::cout <<"===The bear gave up of eating you==\n";
                std::cout <<"===================================\n\n\n";
                Sleep(2000);
                std::cout <<"===================================\n";
                std::cout <<"============You Survive!===========\n";
                std::cout <<"===================================\n";
                Sleep(3000);
                asking4 = false;
                return 0;
            }
            else{
                
                std::cout <<"===================================\n";
                std::cout <<"==The bear reach you and you die.==\n";
                std::cout <<"===================================\n";
                Sleep(1000);
                asking4 = false;
                return 0;
            }
            
        default:
            std::cout << "Invalid, try to type 'A','B' or 'C'\n";
            asking4 = true;
            break;
        }
        }  
    }
}