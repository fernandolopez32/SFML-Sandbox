#pragma once

#include <SFML/Graphics.hpp>
#include <map>
#include <string>

class AssetManager 
{
    public :
        // load a texture from a fiel
        void loadTexture(const std::string& name, std::string& fileName);

        // retrive a texture by name 
        sf::Texture& getTexture(const std::string& name);

    private:
        // map of the loaded textures
        std::map<std::string, sf::Texture> m_textures;
    
};