#pragma once

#include "Test.h"

namespace test {
	class TestClearColor : public test
	{
	public:
		TestClearColor();
		~TestClearColor();

		void OnUpdate(float deltaTime);
		void OnRender();
		void OnImGuiRender();
	private:
		float m_ClearColor[4];
	};
}