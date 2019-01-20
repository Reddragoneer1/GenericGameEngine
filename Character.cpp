//
//  Character.cpp
//  GenericGameEngine
//
//  Created by Nathanael Huh on 1/19/19.
//  Copyright © 2019 Nathanael Huh. All rights reserved.
//

#include <iostream>
#include <string>
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
