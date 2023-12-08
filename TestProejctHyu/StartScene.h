#pragma once
#include "SoulBeaterScene.h"


namespace d2dFramework
{
	class StartScene :
		public SoulBeaterScene
	{
	public:
		StartScene(unsigned id);
		~StartScene()override = default;

		void Enter() override;
		void Exit() override;
	};


}
