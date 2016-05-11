/*Pong
 *Autore: Carmine
 *Changelog:
 *	0.1:
 *
 */
#include <SFML\Graphics.hpp>
#include <string>
#include "main.h"
sf::Sprite ball;
sf::RenderWindow gameWindow(sf::VideoMode::getDesktopMode(), "Pong (by Carmine)", sf::Style::Default);
int main() {
	initialize();
	run();
}
void initialize() { //carica il gioco alla posizione iniziale
	loadTextureIntoSprite(ball, "Assets/ball.png");
	gameWindow.draw(ball);
	ball.setPosition(sf::VideoMode::getDesktopMode().width / 2, sf::VideoMode::getDesktopMode().height / 2);
	gameWindow.display();
}
void loadTextureIntoSprite(sf::Sprite sprite, std::string path) { //carica un'immagine da un percorso specificato
	sf::Texture texture;										  //a uno sprite
	texture.loadFromFile(path);
	sprite.setTexture(texture);
}
void run() {
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	while (gameWindow.isOpen())
	{
		processEvents();
		timeSinceLastUpdate += clock.restart();
		while(timeSinceLastUpdate > timePerFrame)
		{
			timeSinceLastUpdate -= timePerFrame;
			processEvents();
			update();
		}
		render();
	}
}
