#include <gtest/gtest.h>
#include <test/models/model_test_fixture.hpp>

class Models_BugsExamples_Vol1_Oxford : 
  public Model_Test_Fixture<Models_BugsExamples_Vol1_Oxford> {
protected:
  virtual void SetUp() {
  }
public:
  static std::vector<std::string> get_model_path() {
    std::vector<std::string> model_path;
    model_path.push_back("models");
    model_path.push_back("bugs_examples");
    model_path.push_back("vol1");
    model_path.push_back("oxford");
    model_path.push_back("oxford");
    return model_path;
  }

  static bool has_data() {
    return true;
  }

  static bool has_init() {
    return true;
  }

  static int num_iterations() {
    return iterations;
  }

  static std::vector<int> skip_chains_test() {
    std::vector<int> params_to_skip;
    return params_to_skip;
  }

  static void populate_chains() {
    default_populate_chains();
  }

  static std::vector<std::pair<int, double> >
  get_expected_values() {
    using std::make_pair;
    std::vector<std::pair<int, double> > expected_values;

    expected_values.push_back(make_pair(chains->index("alpha"), 0.579));
    
    expected_values.push_back(make_pair(chains->index("beta1"), -0.04557));

    expected_values.push_back(make_pair(chains->index("beta2"), 0.007041));

    expected_values.push_back(make_pair(chains->index("sigma"), 0.09697));

    return expected_values;
  }

};

INSTANTIATE_TYPED_TEST_CASE_P(Models_BugsExamples_Vol1_Oxford,
            Model_Test_Fixture,
            Models_BugsExamples_Vol1_Oxford);
