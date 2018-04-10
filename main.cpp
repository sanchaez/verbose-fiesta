#include <android/log.h>
#include <chrono>
#include <thread>

const char* fiesta_sounds[] = {
    "Yeah!",
    "Magic!",
    "BOOM",
    "bam",
    "SIKE!",
    "Right on!",
};

const char* tag = "FIESTA";

#define sleep(x) std::this_thread::sleep_for(std::chrono::milliseconds(x));

int main() {
    __android_log_write(ANDROID_LOG_INFO, tag, "Fiesta in 5 seconds...");
    sleep(5000);
    __android_log_write(ANDROID_LOG_INFO, tag, "FIESTA!");

    int i;
    const int n = rand() % 100;
    for(i = 0; i < n; ++i)
    {
        sleep(300);
        __android_log_write(ANDROID_LOG_INFO, tag,
                            fiesta_sounds[rand()
                                          % (sizeof(fiesta_sounds)
                                             / sizeof(fiesta_sounds[0]))]);
    }
    __android_log_print(ANDROID_LOG_INFO, tag, "Fiesta ended with %d shouts!", i);
    return 0;
}
