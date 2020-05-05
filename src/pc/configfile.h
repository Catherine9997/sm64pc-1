#ifndef CONFIGFILE_H
#define CONFIGFILE_H

extern bool         configFullscreen;
extern unsigned int configKeyA;
extern unsigned int configKeyB;
extern unsigned int configKeyStart;
extern unsigned int configKeyR;
extern unsigned int configKeyZ;
extern unsigned int configKeyCUp;
extern unsigned int configKeyCDown;
extern unsigned int configKeyCLeft;
extern unsigned int configKeyCRight;
extern unsigned int configKeyStickUp;
extern unsigned int configKeyStickDown;
extern unsigned int configKeyStickLeft;
extern unsigned int configKeyStickRight;
extern unsigned int configKeyJump;
extern unsigned int configKeyPunch;
extern unsigned int configKeyCrouch;
extern unsigned int configKeyMenu;

void configfile_load(const char *filename);
void configfile_save(const char *filename);

#endif