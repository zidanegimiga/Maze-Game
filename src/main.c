#include "../headers/header.h"

/**
* Project Logic:
* Start the game
* Load Game window
* If window fails to load: End the game
* Else:
* Initialize game properties like:
* Where does the player start
* His speed of movement
* Everything is initalised to 0 for the first attempt. 
* The player has three chances to move without touching the wall.
* If he does, he loses round 1.
* On round two, he resumes from his previous position
* The game has three rounds.
* After the third attempt, Game over is displayed and the game quits.
*
*/

/**
 * setup_game - initialize player variables and load wall textures
 *
*/

void setup_game(void)
{

	player.x = SCREEN_WIDTH / 2;
	player.y = SCREEN_HEIGHT / 2;
	player.width = 1;
	player.height = 30;
	player.walkDirection = 0;
	player.walkSpeed = 100;
	player.turnDirection = 0;
	player.turnSpeed = 45 * (PI / 180);
	player.rotationAngle = PI / 2;
}
