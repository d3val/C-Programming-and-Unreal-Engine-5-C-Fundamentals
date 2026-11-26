#include <iostream>

//Definicion de un struct
struct MyStruct {
	int value;
};
struct Vector2
{
	float x;
	float y;

	//Definicion de una funcion dentro del struct
	void ToString() {
		std::cout << "Vector2(" << x << ", " << y << ")" << std::endl;
	}
};

struct GameStats
{
	int currentLevel = 1;
	int gameScores[10]{ 10,5 };
	Vector2 playerPosition{ 0.0f, 0.0f };

	void setPlayerPosition(float newX, float newY) {
		playerPosition.x = newX;
		playerPosition.y = newY;
	}

	Vector2 getPlayerPosition() {
		return playerPosition;
	}
};

struct Player
{
	std::string name;
	int health = 100;
	int score = 0;
	void PrintInfo() {
		std::cout << "Player Name: " << name << std::endl;
		std::cout << "Health: " << health << std::endl;
		std::cout << "Score: " << score << std::endl;
	}
};

void RelocatePLayer(Vector2 newPlayerPosition, Player tarjetPlayer) {
	std::cout << "Relocating " << tarjetPlayer.name << " to position : (" << newPlayerPosition.x << ", " << newPlayerPosition.y << ")" << std::endl;
}

int main() {
	MyStruct myStruct{ 0 };
	myStruct.value = 42;
	std::cout << "Value: " << myStruct.value << std::endl;
	Vector2 position{ 3.5f, 7.2f };
	position.ToString();

	GameStats game;
	game.gameScores[0] = 100;

	std::cout << game.currentLevel << std::endl;
	std::cout << game.gameScores[0] << std::endl;
	game.setPlayerPosition(5.0f, 10.0f);
	game.getPlayerPosition().ToString();

	//Arrays of structs
	Player player1{ "Juan" }, player2{ "Maria" };

	Player players[]{ player1, player2 };
	for (auto player : players) {
		player.PrintInfo();
	}

	RelocatePLayer(Vector2{ 10.0f, 20.0f }, player1);
	return 0;
}