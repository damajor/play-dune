/* $Id: mentat.h 1947 2011-06-25 16:48:57Z glx $ */

/** @file src/gui/mentat.h Mentat gui definitions. */

#ifndef GUI_MENTAT_H
#define GUI_MENTAT_H

extern uint8 g_shoulderLeft;
extern uint8 g_shoulderTop;
extern bool g_disableOtherMovement;
extern bool g_interrogation;
extern uint32 g_interrogationTimer;

struct Widget;

extern bool GUI_Widget_Mentat_Click(struct Widget *w);
extern void GUI_Mentat_ShowBriefing();
extern void Async_GUI_Mentat_ShowWin();
extern void Async_GUI_Mentat_ShowLose();
extern void GUI_Mentat_Display(const char *wsaFilename, uint8 houseID);
extern void GUI_Mentat_Animation(uint16 speakingMode);
extern void GUI_Mentat_SelectHelpSubject(int16 difference);
extern void GUI_Mentat_Create_HelpScreen_Widgets();
extern bool GUI_Mentat_List_Click(struct Widget *w);
extern void GUI_Mentat_ScrollBar_Draw(struct Widget *w);
extern uint16 GUI_Mentat_SplitText(char *str, uint16 maxWidth);
extern uint16 GUI_Mentat_Tick();

extern void GUI_Mentat_Show(char *stringBuffer, const char *wsaFilename, struct Widget *w, bool unknown);
extern void Async_GUI_Mentat_Loop(const char *wsaFilename, char *pictureDetails, char *text, bool arg0C, struct Widget *w);

#endif /* GUI_MENTAT_H */
