#pragma once

#include <rhoban_utils/serialization/json_serializable.h>

namespace robocup_referee {

/// All field informations are in meters
class Field : public rhoban_utils::JsonSerializable {
public:
  Field();

  std::string getClassName() const override;
  Json::Value toJson() const override;
  void fromJson(const Json::Value & v, const std::string & path);

  /// The width of white lines [m]
  double lineWidth;

  /// Radius of the central circle (lines included) [m]
  double centerRadius;

  /// Distance from fieldBorder to arenaBorder (line excluded) [m]
  double borderStripWidth;

  /// Distance from center of penaltyMark to closest goal (goal line included) [m]
  double penaltyMarkDist;

  /// Length of the penalty mark [m]
  double penaltyMarkLength;

  /// Distance between two posts (posts excluded) [m]
  double goalWidth;

  /// From goal line to the back of the goal (goal line included) [m]
  double goalDepth;

  /// From goal line to goal area line (lines included) [m]
  double goalAreaLength;

  /// From one side of goal area to the other (lines included) [m]
  double goalAreaWidth;

  /// From one goal line to the other (lines included) [m]
  double fieldLength;

  /// From one side of the field to the other (lines included) [m]
  double fieldWidth;
};

}
