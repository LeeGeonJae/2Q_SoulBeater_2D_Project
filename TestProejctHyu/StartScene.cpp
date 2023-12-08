#include "StartScene.h"

namespace d2dFramework
{
	StartScene::StartScene(unsigned id)
		:SoulBeaterScene(id)
	{
		SetmSceneType(eUIManagerType::StartScene);
	}

	void StartScene::Enter()
	{
		Scene::Enter();
	}

	void StartScene::Exit()
	{
		Scene::Exit();
	}
}

