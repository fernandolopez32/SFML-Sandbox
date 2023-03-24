#pragma once 

#include <SFML/Graphics.hpp>
#include "AssetManager.hpp"

class Player 
{
    public:
        //constructor 
        Player(); 
        // set position of player 
        void setPosition(float x, float y);
        void draw(sf::RenderWindow& window);
    private:
        sf::Sprite m_sprite;
        sf::Texture m_texture;
};