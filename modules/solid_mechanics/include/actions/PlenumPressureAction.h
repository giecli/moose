#ifndef PLENUMPRESSUREACTION_H
#define PLENUMPRESSUREACTION_H

#include "Action.h"
#include "MooseTypes.h"

class PlenumPressureAction;

template<>
InputParameters validParams<PlenumPressureAction>();

class PlenumPressureAction: public Action
{
public:
  PlenumPressureAction(const std::string & name, InputParameters params);

  virtual void act();

private:
  const std::vector<std::string> _boundary;
  const NonlinearVariableName _disp_x;
  const NonlinearVariableName _disp_y;
  const NonlinearVariableName _disp_z;
  const Real _initial_pressure;
  const std::string _material_input;
  const Real _R;
  const std::string _temperature;
  const std::string _volume;
  const Real _startup_time;
  const std::string _output_initial_moles;
  const std::string _output;
  const Real _refab_time;
  const Real _refab_pressure;
  const Real _refab_temperature;
  const Real _refab_volume;

protected:
  std::string _kernel_name;
  bool _use_displaced_mesh;
};


#endif // PLENUMPRESSUREACTION_H
