#pragma once

#include <string>
#include <Sprite.h>
#include <SpriteObject.h>
#include <vector>

using namespace std;

class GameMap
{
public:
	GameMap();
	~GameMap();

	static GameMap* GetReference();

	vector<StaticCollidable*>* GetMapTiles();

	void LoadMap(int Level);
	void ClearMap();
private:
	static GameMap* singleton;

	vector<StaticCollidable*> MapTiles;

	void AddNewTile(char* tileRead, int posX, int posY, vector<Sprite>* tiles);
	void ReadMapLine(string* line, int posY, vector<Sprite>* tiles);
};