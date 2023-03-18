#include "movemet.hpp"


void moveRectangle(sf::RectangleShape& rectangle, const float& movementSpeed)
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        rectangle.move(-movementSpeed, 0);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        rectangle.move(movementSpeed, 0);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        rectangle.move(0, -movementSpeed);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        rectangle.move(0, movementSpeed);
    }
        
}