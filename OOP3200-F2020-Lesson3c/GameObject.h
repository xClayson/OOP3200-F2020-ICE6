#pragma once
#ifndef __GAME_OBJECT__
#define __GAME_OBJECT__

#include <string>
#include <sstream>
#include "Vector2D.h"

class GameObject
{
public:
	// Constructors
	GameObject();
	GameObject(int id, float x, float y);
	GameObject(int id, const Vector2D<float>& position);
	GameObject(const std::string& name, int id, float x, float y);
	GameObject(const std::string& name, int id, const Vector2D<float>& position);

	// Rule of Three
	~GameObject(); // Destructor
	GameObject(const GameObject& other_object); // Copy Constructor
	GameObject& operator=(const GameObject& other_object); // Assignment Operator

	// Accessors
	Vector2D<float> GetPosition() const;
	int GetID() const;
	std::string GetName() const;

	// Mutators
	void SetPosition(float x, float y);
	void SetPosition(const Vector2D<float>& new_position);
	void SetID(int id);
	void SetName(const std::string& name);

	// Utility Functions
	std::string ToString() const;
	std::string ToFile() const;

private:
	int m_id{};
	std::string m_name;
	Vector2D<float> m_position;
};

#endif /* defined (__GAME_OBJECT__) */