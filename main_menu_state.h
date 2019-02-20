#ifndef MAIN_MENU_STATE_H
#define MAIN_MENU_STATE_H

#include "game_state.h"

#include <SFML/Graphics.hpp>

class MainMenuState : public GameState {
public:
	MainMenuState(sf::RenderWindow &gameWindow);
	~MainMenuState();

	virtual void handleEvents(const sf::Event &event);
	virtual void update(sf::Time deltaTime);
	virtual void render();

private:
	sf::Text title;
};

#endif
