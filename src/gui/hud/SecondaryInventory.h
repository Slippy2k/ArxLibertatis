/*
 * Copyright 2015 Arx Libertatis Team (see the AUTHORS file)
 *
 * This file is part of Arx Libertatis.
 *
 * Arx Libertatis is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Arx Libertatis is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Arx Libertatis.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ARX_GUI_HUD_SECONDARYINVENTORY_H
#define ARX_GUI_HUD_SECONDARYINVENTORY_H

#include "gui/hud/HudCommon.h"
#include "math/Vector.h"

class TextureContainer;

extern TextureContainer * BasicInventorySkin;
extern float InventoryX;

class PickAllIconGui : public HudIconBase {
private:
	Vec2f m_size;
	
public:
	void init();
	void update();
	void updateInput();
};

class CloseSecondaryInventoryIconGui : public HudIconBase {
private:
	Vec2f m_size;
	
public:
	void init();
	void update();
	void updateInput();
};


class SecondaryInventoryHud : public HudItem {
private:
	Vec2f m_size;
	TextureContainer * ingame_inventory;
	TextureContainer * m_canNotSteal;
	
public:
	void init();
	void update();
	void draw();
};

extern SecondaryInventoryHud g_secondaryInventoryHud;

void manageEditorControlsHUD2();

#endif // ARX_GUI_HUD_SECONDARYINVENTORY_H
