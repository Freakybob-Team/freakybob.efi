/*
MIT License

Copyright (c) 2025 Freakybob-Team

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include <Uefi.h>
#include <Library/PcdLib.h>
#include <Library/UefiLib.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>

#define EFI_BLACK         0x00
#define EFI_BLUE          0x01
#define EFI_GREEN         0x02
#define EFI_CYAN          (EFI_BLUE | EFI_GREEN)
#define EFI_RED           0x04
#define EFI_MAGENTA       (EFI_BLUE | EFI_RED)
#define EFI_BROWN         (EFI_GREEN | EFI_RED)
#define EFI_LIGHTGRAY     (EFI_BLUE | EFI_GREEN | EFI_RED)
#define EFI_BRIGHT        0x08
#define EFI_DARKGRAY      (EFI_BLACK | EFI_BRIGHT)
#define EFI_LIGHTBLUE     (EFI_BLUE | EFI_BRIGHT)
#define EFI_LIGHTGREEN    (EFI_GREEN | EFI_BRIGHT)
#define EFI_LIGHTCYAN     (EFI_CYAN | EFI_BRIGHT)
#define EFI_LIGHTRED      (EFI_RED | EFI_BRIGHT)
#define EFI_LIGHTMAGENTA  (EFI_MAGENTA | EFI_BRIGHT)
#define EFI_YELLOW        (EFI_BROWN | EFI_BRIGHT)
#define EFI_WHITE         (EFI_BLUE | EFI_GREEN | EFI_RED | EFI_BRIGHT)

GLOBAL_REMOVE_IF_UNREFERENCED EFI_STRING_ID     mStringHelpTokenId = STRING_TOKEN (STR_FREAKYBOBEFI_HELP_INFORMATION);

EFI_STATUS EFIAPI UefiMain (IN EFI_HANDLE ImageHandle, IN EFI_SYSTEM_TABLE *SystemTable) {
    EFI_INPUT_KEY Key;
    EFI_STATUS Status;

    UINT32  Index;

    SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW);

    Index = 0;

    if (FeaturePcdGet (PcdFreakybobEfiPrintEnable)) {
        for (Index = 0; Index < PcdGet32 (PcdFreakybobEfiPrintTimes); Index++) {
            Print(L"Hello everyone! I am Freakybob here with you before the OS even started!\n");
            Print(L"freakybob.site was made by ");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_MAGENTA); // change to magenta
            Print(L"5quirrel");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
            Print(L", ");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
            Print(L"Wish");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
            Print(L", ");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_LIGHTMAGENTA); // change to light magenta
            Print(L"#2 twitter hater");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
            Print(L" and other contributors like ");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_CYAN); // change to cyan
            Print(L"mpax235");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
            Print(L", ");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_LIGHTBLUE); // change to cyan
            Print(L"nomaakip");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
            Print(L" and ");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_GREEN); // change to yellow
            Print(L"names");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
            Print(L"!\n\n");
            //
            // Freakybob ACSII Print
            //
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
            Print(L"                      _    __    __    __    __    _        \n");
            Print(L"                     |0\\__/00\\__/00\\__/00\\__/00\\__/0|       \n");
            Print(L"                     \\000000000000000000000000000000/       \n");
            Print(L"                      |0000000000000000000000000000|        \n");
            Print(L"                     /000");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
            Print(L"/000000\\");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
            Print(L"00000000");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
            Print(L"/000000\\");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
            Print(L"000\\\n");

            Print(L"                     \\00");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
            Print(L"|00");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_CYAN); // change to cyan
            Print(L"/00\\");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
            Print(L"00|");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
            Print(L"000000");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
            Print(L"|00");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_CYAN); // change to cyan
            Print(L"/00\\");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
            Print(L"00|");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
            Print(L"00/\n");

            Print(L"                      |0");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
            Print(L"|00");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_CYAN); // change to cyan
            Print(L"\\00/");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
            Print(L"00|");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
            Print(L"000000");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
            Print(L"|00");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_CYAN); // change to cyan
            Print(L"\\00/");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
            Print(L"00|");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
            Print(L"0|\n");

            Print(L"                     /000");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
            Print(L"\\000000/");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
            Print(L"00/  \\00");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
            Print(L"\\000000/");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
            Print(L"000\\ \n");

            Print(L"                     \\0000000000000\\__/0000000000000/ \n");

            Print(L"                   ");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
            Print(L"___");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
            Print(L"|0");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLACK); // change to black
            Print(L"\\");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
            Print(L"000000000000000000000000");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLACK); // change to black
            Print(L"/");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
            Print(L"0|");
            SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
            Print(L"___ \n");

            Print(L"                  /  /   \\                      /   \\  \\    \n");
            Print(L"                 |   \\    \\____________________/    /   |   \n");
            Print(L"                 |____|         |__|   |__|        |____|   \n");
            Print(L"                 / / /  __    __    __    __    __  \\ \\ \\   \n");
            Print(L"                 | | |_/  \\__/  \\__/  \\__/  \\__/  \\_| | |   \n");
            Print(L"                 | | |             \\  /             | | |   \n");
            Print(L"                 | | |_____________/  \\_____________| | |   \n");
            Print(L"                 | | |             \\__/             | | |   \n");
            Print(L"                 | | |______________________________| | |   \n");
            Print(L"                 | |     |_____|           |_____|    | |   \n");
            Print(L"                 /|\\       | |               | |      /|\\   \n");
            Print(L"                 |||       |_|               |_|      |||   \n");
            Print(L"                           | |               | |            \n");
            Print(L"                           | |               | |            \n");
            Print(L"                         __|_|               |_|__          \n");
            Print(L"                        /____|               |____\\         \n");

            while (TRUE) {
                Status = SystemTable->ConIn->ReadKeyStroke(SystemTable->ConIn, &Key);

                if (Status == EFI_SUCCESS) {
                    if (Key.ScanCode == SCAN_ESC) {
                        return EFI_SUCCESS;
                    } else if (Key.ScanCode == SCAN_F1) {
                        SystemTable->ConOut->ClearScreen(SystemTable->ConOut); // this will clear out all text and even the manufacturer's logo if present (for example like the lenovo logo or the coreboot logo)
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"These people who made freakybob.site possible!\n\n");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_MAGENTA); // change to magenta
                        Print(L"Squirrel");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLUE); // change to blue
                        Print(L" - Squirrel bought the domain and does most of all the coding!\n");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
                        Print(L"Wish");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLUE); // change to blue
                        Print(L" - Wish is a main developer for the website and made it so the music gallery can live on!\n");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_LIGHTMAGENTA); // change to light magenta
                        Print(L"#2 Twitter Hater");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLUE); // change to blue
                        Print(L" - #2 Twitter Hater helped with giving all sorts of spongebob images!\n");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_CYAN); // change to cyan
                        Print(L"mpax235");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLUE); // change to blue
                        Print(L" - mpax235 helps with the 3DS and IE6 versions! He also makes little tweaks to improve the site.\n");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_GREEN); // change to green
                        Print(L"names");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLUE); // change to blue
                        Print(L" - names helps with the Freakyblog, and also improves the sites!\n");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_LIGHTCYAN); // change to light cyan
                        Print(L"nomaakip");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLUE); // change to blue
                        Print(L" - Nomaakip helps fix the site and helped designing the lb website!\n\n\n");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"Press F2 to check out other people in the team!\n");
                        Print(L"Press F3 to check out some other people!\n");
                        Print(L"Press F10 to return to the main screen");
                    } else if (Key.ScanCode == SCAN_F2) {
                        SystemTable->ConOut->ClearScreen(SystemTable->ConOut);
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"The Team!!!\n\n");
                        Print(L"-----------------\n");
                        Print(L"Graphics team\n");
                        Print(L"-----------------\n");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_GREEN); // change to green
                        Print(L"Sspruce");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLUE); // change to blue
                        Print(L" - Is apart of the Freakybob-team's graphics team (Is the only one :sob:) He's really good and can cook for whatever he needs to make :fire:\n\n\n");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"-----------------\n");
                        Print(L"Testers team\n");
                        Print(L"-----------------\n");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_MAGENTA); // change to magenta
                        Print(L"Tina");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLUE); // change to blue
                        Print(L" - Helps with testing the macOS versions of FreakyBrowse!\n\n\n");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"Press F1 to check out the people who made freakybob.site possible!\n");
                        Print(L"Press F3 to check out some other people!\n");
                        Print(L"Press F10 to return to the main screen");
                    } else if (Key.ScanCode == SCAN_F3) {
                        SystemTable->ConOut->ClearScreen(SystemTable->ConOut);
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"People who didn't help but still deserve to be here :)\n\n");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_CYAN); // change to cyan
                        Print(L"Saam");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLUE); // change to blue
                        Print(L" - Saam is cool yay!\n");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_LIGHTMAGENTA); // change to light magenta
                        Print(L"KM");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLUE); // change to blue
                        Print(L" - Is now officially cool!\n");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BROWN); // change to brown
                        Print(L"Noah");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLUE); // change to blue
                        Print(L" - Noah is awesome frfr\n");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_GREEN); // change to green
                        Print(L"Gianca");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLUE); // change to blue
                        Print(L" - Fortnite Playing Twi-I mean, Really good at Fortnite!\n");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_RED); // change to red
                        Print(L"George");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLUE); // change to blue
                        Print(L" - The Coolest Crackhead On Earth!\n");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_GREEN); // change to green
                        Print(L"Nintendofan64");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLUE); // change to blue
                        Print(L" - The coolest Nintendo Fan on Earth!\n");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLUE); // change to blue
                        Print(L"Lapis");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLUE); // change to blue
                        Print(L" - Is a really nice and cool person!\n\n\n");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"Press F1 to check out the people who made freakybob.site possible!\n");
                        Print(L"Press F2 to check out some other people in the team!\n");
                        Print(L"Press F10 to return to the main screen");
                    } else if (Key.ScanCode == SCAN_F9) {
                        SystemTable->ConOut->ClearScreen(SystemTable->ConOut);
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"hi greg how are you doing?\n");
                        gBS->Stall(2000000);
                        Print(L"ok bye greg i am kicking you back to the EFI boot manager/menu");
                        gBS->Stall(2000000);
                        return EFI_SUCCESS; // kick greg back to the EFI boot manager/menu
                    } else if (Key.ScanCode == SCAN_F10) {
                        SystemTable->ConOut->ClearScreen(SystemTable->ConOut);

                        // ------------------------------------------------------------------------
                        // make sure to update this after changing the the index screen (can someone make it so it will execute a function instead)
                        // ------------------------------------------------------------------------
                        Print(L"Hello everyone! I am Freakybob here with you before the OS even started!\n");
                        Print(L"freakybob.site was made by ");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_MAGENTA); // change to magenta
                        Print(L"5quirrel");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L", ");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
                        Print(L"Wish");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L", ");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_LIGHTMAGENTA); // change to light magenta
                        Print(L"#2 twitter hater");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L" and other contributors like ");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_CYAN); // change to cyan
                        Print(L"mpax235");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L", ");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_LIGHTBLUE); // change to cyan
                        Print(L"nomaakip");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L" and ");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_GREEN); // change to yellow
                        Print(L"names");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"!\n\n");
                        //
                        // Freakybob ACSII Print
                        //
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"                      _    __    __    __    __    _        \n");
                        Print(L"                     |0\\__/00\\__/00\\__/00\\__/00\\__/0|       \n");
                        Print(L"                     \\000000000000000000000000000000/       \n");
                        Print(L"                      |0000000000000000000000000000|        \n");
                        Print(L"                     /000");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
                        Print(L"/000000\\");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"00000000");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
                        Print(L"/000000\\");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"000\\\n");

                        Print(L"                     \\00");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
                        Print(L"|00");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_CYAN); // change to cyan
                        Print(L"/00\\");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
                        Print(L"00|");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"000000");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
                        Print(L"|00");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_CYAN); // change to cyan
                        Print(L"/00\\");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
                        Print(L"00|");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"00/\n");

                        Print(L"                      |0");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
                        Print(L"|00");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_CYAN); // change to cyan
                        Print(L"\\00/");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
                        Print(L"00|");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"000000");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
                        Print(L"|00");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_CYAN); // change to cyan
                        Print(L"\\00/");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
                        Print(L"00|");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"0|\n");

                        Print(L"                     /000");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
                        Print(L"\\000000/");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"00/  \\00");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
                        Print(L"\\000000/");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"000\\ \n");

                        Print(L"                     \\0000000000000\\__/0000000000000/ \n");

                        Print(L"                   ");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
                        Print(L"___");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"|0");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLACK); // change to black
                        Print(L"\\");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"000000000000000000000000");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_BLACK); // change to black
                        Print(L"/");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_YELLOW); // change to yellow
                        Print(L"0|");
                        SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_WHITE); // change to white
                        Print(L"___ \n");

                        Print(L"                  /  /   \\                      /   \\  \\    \n");
                        Print(L"                 |   \\    \\____________________/    /   |   \n");
                        Print(L"                 |____|         |__|   |__|        |____|   \n");
                        Print(L"                 / / /  __    __    __    __    __  \\ \\ \\   \n");
                        Print(L"                 | | |_/  \\__/  \\__/  \\__/  \\__/  \\_| | |   \n");
                        Print(L"                 | | |             \\  /             | | |   \n");
                        Print(L"                 | | |_____________/  \\_____________| | |   \n");
                        Print(L"                 | | |             \\__/             | | |   \n");
                        Print(L"                 | | |______________________________| | |   \n");
                        Print(L"                 | |     |_____|           |_____|    | |   \n");
                        Print(L"                 /|\\       | |               | |      /|\\   \n");
                        Print(L"                 |||       |_|               |_|      |||   \n");
                        Print(L"                           | |               | |            \n");
                        Print(L"                           | |               | |            \n");
                        Print(L"                         __|_|               |_|__          \n");
                        Print(L"                        /____|               |____\\         \n");
                    }
                }
            }
        }
    }
    return EFI_SUCCESS;
}
