#include "windowManager.hpp"

// sf::RenderWindow& createWindow(int width, int height, const std::string& title)
// {
//     static sf::RenderWindow window(sf::VideoMode(width, height), title);
//     return window;
// }

    sf::RenderWindow& createWindow (int width, int height, const std::string& title)
    {
        static sf::RenderWindow window(sf::VideoMode(width, height), title);
        return window;
    }