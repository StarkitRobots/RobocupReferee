#include "robocup_referee/field.h"

namespace robocup_referee
{
Field::Field()
{
  ballRadius = 0.075;
  /// Expected field sizes
  lineWidth = 0.05;
  centerRadius = 0.75;
  borderStripWidth = 0.70;  // Minimum value
  penaltyMarkDist = 2.10;
  penaltyMarkLength = 0.10;
  goalWidth = 2.60;
  goalDepth = 0.60;
  goalAreaLength = 1.00;
  goalAreaWidth = 5.00;
  fieldLength = 9.00;
  fieldWidth = 6.00;
}

std::string Field::getClassName() const
{
  return "Field";
}

Json::Value Field::toJson() const
{
  Json::Value v;
  v["ballRadius"] = ballRadius;
  v["lineWidth"] = lineWidth;
  v["centerRadius"] = centerRadius;
  v["borderStripWidth"] = borderStripWidth;
  v["penaltyMarkDist"] = penaltyMarkDist;
  v["penaltyMarkLength"] = penaltyMarkLength;
  v["goalWidth"] = goalWidth;
  v["goalDepth"] = goalDepth;
  v["goalAreaLength"] = goalAreaLength;
  v["goalAreaWidth"] = goalAreaWidth;
  v["fieldLength"] = fieldLength;
  v["fieldWidth"] = fieldWidth;
  return v;
}

void Field::fromJson(const Json::Value& v, const std::string& dir_path)
{
  (void)dir_path;
  rhoban_utils::tryRead(v, "ballRadius", &ballRadius);
  rhoban_utils::tryRead(v, "lineWidth", &lineWidth);
  rhoban_utils::tryRead(v, "centerRadius", &centerRadius);
  rhoban_utils::tryRead(v, "borderStripWidth", &borderStripWidth);
  rhoban_utils::tryRead(v, "penaltyMarkDist", &penaltyMarkDist);
  rhoban_utils::tryRead(v, "penaltyMarkLength", &penaltyMarkLength);
  rhoban_utils::tryRead(v, "goalWidth", &goalWidth);
  rhoban_utils::tryRead(v, "goalDepth", &goalDepth);
  rhoban_utils::tryRead(v, "goalAreaLength", &goalAreaLength);
  rhoban_utils::tryRead(v, "goalAreaWidth", &goalAreaWidth);
  rhoban_utils::tryRead(v, "fieldLength", &fieldLength);
  rhoban_utils::tryRead(v, "fieldWidth", &fieldWidth);
}

}  // namespace robocup_referee
