#pragma once
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<iostream>

class Player
{
private:
    sf::Sprite sprite;
    sf::Texture texture;
    void initVariables();
    void initTexture();
    void initSprite();
    float mouvementSpeed;
    float attackCooldown;
    float attackCooldownMax;
    int hp;
    int hpMax;
    int points;

public:
    Player();


    virtual ~Player();
    const sf::Vector2f& getPos() const;
    const sf::FloatRect getBounds() const;
    const int& getHp() const;
    const int& getHpMax() const;
    void gainPoints(int points);
    void setPosition(const sf::Vector2f pos);
    void setPosition(const float x, const float y);
    void setHp(const int hp);
    void loseHp(const int value);
    void move(const float dirX, const float dirY);
    const bool canAttack();
    void updateAttack();
    void update();
    void setMovementSpeed(const float speed);
    void render(sf::RenderTarget& target);
};






