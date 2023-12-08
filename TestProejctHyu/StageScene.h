#pragma once
#include "eSoulBeater.h"
#include "SoulBeaterScene.h"

namespace d2dFramework
{
	class StageScene :
		public SoulBeaterScene
	{
	public:
		StageScene(unsigned int id);
		~StageScene() override=default;
		void Enter() override;
		void Exit() override;
		void SerializeIn(nlohmann::ordered_json& object) override;
		void SerializeOut(nlohmann::ordered_json& object) override;
		inline void SetCurrentStage(eInGameStage stagename);
		inline eInGameStage GetCurrentStage();
		eInGameStage CurrentStage;
	};
	void StageScene::SetCurrentStage(eInGameStage stagename)
	{
		CurrentStage = stagename;
	}
	eInGameStage StageScene::GetCurrentStage()
	{
		return CurrentStage;
	}

}

