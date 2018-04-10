#include <android/log.h>
#include <cstdlib>

const char[] fiesta_sounds = {
    "Yeah!",
    "Magic!",
    "BOOM",
    "bam",
    "SIKE!",
    "Right on!",
};

const char* tag = "FIESTA";

int main() {
    __android_log_write(ANDROID_LOG_INFO, tag, "Fiesta in 5 seconds...");
    sleep(5000);
    __android_log_write(ANDROID_LOG_INFO, tag, "FIESTA!");

    int i;
    for(i = rand() % 20; i > 0; --i)
    {
        sleep(300);
        __android_log_write(ANDROID_LOG_INFO, tag,
                            fiesta_sounds[rand() % sizeof(fiesta_sounds)]);
    }
    __android_log_print(ANDROID_LOG_INFO, tag, "Fiesta ended with %d shouts!". i);
    return 0;
}
