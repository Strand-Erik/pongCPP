#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

#include <SFML/Graphics.hpp>

extern const int WINDOW_HEIGHT;
extern const int WINDOW_WIDTH;
extern const int DISTANCE_TO_BORDER;
extern const float BOUNCE_FACTOR;
extern const int BALL_SIDE_LEN;
extern const sf::Vector2f PLAYER_DIMENSIONS;

enum Keys {
    UP, DOWN
};

enum BoundaryType {
    Bouncy, Functional
};

#endif
