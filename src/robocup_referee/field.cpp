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
  starkit_utils::tryRead(v, "ballRadius", &ballRadius);
  starkit_utils::tryRead(v, "lineWidth", &lineWidth);
  starkit_utils::tryRead(v, "centerRadius", &centerRadius);
  starkit_utils::tryRead(v, "borderStripWidth", &borderStripWidth);
  starkit_utils::tryRead(v, "penaltyMarkDist", &penaltyMarkDist);
  starkit_utils::tryRead(v, "penaltyMarkLength", &penaltyMarkLength);
  starkit_utils::tryRead(v, "goalWidth", &goalWidth);
  starkit_utils::tryRead(v, "goalDepth", &goalDepth);
  starkit_utils::tryRead(v, "goalAreaLength", &goalAreaLength);
  starkit_utils::tryRead(v, "goalAreaWidth", &goalAreaWidth);
  starkit_utils::tryRead(v, "fieldLength", &fieldLength);
  starkit_utils::tryRead(v, "fieldWidth", &fieldWidth);
}

}  // namespace robocup_referee
