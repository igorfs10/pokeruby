ShoalCave_LowTideLowerRoom_EventObjects:: @ 838DE3C
	object_event 1, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 25, 3, 3, 1, 0, 0, 0, 0, S_PushableBoulder, FLAG_TEMP_11
	object_event 2, EVENT_OBJ_GFX_BLACK_BELT, 0, 11, 4, 3, 2, 1, 1, 0, 0, ShoalCave_LowTideLowerRoom_EventScript_15E44F, 0

ShoalCave_LowTideLowerRoom_MapWarps:: @ 838DE6C
	warp_def 7, 2, 3, 3, MAP_SHOAL_CAVE_LOW_TIDE_INNER_ROOM
	warp_def 2, 6, 3, 4, MAP_SHOAL_CAVE_LOW_TIDE_INNER_ROOM
	warp_def 19, 11, 3, 5, MAP_SHOAL_CAVE_LOW_TIDE_INNER_ROOM
	warp_def 28, 11, 3, 0, MAP_SHOAL_CAVE_LOW_TIDE_ICE_ROOM

ShoalCave_LowTideLowerRoom_MapBGEvents:: @ 838DE8C
	bg_event 18, 2, 3, 0, 0, ShoalCave_LowTideLowerRoom_EventScript_15E413

ShoalCave_LowTideLowerRoom_MapEvents:: @ 838DE98
	map_events ShoalCave_LowTideLowerRoom_EventObjects, ShoalCave_LowTideLowerRoom_MapWarps, 0x0, ShoalCave_LowTideLowerRoom_MapBGEvents
