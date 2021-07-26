// Fill out your copyright notice in the Description page of Project Settings.


#include "Cubes10000.h"
#include "HardwareDisplay.h"


FString UHardwareDisplay::GetCPUBrandName()
{
	return FWindowsPlatformMisc::GetCPUBrand();
}

FString UHardwareDisplay::GetCPUVendorName()
{
	return FWindowsPlatformMisc::GetCPUVendor();
}

FString UHardwareDisplay::GetGPUBrandName()
{
	return FWindowsPlatformMisc::GetPrimaryGPUBrand();
}

int32 UHardwareDisplay::GetCPUCores()
{
	return FWindowsPlatformMisc::NumberOfCores();
}
