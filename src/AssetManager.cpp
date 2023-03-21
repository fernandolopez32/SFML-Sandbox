#include "AssetManager.hpp"

    // load texture from a file 

    void AsssetManager::loadTexture(const std::string& name, std::string& fileName)
    {
        sf::Texture = texture;
        if(!texture.loadFromFile("/Resources/img/red.png"))
        {
            // error hangler 
            std::cerr << "Error loading texture : " << name << "From file : " << fileName << std::endl;
            throw std::runtime_error("Failed to load texture");
        }
        m_textures[name] = texture;
    }

    // retriving texture by name 
    sf::Texture& AssetManager::getTexture(const std::string& name)
    {
        return m_textures.at(name);
    }
