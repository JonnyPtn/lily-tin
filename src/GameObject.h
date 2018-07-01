#pragma once

#include "SFML/Graphics/Transformable.hpp"

namespace LilyTin
{
	class GameObject
	{
	public:
		GameObject();
		~GameObject();

		virtual void start() = 0;
		virtual void update() = 0;
		virtual void draw() = 0;

	private:
		bool mDestroyed = false;
		sf::Transform mTransform;

	};
}