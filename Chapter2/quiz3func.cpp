#include <iostream>
#include "constants.h"

double heightinput()
{
  std::cout << "Please enter the height of the tower: ";
  double towerheight{0};
  std::cin >> towerheight;
  return towerheight;
}

double objectdistance(double height, int seconds)
{
  double distancefromtower{0}, distancefromground{0};
  distancefromtower=(constants::gravity*seconds*seconds)/2;
  distancefromground=height-distancefromtower;
  return distancefromground;
}

double printdistance(double towerheight, int seconds)
{
  double distancefromground{0};
  distancefromground=objectdistance(towerheight,seconds);
  if (distancefromground > 0.0)
    {
      std::cout << "At " << seconds << " seconds" << ", the ball is at a height of: " << distancefromground << "meters \n";
    }
  else
    {
      std::cout << "At " << seconds << " seconds" << ", the ball has hit the ground\n";
    }
  return 0;
}
