#pragma once

#include "Viewer/IFollow.h"

class Marco : public IFollow
{
public:
	Marco(Shader* shader, Vector2 position, Vector2 scale);
	~Marco();

	void Update();
	void Render();

	void Focus(Vector2* focusPosition) override;

	Collider* GetCollider() { return collider; }
	Matrix GetWorld();

	Sprite* GetSprite();

private:
	Shader* shader = nullptr;
	Animation* animation = nullptr;
	PerFrame* perFrame = nullptr;

	float speed = 200.0f;
	Vector2 focusOffset = Vector2(180, 140);

	Collider* collider = nullptr;
};