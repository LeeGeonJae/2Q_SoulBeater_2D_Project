#include "StageScene.h"
#include "SceneLoader.h"

namespace d2dFramework
{
	StageScene::StageScene(unsigned int id)
		:SoulBeaterScene(id)
	{
		SetmSceneType(eUIManagerType::InGame);
	}

	void StageScene::Enter()
	{
		SceneLoader::LoadScene(this);
	}

	void StageScene::Exit()
	{
		SoulBeaterScene::Exit();
	}

	void StageScene::SerializeIn(nlohmann::ordered_json& object)
	{
		CurrentStage = object["InGameStage"].get<eInGameStage>();
		SoulBeaterScene::SerializeIn(object);
	}

	void StageScene::SerializeOut(nlohmann::ordered_json& object)
	{
		object["InGameStage"]=(int)CurrentStage;
		SoulBeaterScene::SerializeOut(object);
	}
}
