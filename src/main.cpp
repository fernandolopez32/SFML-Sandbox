#include <iostream> 

#include <SFML/Graphics.hpp>

#include "movemet.hpp"

#include "windowManager.hpp"

int main () 
{
    // cout<< "sanity check" << endl;



      // drawing a rectangle on the screen 
    sf::RectangleShape rectangle (sf::Vector2f(100, 50));
    rectangle.setPosition (200, 300);
    rectangle.setFillColor(sf::Color::Red);

    sf::Clock clock;


    sf::RenderWindow& window = createWindow(800, 600, "SFML-SANDBOX");

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

        // movement with keyboard events
        moveRectangle(rectangle, 1);
        

//     if (event.type == sf::Event::KeyPressed)
//     {
//         // Move the rectangle based on arrow key pressed
//         if (event.key.code == sf::Keyboard::Left)
//         {
//             rectangle.move(-10, 0);
//         }
//         else if (event.key.code == sf::Keyboard::Right)
//         {
//             rectangle.move(10, 0);
//         }
//         else if (event.key.code == sf::Keyboard::Up)
//         {
//             rectangle.move(0, -10);
//         }
//         else if (event.key.code == sf::Keyboard::Down)
//         {
//             rectangle.move(0, 10);
//         }
//     }
// }

        
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