#ifndef COSMETIC_H
#define COSMETIC_H


extern void LoadCosmetics(int level); // 0x00031160

extern void ProcessCosmeticsLump(char *lump_ptr, int lump_size); // 0x000311B0

extern void AddReverseLight(struct _CAR_DATA *cp); // 0x0002F994

extern void SetupSpecCosmetics(char *loadbuffer); // 0x00031360

extern void AddIndicatorLight(struct _CAR_DATA *cp, int Type); // 0x0002FAEC

extern void AddBrakeLight(struct _CAR_DATA *cp); // 0x0002FDE4

extern void AddCopCarLight(struct _CAR_DATA *cp); // 0x00030148

extern void AddNightLights(struct _CAR_DATA *cp); // 0x00030544

extern void AddSmokingEngine(struct _CAR_DATA *cp, int black_smoke, int WheelSpeed); // 0x00030D9C

extern void AddFlamingEngine(struct _CAR_DATA *cp); // 0x00030FAC


#endif