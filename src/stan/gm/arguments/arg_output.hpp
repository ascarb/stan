#ifndef __STAN__GM__ARGUMENTS__OUTPUT__HPP__
#define __STAN__GM__ARGUMENTS__OUTPUT__HPP__

#include <stan/gm/arguments/categorical_argument.hpp>

#include <stan/gm/arguments/arg_sample_file.hpp>
#include <stan/gm/arguments/arg_diagnostic_file.hpp>
#include <stan/gm/arguments/arg_refresh.hpp>

namespace stan {
  
  namespace gm {
    
    class arg_output: public categorical_argument {
      
    public:
      
      arg_output() {
        
        _name = "output";
        _description = "File Output Options";
        
        _subarguments.push_back(new arg_sample_file());
        _subarguments.push_back(new arg_diagnostic_file());
        _subarguments.push_back(new arg_refresh());
        
      }
      
    };
    
  } // gm
  
} // stan

#endif

