//
// Created by saturne on 14/03/25.
//
#include <libsystem.hpp>
#include <filesystem>
#include "determine.h"


//lafreux
#if defined(__linux__)
std::string subStr = ".pio/build/linux";
#endif
#if defined(_WIN32) || defined(_WIN64)
std::string subStr = ".pio/build/linux";
#endif
#if defined(__APPLE__)
std::string subStr = ".pio/build/linux";
#endif
std::string storageFolder = "storage";


std::string getStoragePath(){
	std::string projectPath = std::filesystem::current_path();
	int index = projectPath.find(".pio");
	if (index > 0)
		projectPath.erase(index, subStr.length());
	libsystem::log("Asked for project path: " + projectPath);
	return projectPath;
}