#include "sleepy_discord/sleepy_discord.h"

class MyBot : public SleepyDiscord::DiscordClient {
public:
    using SleepyDiscord::DiscordClient::DiscordClient;

    void onMessage(SleepyDiscord::Message message) override {
        if (message.startsWith("!ping")) {
            sendMessage(message.channelID, "Pong! ✅");
        }
    }
};

int main() {
    std::string token = "MTM3NDQ4NzU4MjM0NzQ5NzUxMg.GEX4e8.fv2-9f1MJLKXB9N3UQDOCcxatAQEF-ywgJfWbQ" ;
    MyBot bot(token, SleepyDiscord::USER_CONTROLED_THREADS);
    bot.run();
}
