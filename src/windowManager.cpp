#include "windowManager.hpp"

// MAKING A WINDOW OF SIZE 800PX BY 600PX WITH A TITLE OF SFML-SANDOBX

    sf::RenderWindow& createWindow (int width, int height, const std::string& title)
    {
        static sf::RenderWindow window(sf::VideoMode(width, height), title);
        return window;
    }