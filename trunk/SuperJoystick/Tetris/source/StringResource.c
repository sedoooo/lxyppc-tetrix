/*******************************************************************************
* File Name          : StringResource.c
* Author             : lxyppc
* Version            : V1.0
* Date               : 10-01-21
* Description        : String resouce file
*******************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "StringResource.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

const LPCSTR StringTable_ENG[STR_LAST] ={	
  [STR_CAMERA_ON]       = "Camera On ",
  [STR_CAMERA_OFF]      = "Camera Off",
  [STR_JOYSTICK]        = "Joystick",
  [STR_MOUSE]           = "Mouse",
  [STR_AIR_MOUSE]       = "Air Mouse",
  [STR_KEYBOARD]        = "Keyboard",
  [STR_KB_NORMAL]       = "Normal",
  [STR_KB_SEQ]          = "Senquence",
  [STR_TETRIS]          = "Play Tetris",
  [STR_TETRIS_PAUSE]    = "Game Pause  ",
  [STR_TETRIS_OVER]     = "Game Over   ",
  [STR_TETRIS_PLAY]     = "Game Running",
  [STR_TETRIS_SWITCH]   = "Pause game first!",
  [STR_ABOUT_0]         = "Super Joystick",
  [STR_ABOUT_1]         = "lxyppc@163.com",
  [STR_ABOUT_2]         = "All rights reserved",
  [STR_MOUSE_0]         = "R1 - Scorll Up",
  [STR_MOUSE_1]         = "R2 - Scroll Down",
  [STR_MOUSE_2]         = "Buttons:",
  [STR_MOUSE_3]         = "4-Left 3-Mid 2-Right",
  [STR_SETTING]         = "Setting",
  [STR_LANG_CHS]        = /*"简体中文"*/"\xA7\x84\x82\x99",
  [STR_LANG_ENG]        = "English",
  [STR_ABOUT]           = "About"
};

const LPCSTR StringTable_CHS[STR_LAST] ={	
  [STR_CAMERA_ON]       = /*"摄像头开"*/"\x98\x87\x8D\x92",
  [STR_CAMERA_OFF]      = /*"摄像头关"*/"\x98\x87\x8D\x89",
  [STR_JOYSTICK]        = /*"游戏手柄"*/"\xA3\x94\x96\xA0",
  [STR_MOUSE]           = /*"鼠标"*/"\xB4\xA1",
  [STR_AIR_MOUSE]       = /*"感应鼠标"*/"\x93\x91\xB4\xA1",
  [STR_KEYBOARD]        = /*"键盘"*/"\xB2\xA6",
  [STR_KB_NORMAL]       = /*"正常"*/"\xA2\x8F",
  [STR_KB_SEQ]          = /*"顺序"*/"\xB3\x90",
  [STR_TETRIS]          = /*"俄罗斯方块"*/"\x85\xAA\x9A\x9B\x8C",
  [STR_TETRIS_PAUSE]    = /*"游戏暂停    "*/"\xA3\x94\x9C\x86    ",
  [STR_TETRIS_OVER]     = /*"游戏结束    "*/"\xA3\x94\xA9\x9F    ",
  [STR_TETRIS_PLAY]     = /*"游戏进行中.."*/"\xA3\x94\xB1\xAC\x82..",
  [STR_TETRIS_SWITCH]   = /*"请先暂停游戏!"*/"\xAE\x88\x9C\x86\xA3\x94!",
  [STR_ABOUT_0]         = /*"超级手柄"*/"\xAF\xA8\x96\xA0",
  [STR_ABOUT_1]         = "lxyppc@163.com",
  [STR_ABOUT_2]         = /*"版权所有"*/"\xA5\x9E\x95\x9D",
  [STR_MOUSE_0]         = /*"R1 - 滚轮向上"*/"R1 - \xA4\xB0\x8B\x80",
  [STR_MOUSE_1]         = /*"R2 - 滚轮向下"*/"R2 - \xA4\xB0\x8B\x81",
  [STR_MOUSE_2]         = /*"按键:"*/"\x97\xB2:",
  [STR_MOUSE_3]         = /*"4左  3中  2右"*/"4\x8E  3\x82  2\x8A",
  [STR_SETTING]         = /*"设置"*/"\xAD\xAB",
  [STR_LANG_CHS]        = /*"简体中文"*/"\xA7\x84\x82\x99",
  [STR_LANG_ENG]        = "English",
  [STR_ABOUT]           = /*"关于"*/"\x89\x83"
};

/** Replaced strings:
      上下中于体俄停像先关右向块头左常序应开感戏所手按摄文斯方暂有权束柄标正游滚版盘简级结罗置行设请超轮进键顺鼠

String Lookup Table:
     Char: 上 下 中 于 体 俄 停 像 先 关 右 向 块 头 左 常 
    Value: 80 81 82 83 84 85 86 87 88 89 8A 8B 8C 8D 8E 8F 
     Char: 序 应 开 感 戏 所 手 按 摄 文 斯 方 暂 有 权 束 
    Value: 90 91 92 93 94 95 96 97 98 99 9A 9B 9C 9D 9E 9F 
     Char: 柄 标 正 游 滚 版 盘 简 级 结 罗 置 行 设 请 超 
    Value: A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 AA AB AC AD AE AF 
     Char: 轮 进 键 顺 鼠 
    Value: B0 B1 B2 B3 B4 
*/
