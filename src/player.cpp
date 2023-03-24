#include "player.hpp"

 Player::Player(AssetManager& AssetManager)
    : m_assetManager(AssetManager)
    {
        m_sprite.setTexture(m_assetManager.getTexture("player"));
    }
