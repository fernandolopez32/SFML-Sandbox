#include <iostream> 

#include <SFML/Graphics.hpp>

using namespace std;

int main () 
{
    // cout<< "sanity check" << endl;

// MAKING A WINDOW OF SIZE 800PX BY 600PX WITH A TITLE OF SFML-SANDOBX
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML-SANDBOX");

    while(window.isOpen())
    {
        // Event handling
        sf::Event event; 
        while (window.pollEvent(event))
        {
            // closing the window if the window encounters an evetn of type close
            if(event.type == sf::Event::Closed)
            {
            window.close();
            }
        }
    
    // clearing the screen with a black color 
    window.clear(sf::Color::Black);

    // draw somthing on the screen 
    sf::RectangleShape rectangle (sf::Vector2f(100, 50));
    rectangle.setPosition (200, 300);
    rectangle.setFillColor(sf::Color::Red);

    window.draw(rectangle);

    //update the window 
    window.display();


    }
 
    
    // end 
    return 0; 
}