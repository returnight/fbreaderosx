/*
 * Copyright (C) 2009 Geometer Plus <contact@geometerplus.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#include "ZLMaemoNetworkManager.h"

void ZLMaemoNetworkManager::createInstance() {
	ourInstance = new ZLMaemoNetworkManager();
}

ZLMaemoNetworkManager::ZLMaemoNetworkManager() {
}

ZLMaemoNetworkManager::~ZLMaemoNetworkManager() {
}

void ZLMaemoNetworkManager::connect() {
	// TODO: implement
}

bool ZLMaemoNetworkManager::providesProxyInfo() const {
	return true;
}

bool ZLMaemoNetworkManager::useProxy() const {
	// TODO: implement
	return false;
}

std::string ZLMaemoNetworkManager::proxyHost() const {
	// TODO: implement
	return "";
}

std::string ZLMaemoNetworkManager::proxyPort() const {
	// TODO: implement
	return 0;
}
