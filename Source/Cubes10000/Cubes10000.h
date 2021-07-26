// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


class FCubes10000GameModuleImpl : public IModuleInterface
{
public:
	// IModuleInterface Methods
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	virtual bool IsGameModule() const override
	{
		return true;
	}
#if UE_SERVER
private:
	// Methods added to support GSDK
	void ConnectToPlayFabAgent();
	void LogInfo(const FString& message);
	void LogError(const FString& message);
#endif
};