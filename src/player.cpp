#include "player.hpp"

Player :: Player(AssetManager& assetManager): m_assetManager(assetManager)
    {
        m_sprite.setTexture(m_assetManager.getTexture("player"));
    }

void Player::draw(sf::RenderWindow& window)
    {
        window.draw(m_sprite);
    }