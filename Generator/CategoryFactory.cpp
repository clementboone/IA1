#include "CategoryFactory.h"
#include <string>

Category CategoryFactory::age()
{
  Category category("age", 5.0, false);
  
  
  category.addValues("junior", 5);
  category.addValues("teenager", 17);
  category.addValues("adult", 15);
  category.addValues("senior", 10);
  return category;
}
 
Category CategoryFactory::control()
{
  Category category("control", 0, false);
  category.addValues("yes", 0);
  category.addValues("no", 0);
  return category;
}

Category CategoryFactory::cops()
{
   Category category("cops", 17.0);
   
   category.addValues("yes", 20);
   category.addValues("no", 0);
   return category;
}
 
Category CategoryFactory::delay()
{
  Category category("delay", 15.0);
  
  category.addValues("noDelay", 20);
  category.addValues("fewDelay", 15);
  category.addValues("someDelay", 10);
  category.addValues("aLotOfDelay", 4);
  return category;
}
 
Category CategoryFactory::gender()
{
  Category category("gender", 10, false);
  
  category.addValues("male", 14);
  category.addValues("female", 10);
  return category;
}

Category CategoryFactory::hollidays()
{
  Category category("holidays", 10, false);
  
  category.addValues("yes", 15);
  category.addValues("no", 10);
  return category;
}

Category CategoryFactory::nbControler()
{
  Category category("nbControler", 17);
  
  category.addValues("twoControllers", 10);
  category.addValues("fourControllers", 15);
  category.addValues("sixControllers", 17);
  category.addValues("eightControllers", 20);
  return category;
}

Category CategoryFactory::race()
{
  Category category("race", 13);
  category.addValues("european", 10);
  category.addValues("african", 15);
  category.addValues("arabic", 15);
  category.addValues("asian", 12);
  return category;
}

Category CategoryFactory::timeOfDay()
{
  Category category("timeOfDay", 14);
  
  category.addValues("slump", 10);
  category.addValues("prepostRush", 12);
  category.addValues("rush", 5);
  
  return category;
}

Category CategoryFactory::trainLength()
{
  Category category("trainLength", 16);
  
  category.addValues("shortTrain", 15);
  category.addValues("middleTrain", 10);
  category.addValues("longTrain", 5);
  
  return category;
}
 
Category CategoryFactory::weekEnd()
{
  Category category("weekEnd", 13);
  
  category.addValues("yes", 15);
  category.addValues("no", 10);
  return category;
}

Category CategoryFactory::trainClass()
{
  Category	category("trainClass", 4, false);
  
  category.addValues("firstClass", 15);
  category.addValues("secondClass", 10);
  return category;
}

Category CategoryFactory::trainPop()
{
  Category category("trainPop", 18);
  
  
  category.addValues("desertOccupation", 17);
  category.addValues("lowOccupation", 15);
  category.addValues("middleOccupation", 12);
  category.addValues("fullOccupation", 7);
  return category;
}

