#ifndef UTILS_HPP
#define UTILS_HPP

#include <SFML/Graphics.hpp>
#include <unordered_map>
#include "../constants/constants.hpp"

std::unordered_map<Keys, sf::Keyboard::Key> playerKeyBindings(sf::Keyboard::Key up, sf::Keyboard::Key down);

#endif