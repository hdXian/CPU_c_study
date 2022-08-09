#include <stdio.h>

/*
const int GAMESTATE_0 = 0;
const int GAMESTATE_1 = 1;
const int GAMESTATE_2 = 2;
const int GAMESTATE_3 = 3;
*/

enum EGameState {
	GAMESTATE_MENU,
	GAMESTATE_PLAY,
	GAMESTATE_PAUSE,
	GAMESTATE_GAMEOVER
};


int main() {
	/*
	* 상수를 선언하는 3가지 방법
	* 1. const <type>
	* 2. #define
	* 3. enum
	*/
}