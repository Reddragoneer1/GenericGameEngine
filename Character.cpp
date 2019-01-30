//
//  Character.cpp
//  GenericGameEngine
//
//  Created by Nathanael Huh on 1/19/19.
//  Copyright © 2019 Nathanael Huh. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include "Character.hpp"

using FText = std::string;


Character::Character()
{
    CharacterCreation();
}

void Character::CharacterCreation()
{
    std::cout <<"Please input a name for your character: ";
    std::getline(std::cin, name);
    //Make point distribution it's own method
    int points = statPoints;
    bool validPointDistribution = false;
    std::cout <<"Point distribution, select how many points you want for strength, intelligence and stamina. You only get 20 points total. \n";
    int tempStrength;
    int tempIntelligence;
    int tempStamina;
    while(!validPointDistribution)
    {
        tempStrength = InitialStrenth();
        tempIntelligence = InitialIntelligence();
        tempStamina = InitialStamina();
        if(tempStrength+tempIntelligence+tempStamina == points)
        {
            validPointDistribution = true;
        }
        else if(tempStrength+tempIntelligence+tempStamina < points)
        {
            std::cout <<"You have extra points, try again";
//            std::cout <<"You have more points available, would you like to redistribute? y/n";
//            FString response;
//            std::getline(std::cin, response);
//            if(response[0] == 'n' || response[0] == 'N')
//            {
//                validPointDistribution = true;
//            }
//            else if(tempStrength != 0 && tempIntelligence != 0 && tempStamina != 0)
//            {
//                tempStrength = 0;
//                tempIntelligence = 0;
//                tempStamina = 0;
//            }
        }
    };  //end of while loop
    std::vector<Object> inventory;
    InventoryInitialization(inventory);
}

int Character::InitialStrenth()
{
    int tempStat = 0;
    bool strenthInBounds = false;
    while(!strenthInBounds)
    {
        std::cout <<"Strength: ";
        std::cin >> tempStat;
        if(tempStat >= 0 && tempStat <= 20)
        {
            strenthInBounds = true;
        }
        else
        {
            std::cout <<"Try again \n";
        }
    }
   return tempStat;
}

int Character::InitialIntelligence()
{
    int tempStat = 0;
    bool intelligenceInBounds = false;
    while(!intelligenceInBounds)
    {
        std::cout <<"Intelligence: ";
        std::cin >> tempStat;
        if(tempStat >= 0 && tempStat <= 20)
        {
            intelligenceInBounds = true;
        }
        else
        {
            std::cout <<"Try again \n";
        }
    }
    
    return tempStat;
}

int Character::InitialStamina()
{
    int tempStat = 0;
    bool staminaInBounds = false;
    while(!staminaInBounds)
    {
        std::cout <<"Stamina: ";
        std::cin >> tempStat;
        if(tempStat >= 0 && tempStat <= 20)
        {
            staminaInBounds = true;
        }
    }
    
    return tempStat;
}

void Character::InventoryInitialization(std::vector<Object> x)
{
    for(int i = 0; i < x.size(); i++)
    {
        //TODO: Check if vectors need initialization
    }
}

int Character::GetStrength()
{
    return strength;
}

void Character::SetStrength(int x)
{
    strength = x;
}

int Character::GetIntelligence()
{
    return intelligence;
}
void Character::SetIntelligence(int x)
{
    intelligence = x;
}

int Character::GetStamina()
{
    return stamina;
}

void Character::SetStamina(int x)
{
    stamina = x;
}
//TODO: Check bounds for movement
void Character::MoveUp()
{
    yPos--;
}
void Character::MoveDown()
{
    yPos++;
}
void Character::MoveLeft()
{
    xPos--;
}
void Character::MoveRight()
{
    xPos++;
}
