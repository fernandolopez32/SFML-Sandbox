#include <iostream> 

#include <SFML/Graphics.hpp>

using namespace std;

int main () 
{
    // cout<< "sanity check" << endl;

// MAKING A WINDOW OF SIZE 800PX BY 600PX WITH A TITLE OF SFML-SANDOBX
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML-SANDBOX");



    
    sf::RectangleShape rectangle (sf::Vector2f(100, 50));
    rectangle.setPosition (200, 300);
    rectangle.setFillColor(sf::Color::Red);

    window.draw(rectangle);
    
    
    
    
    // end 
    return 0; 
}