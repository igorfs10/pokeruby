SealedChamber_InnerRoom_MapBorder:: @ 82FE698
	.incbin "data/layouts/SealedChamber_InnerRoom/border.bin"

SealedChamber_InnerRoom_MapBlockdata:: @ 82FE6A0
	.incbin "data/layouts/SealedChamber_InnerRoom/map.bin"

	.align 2
SealedChamber_InnerRoom_Layout:: @ 82FEA68
	.4byte 0x15
	.4byte 0x17
	.4byte SealedChamber_InnerRoom_MapBorder
	.4byte SealedChamber_InnerRoom_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Cave
