#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <armalogp/arma.logp.hpp>

TEST_CASE("uniform logp") {
  SECTION("neg Inf under lower bound") {
    double ans = armalogp::uniform_logp<std::log>(-1., 0.0, 1.0);
    REQUIRE(ans == -std::numeric_limits<double>::infinity());
  }
}

TEST_CASE("schur prod") {
  SECTION("matrix schur prod") {
    arma::mat x(10,10,arma::fill::randn);
    arma::mat y(10,10,arma::fill::randn);
    REQUIRE(arma::all(arma::vectorise(x % y  == arma::schur_prod(x,y))));
  }

  SECTION("vector schur prod") {
    arma::vec x(10,arma::fill::randn);
    arma::vec y(10,arma::fill::randn);
    REQUIRE(arma::all(arma::vectorise(x % y  == arma::schur_prod(x,y))));
  }
}
