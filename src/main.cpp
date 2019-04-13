#include <stdlib.h>
#include <unistd.h>

#include <robocup_referee/referee_client.h>

using namespace std;
using namespace robocup_referee;

/**
 * This just dumps the informations from the referee client
 */
int main(int argc, char** argv)
{
  RefereeClient client;
  client.start();

  while (true)
  {
    system("clear");
    std::cout << &client.getGameState() << std::endl;
    sleep(1);
  }

  return 0;
}
