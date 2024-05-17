#pragma once
#include "rule.h"

class CohesionRule : public Rule
{
private:
public:
    CohesionRule(double rule_strength = 1);

    Vector calculateRuleForIndividual(std::vector<BasicBoid*>, const BasicBoid &) const override;

    Vector calculateRuleStrengthBetweenBoids(const BasicBoid &, const BasicBoid &) const override;


    double calculateScalingFactor(const BasicBoid &, double, double) const override;
};