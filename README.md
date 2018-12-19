# __vcmame__  

Update of my original VCMAME project (2001-2003) for adademic purposes   
Copyright (C)2018 Michael G. Brehm    
   
[__MAME__](https://www.mamedev.org/) - Copyright (C) 1997-2018  MAMEDev and contributors   
   
__Baseline version:__ MAME 0.66 (March 10, 2003)   
   
| Platform | Compiles | Packages | Runs | Comments |
| :--- | :---: | :---: | :---: | :--- |
| Win32 | YES | YES | NO | Runs with a tweak to the Windows OSD to set PAGE_EXECUTE_READWRITE on a pair of static buffers used to dynamically execute blitter code |
| x64 | NO | NO | NO | Inline assembly must be converted before this will compile |


