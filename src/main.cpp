#include <iostream> 

#include <SFML/Graphics.hpp>


int main () 
{
    // cout<< "sanity check" << endl;

// MAKING A WINDOW OF SIZE 800PX BY 600PX WITH A TITLE OF SFML-SANDOBX
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML-SANDBOX");

      // drawing a rectangle on the screen 
    sf::RectangleShape rectangle (sf::Vector2f(100, 50));
    rectangle.setPosition (200, 300);
    rectangle.setFillColor(sf::Color::Red);

    sf::Clock clock;


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

        
        // moving rectangle every second
    
        // if (clock.getElapsedTime().asSeconds() >= 1)
        // {
        //     rectangle.move(10,0);
        //     clock.restart();
        // }

    
   

    // drawing a 64 square grid

    // const int gridSize = 8; 
    // const int squareSize = 50; 
    // const int gridPadding = 100;

    // for(int i = 0; i < gridSize; i++) 
    // {
    //     for(int j = 0; j < gridSize; j++)
    //     {
    //         sf::RectangleShape square (sf::Vector2f(squareSize, squareSize));
    //         square.setPosition(gridPadding + i * squareSize, gridPadding + j * squareSize);
    //         square.setFillColor((i+j) % 2 == 0 ? sf::Color::White : sf::Color::Blue);

    //         window.draw(square);

    //     }
    // } 



    // clearing the screen with a black color 
    window.clear(sf::Color::Black);
    // draw somthing on the screen 
    window.draw(rectangle);
    //update the window 
    window.display();
    }
    // end 
    return 0; 
}