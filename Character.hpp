//
//  Character.hpp
//  GenericGameEngine
//
//  Created by Nathanael Huh on 1/19/19.
//  Copyright © 2019 Nathanael Huh. All rights reserved.
//

#ifndef Character_hpp
#define Character_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include "Object.hpp"

using FString = std::string;



class Character
{
public:
    Character();
    FString name;
    FString title;
    int GetStrength();
    int GetIntelligence();
    int GetStamina();
    int xPos;
    int yPos;
    
    
    void CharacterCreation();
    void MoveUp();
    void MoveDown();
    void MoveLeft();
    void MoveRight();
    int InitialStrenth();
    int InitialIntelligence();
    int InitialStamina();
    void InventoryInitialization(std::vector<Object>);
    
    
private:
    int strength;
    int intelligence;
    int stamina;
    Object inventory[20];
    void SetStrength(int x);
    void SetIntelligence(int x);
    void SetStamina(int x);
    static constexpr int statPoints = 20;

};

#endif /* Character_hpp */
