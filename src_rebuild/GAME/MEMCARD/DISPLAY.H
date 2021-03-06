#ifndef DISPLAY_H
#define DISPLAY_H


extern struct DISPMAN * __7DISPMANPlPPlP3PADP10FILEFORMATib(struct DISPMAN *this, long *imagePtr, long **sliceIconPtrs, struct PAD *pad, struct FILEFORMAT *fileFormatPtr, int language, unsigned int save); // 0x000F65A8

extern void _._7DISPMAN(struct DISPMAN *this, int __in_chrg); // 0x000FDAD8

extern void DrawTitleBar__7DISPMAN(struct DISPMAN *this); // 0x000F72B8

extern void DrawCards__7DISPMAN(struct DISPMAN *this); // 0x000F7508

extern void DrawMenu__7DISPMAN(struct DISPMAN *this); // 0x000F7688

extern void DrawKeyInfo__7DISPMAN(struct DISPMAN *this); // 0x000F79C8

extern void DrawBlocks__7DISPMAN(struct DISPMAN *this); // 0x000F7C4C

extern void DrawSlices__7DISPMAN(struct DISPMAN *this); // 0x000F819C

extern void write_mess_in_box__7DISPMANG4RECTPciiii(struct DISPMAN *this, struct RECT box, char *text, int font, int r, int g, int b); // 0x000F8B28

extern void DrawBlockName__7DISPMAN(struct DISPMAN *this); // 0x000F8D24

extern void DrawEnterName__7DISPMANPc(struct DISPMAN *this, char *ascii); // 0x000FDBEC

extern void SetMenuOption__7DISPMANi(struct DISPMAN *this, int menuOption); // 0x000FDC6C

extern void SetActiveFunction__7DISPMANi(struct DISPMAN *this, int menuOption); // 0x000FDCBC

extern void MoveActiveAreaTo__7DISPMANi(struct DISPMAN *this, int area); // 0x000FDCC4

extern void SelectNewBlock__7DISPMANi(struct DISPMAN *this, int newBlock); // 0x000FDD0C

extern void ActiveAreaLeft__7DISPMAN(struct DISPMAN *this); // 0x000F8EE4

extern void ActiveAreaRight__7DISPMAN(struct DISPMAN *this); // 0x000F902C

extern void ActiveAreaUp__7DISPMAN(struct DISPMAN *this); // 0x000F9270

extern void ActiveAreaDown__7DISPMAN(struct DISPMAN *this); // 0x000F941C

extern int ActiveAreaSelect__7DISPMANii(struct DISPMAN *this, int x, int y); // 0x000F96F0

extern int GetArea__7DISPMANii(struct DISPMAN *this, int x, int y); // 0x000FDDD0

extern int ActiveAreaConfirm__7DISPMAN(struct DISPMAN *this); // 0x000F9BAC

extern int ActiveAreaCancel__7DISPMAN(struct DISPMAN *this); // 0x000FDE50

extern void AddingBlock__7DISPMANi(struct DISPMAN *this, int n); // 0x000FDF58

extern void DeletingCurrBlock__7DISPMANi(struct DISPMAN *this, int n); // 0x000FDF60

extern void InvalidateArea__7DISPMANG4RECT(struct DISPMAN *this, struct RECT rect); // 0x000FDF68

extern unsigned int intersect__7DISPMANG4RECTT1(struct DISPMAN *this, struct RECT rect1, struct RECT rect2); // 0x000F9FAC

extern void InvalidateArea__7DISPMANi(struct DISPMAN *this, int n); // 0x000FE040

extern void DrawArea__7DISPMANi(struct DISPMAN *this, int n); // 0x000FE098

extern void FlashOn__7DISPMAN(struct DISPMAN *this); // 0x000FE144

extern void FlashOff__7DISPMAN(struct DISPMAN *this); // 0x000FE150

extern unsigned int Update__7DISPMAN(struct DISPMAN *this); // 0x000FA174

extern int PrintKanji__7DISPMANPsiiiiii(struct DISPMAN *this, short *string, int x, int y, int maxChars, int r, int g, int b); // 0x000FA684

extern int FindKanji__7DISPMANs(struct DISPMAN *this, short sjisCode); // 0x000FE160

extern int CentrePrintKanji__7DISPMANPsiiiiii(struct DISPMAN *this, short *string, int x, int y, int maxChars, int r, int g, int b); // 0x000FE1B0

extern int KanjiStrLen__FPsi(short *kanjiStringPtr, int maxChars); // 0x000FE258

extern void darken__7DISPMANG4RECT(struct DISPMAN *this, struct RECT rect); // 0x000FA97C

extern int GetCurrBlock__7DISPMAN(struct DISPMAN *this); // 0x000FE2F4

extern int GetCurrSlice__7DISPMAN(struct DISPMAN *this); // 0x000FE300

extern void draw_card__7DISPMANiiPcb(struct DISPMAN *this, int x, int y, char *text, unsigned int selected); // 0x000FE30C

extern int AddIcon__7DISPMANP9TIMSTRUCTiiiiiib(struct DISPMAN *this, struct TIMSTRUCT *tim, int x, int y, int r, int g, int b, int trans, unsigned int scale); // 0x000FE434

extern int AddMoveImage__7DISPMANP4RECTT1(struct DISPMAN *this, struct RECT *srect, struct RECT *drect); // 0x000FE598

extern int AddSprite__7DISPMANP9TIMSTRUCTiiiiii(struct DISPMAN *this, struct TIMSTRUCT *tim, int x, int y, int r, int g, int b, int trans); // 0x000FE61C

extern int DrawSprite__7DISPMANP9TIMSTRUCTiiiiii(struct DISPMAN *this, struct TIMSTRUCT *tim, int x, int y, int r, int g, int b, int trans); // 0x000FACD4

extern int DrawBox__7DISPMANiiiiiii(struct DISPMAN *this, int x, int y, int w, int h, int r, int g, int b); // 0x000FE72C

extern int AddCircleG16__7DISPMANiiiiiiii(struct DISPMAN *this, int x, int y, int diameter, int complete, int r, int g, int b, int divisor); // 0x000FAED0

extern short MessageBox__7DISPMANiPcbT3(struct DISPMAN *this, int type, char *text, unsigned int bIgnoreEvents, unsigned int bSwapKeys); // 0x000FB304

extern struct RECT ProgressBox__7DISPMANPci(struct DISPMAN *this, char *text, int progress); // 0x000FC950

extern int write_mess_c__7DISPMANPciiiiiiii(struct DISPMAN *this, char *mesPtr, int x, int y, int font, int maxChars, int r, int g, int b, int trans); // 0x000FE834

extern int message_width__7DISPMANPcii(struct DISPMAN *this, char *mesPtr, int font, int maxChars); // 0x000FCC54

extern int justify_mess__7DISPMANPcii(struct DISPMAN *this, char *messPtr, int font, int maxLineLength); // 0x000FCE00

extern int write_mess__7DISPMANPciiiiiiii(struct DISPMAN *this, char *mesPtr, int x, int y, int font, int maxChars, int r, int g, int b, int trans); // 0x000FD000

extern int font_ref__7DISPMANcb(struct DISPMAN *this, char c, unsigned int accent); // 0x000FD410

extern void Tim2VRAM__7DISPMANPlP9TIMSTRUCTibiiii(struct DISPMAN *this, long *timDataPtr, struct TIMSTRUCT *destTimPtr, int abr, unsigned int setCoords, int clutX, int clutY, int iconX, int iconY); // 0x000FD658

extern void download_block_icon__7DISPMANiiii(struct DISPMAN *this, int iconX, int iconY, int clutX, int clutY); // 0x000FE908

extern void wipe_screen__7DISPMANii(struct DISPMAN *this, int wt, int step); // 0x000FD86C

extern void move_screen__7DISPMANiii(struct DISPMAN *this, int startY, int finishY, int steps); // 0x000FEA44

extern int GetCyclesPerSecond__7DISPMAN(struct DISPMAN *this); // 0x000FEB24


#endif
