#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <armalogp/arma.logp.hpp>

TEST_CASE("uniform logp") {
  SECTION("neg Inf under lower bound") {
    double ans = armalogp::uniform_logp<std::log>(-1., 0.0, 1.0);
    REQUIRE(ans == -std::numeric_limits<double>::infinity());
  }
}
