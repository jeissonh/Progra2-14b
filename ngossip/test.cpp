// This tells Catch to provide a main() - only do this in one cpp file
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "ngossip.h"

TEST_CASE("abundant")
{
	REQUIRE( is_abundant(0) == false );
	REQUIRE( is_abundant(1) == false );
	REQUIRE( is_abundant(2) == false );
    REQUIRE( is_abundant(3) == false );
    REQUIRE( is_abundant(7) == false );
	REQUIRE( is_abundant(11) == false );
	REQUIRE( is_abundant(12) );
	REQUIRE( is_abundant(13) == false );
	REQUIRE( is_abundant(18) );
	REQUIRE( is_abundant(20) );
	REQUIRE( is_abundant(24) );
	REQUIRE( is_abundant(30) );
	REQUIRE( is_abundant(36) );
	REQUIRE( is_abundant(40) );
	REQUIRE( is_abundant(42) );
	REQUIRE( is_abundant(48) );
	REQUIRE( is_abundant(50) == false );
	REQUIRE( is_abundant(54) );
	REQUIRE( is_abundant(60) );
	REQUIRE( is_abundant(61) == false );
	REQUIRE( is_abundant(100) );
	REQUIRE( is_abundant(293) == false );
	REQUIRE( is_abundant(366) );
    REQUIRE( is_abundant(666) );
	REQUIRE( is_abundant(1001) == false );
	REQUIRE( is_abundant(1313) == false );
	REQUIRE( is_abundant(1503) == false );
	REQUIRE( is_abundant(1789) == false );
	REQUIRE( is_abundant(1938) );
    REQUIRE( is_abundant(1995) == false );
    REQUIRE( is_abundant(2014) == false );
	REQUIRE( is_abundant(5628) );
	REQUIRE( is_abundant(6667) == false );
	REQUIRE( is_abundant(9990) );
	REQUIRE( is_abundant(1990) == false );
	REQUIRE( is_abundant(1503) == false );          //*
	REQUIRE( is_abundant(7104) );
}

TEST_CASE("amicable")
{
	REQUIRE( is_amicable(0) == false );
	REQUIRE( is_amicable(1) == false );
	REQUIRE( is_amicable(2) == false );
	REQUIRE( is_amicable(10) == false );
    REQUIRE( is_amicable(11) == false );
	REQUIRE( is_amicable(100) == false );
	REQUIRE( is_amicable(220) );
	REQUIRE( is_amicable(284) );
	REQUIRE( is_amicable(366) == false );
    REQUIRE( is_amicable(666) == false);
	REQUIRE( is_amicable(1184) );
	REQUIRE( is_amicable(1024) == false );
	REQUIRE( is_amicable(1210) );
    REQUIRE( is_amicable(1313) == false );
    REQUIRE( is_amicable(1503) == false );
	REQUIRE( is_amicable(1789) == false );
	REQUIRE( is_amicable(1938) == false );
    REQUIRE( is_amicable(1995) == false );
    REQUIRE( is_amicable(2014) == false );
	REQUIRE( is_amicable(2467) == false );
	REQUIRE( is_amicable(2620) );
	REQUIRE( is_amicable(2924) );
	REQUIRE( is_amicable(3221) == false );  //*
	REQUIRE( is_amicable(5020) );
	REQUIRE( is_amicable(5564) );
	REQUIRE( is_amicable(6232) );
	REQUIRE( is_amicable(6368) );
	REQUIRE( is_amicable(5000) == false );
	REQUIRE( is_amicable(6667) == false );
	REQUIRE( is_amicable(10744) );
	REQUIRE( is_amicable(10745) == false );
    REQUIRE( is_amicable(10856) );
    REQUIRE( is_amicable(12285) );
    REQUIRE( is_amicable(1990) == false );          //*
    REQUIRE( is_amicable(7104) == false );
}

 TEST_CASE("apocalyptic_power")
{
	REQUIRE( is_apocalyptic_power(0) == false );
	REQUIRE( is_apocalyptic_power(1) == false );
	REQUIRE( is_apocalyptic_power(2) == false );
	REQUIRE( is_apocalyptic_power(5) == false );
    REQUIRE( is_apocalyptic_power(6) == false );
	REQUIRE( is_apocalyptic_power(100) == false );
	REQUIRE( is_apocalyptic_power(157) );
	REQUIRE( is_apocalyptic_power(192) );
	REQUIRE( is_apocalyptic_power(213) == false );
	REQUIRE( is_apocalyptic_power(218) );
	REQUIRE( is_apocalyptic_power(220) );
	REQUIRE( is_apocalyptic_power(222) );
	REQUIRE( is_apocalyptic_power(224) );
	REQUIRE( is_apocalyptic_power(226) );
	REQUIRE( is_apocalyptic_power(243) );
	REQUIRE( is_apocalyptic_power(244) == false );
	REQUIRE( is_apocalyptic_power(245) );
	REQUIRE( is_apocalyptic_power(247) );
	REQUIRE( is_apocalyptic_power(251) == false );
    REQUIRE( is_apocalyptic_power(293) == false );
	REQUIRE( is_apocalyptic_power(366) );
    REQUIRE( is_apocalyptic_power(666) );
    REQUIRE( is_apocalyptic_power(1313) == false );
    REQUIRE( is_apocalyptic_power(1503) );
    REQUIRE( is_apocalyptic_power(1789) == false );
    REQUIRE( is_apocalyptic_power(1938) == false );
    REQUIRE( is_apocalyptic_power(1995) == false );
    REQUIRE( is_apocalyptic_power(2014) == false );
    REQUIRE( is_apocalyptic_power(6667) );
	REQUIRE( is_apocalyptic_power(7628) );
    REQUIRE( is_apocalyptic_power(7895) );
    REQUIRE( is_apocalyptic_power(7911) );          //*
    REQUIRE( is_apocalyptic_power(8668) == false );
    REQUIRE( is_apocalyptic_power(1990) ); //*
    REQUIRE( is_apocalyptic_power(7104) );
}

TEST_CASE("aspiring")
{
	REQUIRE( is_aspiring(0) == false );
    REQUIRE( is_aspiring(1) == false );
	REQUIRE( is_aspiring(25) );
    REQUIRE( is_aspiring(36) == false );
	REQUIRE( is_aspiring(95) );
	REQUIRE( is_aspiring(119) );
	REQUIRE( is_aspiring(143) );
	REQUIRE( is_aspiring(293) == false );
	REQUIRE( is_aspiring(366) == false );
	REQUIRE( is_aspiring(417) );
	REQUIRE( is_aspiring(445) );
	REQUIRE( is_aspiring(565) );
	REQUIRE( is_aspiring(608) );
	REQUIRE( is_aspiring(650) );
	REQUIRE( is_aspiring(652) );
    REQUIRE( is_aspiring(666) == false );
	REQUIRE( is_aspiring(675) );
	REQUIRE( is_aspiring(913) );
	REQUIRE( is_aspiring(676) == false );
	REQUIRE( is_aspiring(1177) );           //*
    REQUIRE( is_aspiring(1313) == false );
    REQUIRE( is_aspiring(1503) == false );
    REQUIRE( is_aspiring(1789) == false );
    REQUIRE( is_aspiring(1938) == false );
    REQUIRE( is_aspiring(1995) == false );
    REQUIRE( is_aspiring(2014) == false );
	REQUIRE( is_aspiring(2387) );           //*
	REQUIRE( is_aspiring(2541) );           //*
	REQUIRE( is_aspiring(3142) );           //*
	REQUIRE( is_aspiring(4897) );           //*
	REQUIRE( is_aspiring(4899) == false );  //*
	REQUIRE( is_aspiring(6099) );           //*
	REQUIRE( is_aspiring(6667) == false );
	REQUIRE( is_aspiring(1990) == false );
	REQUIRE( is_aspiring(7104) == false );
}

TEST_CASE("automorphic")
{
	REQUIRE( is_automorphic(0) == false );
	REQUIRE( is_automorphic(1) );
    REQUIRE( is_automorphic(2)==false );
	REQUIRE( is_automorphic(5) );
	REQUIRE( is_automorphic(6) );
	REQUIRE( is_automorphic(25) );
    REQUIRE( is_automorphic(56) == false );
	REQUIRE( is_automorphic(76) );
	REQUIRE( is_automorphic(375)==false );
	REQUIRE( is_automorphic(366) == false );
	REQUIRE( is_automorphic(376) );
	REQUIRE( is_automorphic(625) );
    REQUIRE( is_automorphic(666) == false );
    REQUIRE( is_automorphic(1313) == false );
    REQUIRE( is_automorphic(1789) == false );
    REQUIRE( is_automorphic(1503) == false );
    REQUIRE( is_automorphic(1938) == false );
    REQUIRE( is_automorphic(1995) == false );
    REQUIRE( is_automorphic(2014) == false );
	REQUIRE( is_automorphic(6666) == false );
	REQUIRE( is_automorphic(6667) == false );
    REQUIRE( is_automorphic(7777) == false );   //*
    REQUIRE( is_automorphic(8248) == false );   //*
    REQUIRE( is_automorphic(8321) == false );   //*
    REQUIRE( is_automorphic(8552) == false );   //*
	REQUIRE( is_automorphic(9001) == false );   //*
    REQUIRE( is_automorphic(9269) == false );   //*
    REQUIRE( is_automorphic(9272) == false );   //*
	REQUIRE( is_automorphic(9375) == false );   //*
	REQUIRE( is_automorphic(9376) );
	REQUIRE( is_automorphic(90625) );
	REQUIRE( is_automorphic(109376) );
	REQUIRE( is_automorphic(109377) == false );
	REQUIRE( is_automorphic(1990) == false );
	REQUIRE( is_automorphic(7104) == false );
}

TEST_CASE("cake")
{
	REQUIRE( is_cake(0) == false );
    REQUIRE( is_cake(1) == false );
	REQUIRE( is_cake(2) );
	REQUIRE( is_cake(4) );
	REQUIRE( is_cake(8) );
	REQUIRE( is_cake(15) );
	REQUIRE( is_cake(26) );
	REQUIRE( is_cake(42) );
	REQUIRE( is_cake(64) );
	REQUIRE( is_cake(93) );
	REQUIRE( is_cake(130) );
	REQUIRE( is_cake(176) );
	REQUIRE( is_cake(232) );
	REQUIRE( is_cake(233) == false );
	REQUIRE( is_cake(293) == false );
	REQUIRE( is_cake(299) );            //*
	REQUIRE( is_cake(366) == false );
    REQUIRE( is_cake(666) == false );
    REQUIRE( is_cake(785) == false );
	REQUIRE( is_cake(834) );            //*
    REQUIRE( is_cake(1313) == false );
	REQUIRE( is_cake(1351) );
	REQUIRE( is_cake(1503) == false );           //*
    REQUIRE( is_cake(1789) == false );
	REQUIRE( is_cake(1794) );           //*
    REQUIRE( is_cake(1938) == false );
    REQUIRE( is_cake(1995) == false );
    REQUIRE( is_cake(2014) == false );
	REQUIRE( is_cake(2048) );           //*
	REQUIRE( is_cake(4221) == false );
	REQUIRE( is_cake(6667) == false );
	REQUIRE( is_cake(9920) );           //*
    REQUIRE( is_cake(137549728) );
    REQUIRE( is_cake(1990) == false );
    REQUIRE( is_cake(7104) == false );
}

TEST_CASE("carmichael")
{
	REQUIRE( is_carmichael(0) == false );
    REQUIRE( is_carmichael(1) == false );
    REQUIRE( is_carmichael(78) == false );
	REQUIRE( is_carmichael(293) == false );
	REQUIRE( is_carmichael(366) == false );
	REQUIRE( is_carmichael(561) );
    REQUIRE( is_carmichael(666) == false );
	REQUIRE( is_carmichael(1105) );
    REQUIRE( is_carmichael(1313) == false );
    REQUIRE( is_carmichael(1503) == false );
	REQUIRE( is_carmichael(1729) );
	REQUIRE( is_carmichael(1789) == false );
	REQUIRE( is_carmichael(1938) == false );
    REQUIRE( is_carmichael(1995) == false );
    REQUIRE( is_carmichael(2014) == false );
    REQUIRE( is_carmichael(2239) == false );    //*
    REQUIRE( is_carmichael(2371) == false );    //*
    REQUIRE( is_carmichael(2464) == false );    //*
	REQUIRE( is_carmichael(2465) );
	REQUIRE( is_carmichael(2821) );
	REQUIRE( is_carmichael(6601) );
	REQUIRE( is_carmichael(6667) == false );
	REQUIRE( is_carmichael(7654) == false );
	REQUIRE( is_carmichael(8911) );
	REQUIRE( is_carmichael(9010) == false );    //*
	REQUIRE( is_carmichael(10585) );
	REQUIRE( is_carmichael(12951) == false );   //*
	REQUIRE( is_carmichael(15841) );
	REQUIRE( is_carmichael(20159) == false );   //*
	REQUIRE( is_carmichael(29341) );
	REQUIRE( is_carmichael(30741) == false );   //*
	REQUIRE( is_carmichael(41041) );
	REQUIRE( is_carmichael(41042) == false );
	REQUIRE( is_carmichael(1990) == false );
	REQUIRE( is_carmichael(7104) == false );
}

TEST_CASE("catalan")
{
	REQUIRE( is_catalan(0) == false );
	REQUIRE( is_catalan(1) );
	REQUIRE( is_catalan(2) );
    REQUIRE( is_catalan(3) == false );
	REQUIRE( is_catalan(5) );
	REQUIRE( is_catalan(14) );
	REQUIRE( is_catalan(42) );
	REQUIRE( is_catalan(132) );
	REQUIRE( is_catalan(366) == false );
    REQUIRE( is_catalan(396) == false );
	REQUIRE( is_catalan(429) );
    REQUIRE( is_catalan(1313) == false );
	REQUIRE( is_catalan(1430) );
	REQUIRE( is_catalan(1503) == false);
	REQUIRE( is_catalan(1789) == false );
	REQUIRE( is_catalan(1938) == false );
    REQUIRE( is_catalan(1991) == false );
    REQUIRE( is_catalan(1995) == false );
    REQUIRE( is_catalan(2014) == false );
	REQUIRE( is_catalan(2231) == false );
    REQUIRE( is_catalan(3000) == false );   //*
    REQUIRE( is_catalan(3333) == false );   //*
	REQUIRE( is_catalan(3721) == false );   //*
    REQUIRE( is_catalan(3999) == false );   //*
    REQUIRE( is_catalan(4109) == false );   //*
    REQUIRE( is_catalan(4284) == false );   //*
	REQUIRE( is_catalan(4666) == false );   //*
	REQUIRE( is_catalan(4862) );
	REQUIRE( is_catalan(6667) == false );
	REQUIRE( is_catalan(16796) );
	REQUIRE( is_catalan(58786) );
	REQUIRE( is_catalan(58787) == false );
	REQUIRE( is_catalan(208012) );
	REQUIRE( is_catalan(1990) == false );          //*
	REQUIRE( is_catalan(7104) == false );
}

TEST_CASE("composite")
{
	REQUIRE( is_composite(0) == false );
	REQUIRE( is_composite(1) == false );
	REQUIRE( is_composite(2) == false );
	REQUIRE( is_composite(3) == false );
	REQUIRE( is_composite(4) );
	REQUIRE( is_composite(5) == false );
	REQUIRE( is_composite(6) );
	REQUIRE( is_composite(7) == false );
	REQUIRE( is_composite(8) );
	REQUIRE( is_composite(9) );
	REQUIRE( is_composite(10) );
	REQUIRE( is_composite(11) == false );
	REQUIRE( is_composite(12) );
	REQUIRE( is_composite(13) == false );
	REQUIRE( is_composite(14) );
	REQUIRE( is_composite(15) );
	REQUIRE( is_composite(16) );
	REQUIRE( is_composite(17) == false );
	REQUIRE( is_composite(18) );
	REQUIRE( is_composite(19) == false );
    REQUIRE( is_composite(23) == false );
	REQUIRE( is_composite(22) );
	REQUIRE( is_composite(23) == false );
	REQUIRE( is_composite(105) );
	REQUIRE( is_composite(351) );
	REQUIRE( is_composite(366) );
    REQUIRE( is_composite(546) );
    REQUIRE( is_composite(666) );
	REQUIRE( is_composite(1001) );
    REQUIRE( is_composite(1313) );
    REQUIRE( is_composite(1314) );
    REQUIRE( is_composite(1503) );        //*
	REQUIRE( is_composite(1789) == false );
	REQUIRE( is_composite(1938) );
    REQUIRE( is_composite(1995) );
    REQUIRE( is_composite(2014) );
    REQUIRE( is_composite(6667) );
	REQUIRE( is_composite(8712) );
    REQUIRE( is_composite(9202) );          //*
    REQUIRE( is_composite(9203) == false ); //*
    REQUIRE( is_composite(9521) == false ); //*
    REQUIRE( is_composite(9520) );          //*
    REQUIRE( is_composite(9661) );          //*
    REQUIRE( is_composite(9999) );
    REQUIRE( is_composite(1990) );          //*
    REQUIRE( is_composite(7104) );
    REQUIRE( is_composite(7104) == false );
}

TEST_CASE("compositorial")
{
	REQUIRE( is_compositorial(0) == false );
    REQUIRE( is_compositorial(1) == false );
	REQUIRE( is_compositorial(2) == false );        //*
    REQUIRE( is_compositorial(3) == false );        //*
	REQUIRE( is_compositorial(4) );
    REQUIRE( is_compositorial(7) == false );
    REQUIRE( is_compositorial(12) == false );       //*
    REQUIRE( is_compositorial(17) == false );       //*
    REQUIRE( is_compositorial(20) == false );       //*
	REQUIRE( is_compositorial(24) );
	REQUIRE( is_compositorial(192) );
	REQUIRE( is_compositorial(366) == false );
    REQUIRE( is_compositorial(666) == false );
    REQUIRE( is_compositorial(1000) == false );     //*
    REQUIRE( is_compositorial(1299) == false );     //*
    REQUIRE( is_compositorial(1313) == false );
    REQUIRE( is_compositorial(1503) == false );
    REQUIRE( is_compositorial(1728) );
	REQUIRE( is_compositorial(1789) == false );
	REQUIRE( is_compositorial(1938) == false );
    REQUIRE( is_compositorial(1995) == false );
    REQUIRE( is_compositorial(2014) == false );
    REQUIRE( is_compositorial(4921) == false );     //*
	REQUIRE( is_compositorial(6172) == false );
	REQUIRE( is_compositorial(6667) == false );
	REQUIRE( is_compositorial(17280) );
	REQUIRE( is_compositorial(207360) );
	REQUIRE( is_compositorial(2903040) );
	REQUIRE( is_compositorial(43545600) );
	REQUIRE( is_compositorial(696729600) );
	REQUIRE( is_compositorial(12541132800) );
	REQUIRE( is_compositorial(250822656000) );
	REQUIRE( is_compositorial(250822656001) == false );
	REQUIRE( is_compositorial(1990) == false );
	REQUIRE( is_compositorial(7104) == false );
}

TEST_CASE("cube")
{
    REQUIRE( is_cube(0) );
	REQUIRE( is_cube(1) );
    REQUIRE( is_cube(2) == false );
    REQUIRE( is_cube(4) == false );     //*
	REQUIRE( is_cube(8) );
	REQUIRE( is_cube(27) );
    REQUIRE( is_cube(33) == false );    //*
	REQUIRE( is_cube(64) );
	REQUIRE( is_cube(125) );
	REQUIRE( is_cube(216) );
	REQUIRE( is_cube(293) == false );
	REQUIRE( is_cube(343) );
	REQUIRE( is_cube(366) == false );
	REQUIRE( is_cube(512) );
    REQUIRE( is_cube(666) == false );
	REQUIRE( is_cube(671) == false );
	REQUIRE( is_cube(729) );
	REQUIRE( is_cube(1000) );
    REQUIRE( is_cube(1313) == false );
	REQUIRE( is_cube(1331) );
	REQUIRE( is_cube(1332) == false );
	REQUIRE( is_cube(1503) == false );
	REQUIRE( is_cube(1728) );           //*
	REQUIRE( is_cube(1789) == false );
    REQUIRE( is_cube(1938) == false );
    REQUIRE( is_cube(1995) == false );
    REQUIRE( is_cube(2014) == false );
	REQUIRE( is_cube(2197) );           //*
    REQUIRE( is_cube(2744) );
	REQUIRE( is_cube(3375) );           //*
	REQUIRE( is_cube(6667) == false );
	REQUIRE( is_cube(7999) == false );  //*
	REQUIRE( is_cube(8000) );
	REQUIRE( is_cube(1990) == false );            //*
	REQUIRE( is_cube(7104) == false );
}

TEST_CASE("deficient")
{
	REQUIRE( is_deficient(0) == false );
	REQUIRE( is_deficient(1) );
	REQUIRE( is_deficient(2) );
	REQUIRE( is_deficient(3) );
	REQUIRE( is_deficient(4) );
	REQUIRE( is_deficient(5) );
    REQUIRE( is_deficient(6) == false );
	REQUIRE( is_deficient(7) );
	REQUIRE( is_deficient(8) );
	REQUIRE( is_deficient(9) );
	REQUIRE( is_deficient(10) );
	REQUIRE( is_deficient(11) );
	REQUIRE( is_deficient(17) );
	REQUIRE( is_deficient(18) == false );
	REQUIRE( is_deficient(45) );            //*
	REQUIRE( is_deficient(65) );            //*
	REQUIRE( is_deficient(66) == false );   //*
    REQUIRE( is_deficient(85) );
	REQUIRE( is_deficient(101) );           //*
	REQUIRE( is_deficient(102) == false );  //*
	REQUIRE( is_deficient(105) );           //*
	REQUIRE( is_deficient(290) );           //*
	REQUIRE( is_deficient(293) );
	REQUIRE( is_deficient(351) );
	REQUIRE( is_deficient(366) == false );
	REQUIRE( is_deficient(888) == false );
    REQUIRE( is_deficient(1313) );
    REQUIRE( is_deficient(1349) );
    REQUIRE( is_deficient(1503) );
    REQUIRE( is_deficient(1789) );
    REQUIRE( is_deficient(1995) == false );
    REQUIRE( is_deficient(1995) );
    REQUIRE( is_deficient(2014) );
    REQUIRE( is_deficient(6667) );
    REQUIRE( is_deficient(1990) );
    REQUIRE( is_deficient(7104) == false );
}

TEST_CASE("even")
{
	REQUIRE( is_even(0) );
	REQUIRE( is_even(1) == false );
	REQUIRE( is_even(2) );
	REQUIRE( is_even(3) == false );
	REQUIRE( is_even(4) );
	REQUIRE( is_even(5) == false );
	REQUIRE( is_even(6) );
	REQUIRE( is_even(7) == false );
	REQUIRE( is_even(8) );
	REQUIRE( is_even(9) == false );
	REQUIRE( is_even(10) );
	REQUIRE( is_even(11) == false );
	REQUIRE( is_even(12) );
	REQUIRE( is_even(13) == false );
	REQUIRE( is_even(14) );
	REQUIRE( is_even(15) == false );
	REQUIRE( is_even(16) );
	REQUIRE( is_even(17) == false );
	REQUIRE( is_even(18) );
	REQUIRE( is_even(19) == false );
	REQUIRE( is_even(20) );
    REQUIRE( is_even(21) == false );
	REQUIRE( is_even(22) );
	REQUIRE( is_even(23) == false );
	REQUIRE( is_even(293) == false );
	REQUIRE( is_even(366) );
    REQUIRE( is_even(666) );
    REQUIRE( is_even(1299) == false );  //*
    REQUIRE( is_even(1313) == false );
    REQUIRE( is_even(1396) );
    REQUIRE( is_even(1503) == false );         //*
    REQUIRE( is_even(1564) );           //*
    REQUIRE( is_even(1789) == false );
    REQUIRE( is_even(1938) );
    REQUIRE( is_even(1995) == false );
    REQUIRE( is_even(2014) );
    REQUIRE( is_even(2048) );           //*
	REQUIRE( is_even(2781) == false );
	REQUIRE( is_even(2917) == false );  //*
    REQUIRE( is_even(3256) );
    REQUIRE( is_even(6667) == false);
	REQUIRE( is_even(213879132llu) );
	REQUIRE( is_even(1318981281llu) == false );
	REQUIRE( is_even(1990) );
	REQUIRE( is_even(7104) );
	
}

TEST_CASE("evil")
{
	REQUIRE( is_evil(0) == false );
    REQUIRE( is_evil(1) == false );
	REQUIRE( is_evil(3) );
	REQUIRE( is_evil(5) );
	REQUIRE( is_evil(6) );
	REQUIRE( is_evil(9) );
	REQUIRE( is_evil(10) );
	REQUIRE( is_evil(12) );
	REQUIRE( is_evil(15) );
	REQUIRE( is_evil(17) );
	REQUIRE( is_evil(18) );
	REQUIRE( is_evil(20) );
	REQUIRE( is_evil(24) );
	REQUIRE( is_evil(25) == false );
	REQUIRE( is_evil(99) );             //*
	REQUIRE( is_evil(111) );            //*
	REQUIRE( is_evil(123) );            //*
	REQUIRE( is_evil(293) );
	REQUIRE( is_evil(366) );
    REQUIRE( is_evil(616) );
    REQUIRE( is_evil(783) );
    REQUIRE( is_evil(1313));
    REQUIRE( is_evil(1503) == false );
    REQUIRE( is_evil(1789) == false );
    REQUIRE( is_evil(1938) );
    REQUIRE( is_evil(1995) );
    REQUIRE( is_evil(2014) == false );
	REQUIRE( is_evil(2781) );
	REQUIRE( is_evil(6667) );
    REQUIRE( is_evil(9000) == false );  //*
	REQUIRE( is_evil(9001) );           //*
	REQUIRE( is_evil(9002) );           //*
    REQUIRE( is_evil(9003) == false );
    REQUIRE( is_evil(1990) == false );  //*
    REQUIRE( is_evil(7104) );
}

TEST_CASE("factorial")
{
	REQUIRE( is_factorial(0) == false );
	REQUIRE( is_factorial(1) );
	REQUIRE( is_factorial(2) );
    REQUIRE( is_factorial(3) == false );
	REQUIRE( is_factorial(6) );
	REQUIRE( is_factorial(24) );
    REQUIRE( is_factorial(55) == false );   //*
    REQUIRE( is_factorial(67) == false );   //*
	REQUIRE( is_factorial(120) );
	REQUIRE( is_factorial(293) == false );  //*
	REQUIRE( is_factorial(366) == false );
	REQUIRE( is_factorial(555) == false );  //*
	REQUIRE( is_factorial(720) );
	REQUIRE( is_factorial(5040) );
	REQUIRE( is_factorial(1789) == false );
    REQUIRE( is_factorial(1991) == false );
    REQUIRE( is_factorial(1313) == false );
    REQUIRE( is_factorial(1503) == false );
    REQUIRE( is_factorial(1938) == false );
    REQUIRE( is_factorial(1995) == false );
    REQUIRE( is_factorial(2014) == false );
	REQUIRE( is_factorial(7777) == false );
    REQUIRE( is_factorial(4523) == false );
    REQUIRE( is_factorial(6667) == false );
	REQUIRE( is_factorial(40320) );
	REQUIRE( is_factorial(362880) );
	REQUIRE( is_factorial(3628800) );
	REQUIRE( is_factorial(39916800) );
	REQUIRE( is_factorial(39916801) == false );
	REQUIRE( is_factorial(1990) == false );
	REQUIRE( is_factorial(7104) == false );
}

TEST_CASE("fibonacci")
{
	REQUIRE( is_fibonacci(0) == false );
	REQUIRE( is_fibonacci(1) );
	REQUIRE( is_fibonacci(1) );
	REQUIRE( is_fibonacci(2) );
	REQUIRE( is_fibonacci(3) );
    REQUIRE( is_fibonacci(4) == false );
	REQUIRE( is_fibonacci(5) );
	REQUIRE( is_fibonacci(8) );
	REQUIRE( is_fibonacci(13) );
	REQUIRE( is_fibonacci(21) );
	REQUIRE( is_fibonacci(34) );
	REQUIRE( is_fibonacci(55) );
	REQUIRE( is_fibonacci(89) );
	REQUIRE( is_fibonacci(90) == false );
    REQUIRE( is_fibonacci(144) );
	REQUIRE( is_fibonacci(293) == false );
	REQUIRE( is_fibonacci(366) == false );
    REQUIRE( is_fibonacci(377) );           //*
    REQUIRE( is_fibonacci(610) );           //*
    REQUIRE( is_fibonacci(987) );           //*
    REQUIRE( is_fibonacci(1313) == false );
    REQUIRE( is_fibonacci(1503) == false );
    REQUIRE( is_fibonacci(1597) );          //*
	REQUIRE( is_fibonacci(1672) == false );
	REQUIRE( is_fibonacci(1789) == false );
	REQUIRE( is_fibonacci(1938) == false );
    REQUIRE( is_fibonacci(1991) == false );
    REQUIRE( is_fibonacci(1995) == false );
    REQUIRE( is_fibonacci(2014) == false );
    REQUIRE( is_fibonacci(6667) == false );
	REQUIRE( is_fibonacci(6765) );          //*
    REQUIRE( is_fibonacci(9865) == false );
    REQUIRE( is_fibonacci(10946) );
    REQUIRE( is_fibonacci(1990) == false );         //*
    REQUIRE( is_fibonacci(7104) == false );
}

TEST_CASE("google")
{
	REQUIRE( is_google(0) == false );
    REQUIRE( is_google(1) == false );
	REQUIRE( is_google(2) );
	REQUIRE( is_google(71) );
	REQUIRE( is_google(72) == false );
	REQUIRE( is_google(271) );
	REQUIRE( is_google(293) == false );
	REQUIRE( is_google(366) == false );
    REQUIRE( is_google(1313) == false );
    REQUIRE( is_google(1349) == false );
    REQUIRE( is_google(1503) == false );
	REQUIRE( is_google(1789) == false );
	REQUIRE( is_google(1938) == false );
    REQUIRE( is_google(1995) == false );
    REQUIRE( is_google(2014) == false );
	REQUIRE( is_google(4523) );
    REQUIRE( is_google(2014) == false );    //*
    REQUIRE( is_google(2118) == false );    //*
    REQUIRE( is_google(3286) == false );    //*
    REQUIRE( is_google(3510) == false );    //*
    REQUIRE( is_google(4000) == false );    //*
    REQUIRE( is_google(5192) == false );    //*
    REQUIRE( is_google(5729) == false );    //*
    REQUIRE( is_google(6666) == false );    //*
    REQUIRE( is_google(6667) == false );
    REQUIRE( is_google(7898) == false );
	REQUIRE( is_google(8899) == false );
	REQUIRE( is_google(74713) );
	REQUIRE( is_google(904523) );
	REQUIRE( is_google(2718281) );
	REQUIRE( is_google(72407663) );
	REQUIRE( is_google(360287471) );
	REQUIRE( is_google(7427466391) );
	REQUIRE( is_google(1990) == false );
	REQUIRE( is_google(7104) == false );
}

TEST_CASE("happy")
{
	REQUIRE( is_happy(0) == false );
	REQUIRE( is_happy(1) );
    REQUIRE( is_happy(2) == false );
	REQUIRE( is_happy(7) );
	REQUIRE( is_happy(10) );
	REQUIRE( is_happy(13) );
	REQUIRE( is_happy(19) );
	REQUIRE( is_happy(23) );
	REQUIRE( is_happy(28) );
	REQUIRE( is_happy(31) );
	REQUIRE( is_happy(32) );
	REQUIRE( is_happy(44) );
	REQUIRE( is_happy(49) );
	REQUIRE( is_happy(68) );
	REQUIRE( is_happy(70) );
	REQUIRE( is_happy(79) );
	REQUIRE( is_happy(82) );
	REQUIRE( is_happy(86) );
	REQUIRE( is_happy(91) );
	REQUIRE( is_happy(94) );
	REQUIRE( is_happy(96) == false );   //*
	REQUIRE( is_happy(97) );
	REQUIRE( is_happy(100) );
	REQUIRE( is_happy(103) );
	REQUIRE( is_happy(109) );
	REQUIRE( is_happy(130) );
	REQUIRE( is_happy(190) );
	REQUIRE( is_happy(203) );
	REQUIRE( is_happy(208) );
	REQUIRE( is_happy(230) );
	REQUIRE( is_happy(280) );
	REQUIRE( is_happy(293) );
	REQUIRE( is_happy(301) );
	REQUIRE( is_happy(302) );
	REQUIRE( is_happy(310) );
	REQUIRE( is_happy(320) );
	REQUIRE( is_happy(366) == false );
	REQUIRE( is_happy(404) );
	REQUIRE( is_happy(409) );
	REQUIRE( is_happy(440) );
	REQUIRE( is_happy(490) );
	REQUIRE( is_happy(608) );
	REQUIRE( is_happy(680) );
	REQUIRE( is_happy(806) );
	REQUIRE( is_happy(860) );
	REQUIRE( is_happy(700) );
	REQUIRE( is_happy(709) );
	REQUIRE( is_happy(790) );
	REQUIRE( is_happy(802) );
	REQUIRE( is_happy(820) );
	REQUIRE( is_happy(901) );
	REQUIRE( is_happy(904) );
	REQUIRE( is_happy(910) );
	REQUIRE( is_happy(970) );
	REQUIRE( is_happy(907) );
	REQUIRE( is_happy(940) );
	REQUIRE( is_happy(1184) );
	REQUIRE( is_happy(1313) == false );
	REQUIRE( is_happy(1503) == false );
	REQUIRE( is_happy(1789) == false );
	REQUIRE( is_happy(1938) == false );
	REQUIRE( is_happy(1995) );
	REQUIRE( is_happy(2014) == false );
	REQUIRE( is_happy(1234) == false );
	REQUIRE( is_happy(3728) == false );
	REQUIRE( is_happy(1009) );
	REQUIRE( is_happy(1010) == false );
	REQUIRE( is_happy(6667) == false );
	REQUIRE( is_happy(1990) == false );
	REQUIRE( is_happy(7104) == false );
}

TEST_CASE("hungry")
{
	REQUIRE( is_hungry(0) == false );
    REQUIRE( is_hungry(1) == false );
	REQUIRE( is_hungry(5) );
	REQUIRE( is_hungry(17) );
	REQUIRE( is_hungry(74) );
	REQUIRE( is_hungry(144) );
	REQUIRE( is_hungry(145) == false );
	REQUIRE( is_hungry(293) == false );
	REQUIRE( is_hungry(366) == false );
    REQUIRE( is_hungry(1313) == false );
    REQUIRE( is_hungry(1349) == false );
    REQUIRE( is_hungry(1503) == false );
	REQUIRE( is_hungry(1789) == false );
	REQUIRE( is_hungry(1938) == false );
    REQUIRE( is_hungry(1995) == false );
    REQUIRE( is_hungry(2000) == false );    //*
	REQUIRE( is_hungry(2003) );
    REQUIRE( is_hungry(2014) == false );
	REQUIRE( is_hungry(4532) == false );
    REQUIRE( is_hungry(4637) == false );
    REQUIRE( is_hungry(6667) == false );
	REQUIRE( is_hungry(37929) );
	REQUIRE( is_hungry(82810) );
	REQUIRE( is_hungry(161449) );
	REQUIRE( is_hungry(1990) == false );
	REQUIRE( is_hungry(7104) == false );
}

TEST_CASE("lazy_caterer")
{
	REQUIRE( is_lazy_caterer(0) == false );
    REQUIRE( is_lazy_caterer(1) == false );
	REQUIRE( is_lazy_caterer(2) );
	REQUIRE( is_lazy_caterer(4) );
	REQUIRE( is_lazy_caterer(7) );
	REQUIRE( is_lazy_caterer(11) );
	REQUIRE( is_lazy_caterer(16) );
	REQUIRE( is_lazy_caterer(22) );
	REQUIRE( is_lazy_caterer(29) );
	REQUIRE( is_lazy_caterer(37) );
	REQUIRE( is_lazy_caterer(46) );
	REQUIRE( is_lazy_caterer(47) == false );
	REQUIRE( is_lazy_caterer(56) );
	REQUIRE( is_lazy_caterer(67) );             //*
	REQUIRE( is_lazy_caterer(79) );             //*
	REQUIRE( is_lazy_caterer(92) );             //*
	REQUIRE( is_lazy_caterer(121) );            //*
	REQUIRE( is_lazy_caterer(137) );            //*
	REQUIRE( is_lazy_caterer(154) );            //*
	REQUIRE( is_lazy_caterer(191) );            //*
	REQUIRE( is_lazy_caterer(192) == false );   //*
	REQUIRE( is_lazy_caterer(293) == false );
	REQUIRE( is_lazy_caterer(366) == false );
    REQUIRE( is_lazy_caterer(519) == false );
    REQUIRE( is_lazy_caterer(1349) == false );
    REQUIRE( is_lazy_caterer(1313) == false );
    REQUIRE( is_lazy_caterer(1503) == false );
    REQUIRE( is_lazy_caterer(1789) == false );
    REQUIRE( is_lazy_caterer(1938) == false );
    REQUIRE( is_lazy_caterer(1995) == false );
    REQUIRE( is_lazy_caterer(2014) == false );
	REQUIRE( is_lazy_caterer(6547) == false );
	REQUIRE( is_lazy_caterer(6667) == false );
	REQUIRE( is_lazy_caterer(1990) == false );
	REQUIRE( is_lazy_caterer(7104) == false );
}

TEST_CASE("lucky")
{
	REQUIRE( is_lucky(0) == false );
	REQUIRE( is_lucky(1) );
	REQUIRE( is_lucky(3) );
    REQUIRE( is_lucky(4) == false );
	REQUIRE( is_lucky(7) );
	REQUIRE( is_lucky(9) );
	REQUIRE( is_lucky(13) );
	REQUIRE( is_lucky(15) );
	REQUIRE( is_lucky(21) );
	REQUIRE( is_lucky(25) );
	REQUIRE( is_lucky(31) );
	REQUIRE( is_lucky(33) );
	REQUIRE( is_lucky(37) );
	REQUIRE( is_lucky(38) == false );
	REQUIRE( is_lucky(293) == false );
	REQUIRE( is_lucky(366) == false );
    REQUIRE( is_lucky(787) );
    REQUIRE( is_lucky(1349) == false );
    REQUIRE( is_lucky(1313) == false );
    REQUIRE( is_lucky(1503) );
    REQUIRE( is_lucky(1789) == false );
    REQUIRE( is_lucky(1938) == false );
    REQUIRE( is_lucky(1995) );
    REQUIRE( is_lucky(2014) == false );
    REQUIRE( is_lucky(2019) );          //*
    REQUIRE( is_lucky(2023) );          //*
    REQUIRE( is_lucky(2085) );          //*
    REQUIRE( is_lucky(2211) );          //*
    REQUIRE( is_lucky(2323) );          //*
    REQUIRE( is_lucky(3003) );          //*
    REQUIRE( is_lucky(3007) );          //*
	REQUIRE( is_lucky(3357) == false );
	REQUIRE( is_lucky(6667) );
	REQUIRE( is_lucky(1990) == false );
	REQUIRE( is_lucky(7104) == false );
}

TEST_CASE("mersenne")
{
	REQUIRE( is_mersenne(0) == false );
    REQUIRE( is_mersenne(1) == false );
	REQUIRE( is_mersenne(3) );
	REQUIRE( is_mersenne(7) );
	REQUIRE( is_mersenne(31) );
	REQUIRE( is_mersenne(127) );
	REQUIRE( is_mersenne(255) == false);
	REQUIRE( is_mersenne(256) == false );
	REQUIRE( is_mersenne(293) == false );
	REQUIRE( is_mersenne(366) == false );
    REQUIRE( is_mersenne(761) == false );
    REQUIRE( is_mersenne(1313) == false );
    REQUIRE( is_mersenne(1349) == false );
    REQUIRE( is_mersenne(1503) == false );
	REQUIRE( is_mersenne(1789) == false );
	REQUIRE( is_mersenne(1938) == false );
    REQUIRE( is_mersenne(1995) == false );
    REQUIRE( is_mersenne(2014) == false );  //*
    REQUIRE( is_mersenne(2015) == false );  //*
	REQUIRE( is_mersenne(2047) );
	REQUIRE( is_mersenne(2198) == false );  //*
    REQUIRE( is_mersenne(2974) == false );  //*
    REQUIRE( is_mersenne(3965) == false );  //*
	REQUIRE( is_mersenne(4231) == false );  //*
    REQUIRE( is_mersenne(4864) == false );  //*
    REQUIRE( is_mersenne(5529) == false );  //*
    REQUIRE( is_mersenne(6667) == false );
	REQUIRE( is_mersenne(7654) == false );
	REQUIRE( is_mersenne(8191) );
	REQUIRE( is_mersenne(131071) );
	REQUIRE( is_mersenne(524287) );
	REQUIRE( is_mersenne(8388607) );
	REQUIRE( is_mersenne(536870911) );
	REQUIRE( is_mersenne(1990) == false );
	REQUIRE( is_mersenne(7104) == false );
}

TEST_CASE("mersenne_prime")
{
	REQUIRE( is_mersenne_prime(0) == false );
    REQUIRE( is_mersenne_prime(1) == false );
	REQUIRE( is_mersenne_prime(3) );
	REQUIRE( is_mersenne_prime(7) );
	REQUIRE( is_mersenne_prime(31) );
	REQUIRE( is_mersenne_prime(61) == false);
	REQUIRE( is_mersenne_prime(62) == false );
	REQUIRE( is_mersenne_prime(127) );
	REQUIRE( is_mersenne_prime(293) == false );
	REQUIRE( is_mersenne_prime(366) == false );
    REQUIRE( is_mersenne_prime(761) == false );
	REQUIRE( is_mersenne_prime(1313) == false );
    REQUIRE( is_mersenne_prime(1349) == false );
    REQUIRE( is_mersenne_prime(1503) == false );
	REQUIRE( is_mersenne_prime(1789) == false );
	REQUIRE( is_mersenne_prime(1938) == false );
    REQUIRE( is_mersenne_prime(1995) == false );
    REQUIRE( is_mersenne_prime(2014) == false );
	REQUIRE( is_mersenne_prime(2077) == false );    //*
	REQUIRE( is_mersenne_prime(2582) == false );    //*
	REQUIRE( is_mersenne_prime(2945) == false );    //*
	REQUIRE( is_mersenne_prime(3087) == false );    //*
	REQUIRE( is_mersenne_prime(3369) == false );    //*
	REQUIRE( is_mersenne_prime(4409) == false );    //*
	REQUIRE( is_mersenne_prime(4520) == false );    //*
	REQUIRE( is_mersenne_prime(5619) == false );    //*
	REQUIRE( is_mersenne_prime(6615) == false );
	REQUIRE( is_mersenne_prime(6667) == false );
	REQUIRE( is_mersenne_prime(8191) );
	REQUIRE( is_mersenne_prime(131071) );
	REQUIRE( is_mersenne_prime(524287) );
	REQUIRE( is_mersenne_prime(2147483647) );
	REQUIRE( is_mersenne_prime(2305843009213693951llu) );
//	REQUIRE( is_mersenne_prime(618970019642690137449562111llu) );
    REQUIRE( is_mersenne_prime(1990) == false );
    REQUIRE( is_mersenne_prime(7104) == false );
}

TEST_CASE("narcissistic")
{
	REQUIRE( is_narcissistic(0) == false );
	REQUIRE( is_narcissistic(1) );
	REQUIRE( is_narcissistic(2) );
	REQUIRE( is_narcissistic(3) );
	REQUIRE( is_narcissistic(4) );
	REQUIRE( is_narcissistic(5) );
	REQUIRE( is_narcissistic(6) );
	REQUIRE( is_narcissistic(7) );
	REQUIRE( is_narcissistic(8) );
	REQUIRE( is_narcissistic(9) );
    REQUIRE( is_narcissistic(10) == false );
	REQUIRE( is_narcissistic(79) == false );
	REQUIRE( is_narcissistic(153) );
	REQUIRE( is_narcissistic(293) == false );
	REQUIRE( is_narcissistic(366) == false );
	REQUIRE( is_narcissistic(371) );
	REQUIRE( is_narcissistic(372) == false );
	REQUIRE( is_narcissistic(407) );            //*
    REQUIRE( is_narcissistic(1313) == false );
    REQUIRE( is_narcissistic(1349) == false );
    REQUIRE( is_narcissistic(1503) == false );
	REQUIRE( is_narcissistic(1634) );           //*
    REQUIRE( is_narcissistic(1789) == false );
    REQUIRE( is_narcissistic(1938) == false );
    REQUIRE( is_narcissistic(1995) == false );
    REQUIRE( is_narcissistic(2014) == false );
    REQUIRE( is_narcissistic(2048) == false );  //*
    REQUIRE( is_narcissistic(5555) == false );  //*
    REQUIRE( is_narcissistic(6667) == false );
    REQUIRE( is_narcissistic(8208) );
	REQUIRE( is_narcissistic(9474) );           //*
	REQUIRE( is_narcissistic(54748) );          //*
	REQUIRE( is_narcissistic(92727) );
	REQUIRE( is_narcissistic(1990) == false );          //*
	REQUIRE( is_narcissistic(7104) == false );
	
}

TEST_CASE("odd")
{
	REQUIRE( is_odd(0) == false );
	REQUIRE( is_odd(1) );
    REQUIRE( is_odd(2) == false );
	REQUIRE( is_odd(3) );
	REQUIRE( is_odd(5) );
	REQUIRE( is_odd(7) );
	REQUIRE( is_odd(9) );
	REQUIRE( is_odd(11) );
	REQUIRE( is_odd(13) );
	REQUIRE( is_odd(15) );
	REQUIRE( is_odd(17) );
	REQUIRE( is_odd(19) );
	REQUIRE( is_odd(21) );
	REQUIRE( is_odd(22) == false );
    REQUIRE( is_odd(45) );
	REQUIRE( is_odd(293) );
	REQUIRE( is_odd(351) );
	REQUIRE( is_odd(366) == false );
	REQUIRE( is_odd(690) == false );
    REQUIRE( is_odd(1313) );
    REQUIRE( is_odd(1349) );
    REQUIRE( is_odd(1503) );
    REQUIRE( is_odd(1789) );
    REQUIRE( is_odd(1938) == false );
    REQUIRE( is_odd(1995) );
    REQUIRE( is_odd(1999) );            //*
    REQUIRE( is_odd(2003) );            //*
    REQUIRE( is_odd(2005) );            //*
    REQUIRE( is_odd(2007) );            //*
    REQUIRE( is_odd(2009) );            //*
    REQUIRE( is_odd(2011) );            //*
    REQUIRE( is_odd(2013) );            //*
    REQUIRE( is_odd(2014) == false );
    REQUIRE( is_odd(6667) );
    REQUIRE( is_odd(1990) == false );
    REQUIRE( is_odd(7104) == false );
}

TEST_CASE("odious")
{
	REQUIRE( is_odious(0) == false );
	REQUIRE( is_odious(1) );
	REQUIRE( is_odious(2) );
    REQUIRE( is_odious(3) == false );
	REQUIRE( is_odious(4) );
	REQUIRE( is_odious(7) );
	REQUIRE( is_odious(8) );
	REQUIRE( is_odious(11) );
	REQUIRE( is_odious(13) );
	REQUIRE( is_odious(14) );
	REQUIRE( is_odious(16) );
	REQUIRE( is_odious(19) );
	REQUIRE( is_odious(22) );
	REQUIRE( is_odious(23) == false );
	REQUIRE( is_odious(25) );           //*
	REQUIRE( is_odious(26) );           //*
	REQUIRE( is_odious(28) );           //*
	REQUIRE( is_odious(31) );           //*
	REQUIRE( is_odious(32) );           //*
	REQUIRE( is_odious(37) );           //*
	REQUIRE( is_odious(41) );           //*
	REQUIRE( is_odious(156) == false );
	REQUIRE( is_odious(293) == false );
	REQUIRE( is_odious(351) );
	REQUIRE( is_odious(366) == false );
    REQUIRE( is_odious(666) );
    REQUIRE( is_odious(1313) == false );
    REQUIRE( is_odious(1503) );
    REQUIRE( is_odious(1789) );
    REQUIRE( is_odious(1938) == false );
    REQUIRE( is_odious(1995) == false );
    REQUIRE( is_odious(2014) );
    REQUIRE( is_odious(6667) == false );
    REQUIRE( is_odious(8886) );
    REQUIRE( is_odious(1990) );
    REQUIRE( is_odious(7104) == false );
}

TEST_CASE("palindrome")
{
	REQUIRE( is_palindrome(0) );
	REQUIRE( is_palindrome(1) );
	REQUIRE( is_palindrome(2) );
	REQUIRE( is_palindrome(3) );
	REQUIRE( is_palindrome(4) );
	REQUIRE( is_palindrome(5) );
	REQUIRE( is_palindrome(6) );
	REQUIRE( is_palindrome(7) );
	REQUIRE( is_palindrome(8) );
	REQUIRE( is_palindrome(9) );
    REQUIRE( is_palindrome(10) == false );
	REQUIRE( is_palindrome(11) );
	REQUIRE( is_palindrome(101) );
	REQUIRE( is_palindrome(121) );
	REQUIRE( is_palindrome(293) == false );
	REQUIRE( is_palindrome(366) == false );
    REQUIRE( is_palindrome(666) );
	REQUIRE( is_palindrome(464) );
	REQUIRE( is_palindrome(465) == false );
    REQUIRE( is_palindrome(777) );
    REQUIRE( is_palindrome(1313) == false );
    REQUIRE( is_palindrome(1503) == false );
	REQUIRE( is_palindrome(1789) == false );
    REQUIRE( is_palindrome(1938) == false );
    REQUIRE( is_palindrome(1995) == false );
    REQUIRE( is_palindrome(2014) == false );
    REQUIRE( is_palindrome(6667) == false );
	REQUIRE( is_palindrome(7887) );
	REQUIRE( is_palindrome(9009) );
	REQUIRE( is_palindrome(45054) );
	REQUIRE( is_palindrome(450054) );          //*
	REQUIRE( is_palindrome(1230321) );         //*
	REQUIRE( is_palindrome(98765456789) );
	REQUIRE( is_palindrome(1990) == false );   //*
	REQUIRE( is_palindrome(7104) == false );
}

TEST_CASE("palindromic_prime")
{
    REQUIRE( is_palindromic_prime(0) == false );
    REQUIRE( is_palindromic_prime(1) == false );
	REQUIRE( is_palindromic_prime(2) );
	REQUIRE( is_palindromic_prime(3) );
	REQUIRE( is_palindromic_prime(5) );
	REQUIRE( is_palindromic_prime(7) );
	REQUIRE( is_palindromic_prime(11) );
	REQUIRE( is_palindromic_prime(101) );
	REQUIRE( is_palindromic_prime(131) );
	REQUIRE( is_palindromic_prime(151) );
	REQUIRE( is_palindromic_prime(181) );
	REQUIRE( is_palindromic_prime(191) );
	REQUIRE( is_palindromic_prime(293) == false );
	REQUIRE( is_palindromic_prime(313) );
	REQUIRE( is_palindromic_prime(314) == false );
	REQUIRE( is_palindromic_prime(366) == false );
	REQUIRE( is_palindromic_prime(373) );           //*
	REQUIRE( is_palindromic_prime(383) );           //*
	REQUIRE( is_palindromic_prime(727) );           //*
	REQUIRE( is_palindromic_prime(757) );           //*
	REQUIRE( is_palindromic_prime(787) );           //*
	REQUIRE( is_palindromic_prime(797) );           //*
    REQUIRE( is_palindromic_prime(856) == false );
	REQUIRE( is_palindromic_prime(919) );           //*
	REQUIRE( is_palindromic_prime(989) == false );
    REQUIRE( is_palindromic_prime(1313) == false );
    REQUIRE( is_palindromic_prime(1349) == false );
    REQUIRE( is_palindromic_prime(1503) == false );
    REQUIRE( is_palindromic_prime(1789) == false );
    REQUIRE( is_palindromic_prime(1938) == false );
    REQUIRE( is_palindromic_prime(1995) == false );
    REQUIRE( is_palindromic_prime(2014) == false );
    REQUIRE( is_palindromic_prime(6667) == false );
    REQUIRE( is_palindromic_prime(1990) == false );
    REQUIRE( is_palindromic_prime(7104) == false );
}

TEST_CASE("pentagonal")
{
	REQUIRE( is_pentagonal(0) == false );
	REQUIRE( is_pentagonal(1) );
    REQUIRE( is_pentagonal(2) == false );
	REQUIRE( is_pentagonal(5) );
	REQUIRE( is_pentagonal(12) );
	REQUIRE( is_pentagonal(22) );
	REQUIRE( is_pentagonal(35) );
	REQUIRE( is_pentagonal(51) );
	REQUIRE( is_pentagonal(70) );
	REQUIRE( is_pentagonal(92) );
	REQUIRE( is_pentagonal(117) );
	REQUIRE( is_pentagonal(145) );
	REQUIRE( is_pentagonal(176) );
	REQUIRE( is_pentagonal(177) == false );
	REQUIRE( is_pentagonal(293) == false );
	REQUIRE( is_pentagonal(366) == false );
    REQUIRE( is_pentagonal(425) );
    REQUIRE( is_pentagonal(477) );  //*
    REQUIRE( is_pentagonal(532) );  //*
	REQUIRE( is_pentagonal(555) == false );
    REQUIRE( is_pentagonal(651) );  //*
    REQUIRE( is_pentagonal(715) );  //*
    REQUIRE( is_pentagonal(852) );  //*
    REQUIRE( is_pentagonal(925) );  //*
    REQUIRE( is_pentagonal(1001) ); //*
    REQUIRE( is_pentagonal(1349) == false );
    REQUIRE( is_pentagonal(1313) == false );
    REQUIRE( is_pentagonal(1503) == false );
    REQUIRE( is_pentagonal(1789) == false );
    REQUIRE( is_pentagonal(1938) == false );
    REQUIRE( is_pentagonal(1995) == false );
    REQUIRE( is_pentagonal(2014) == false );
    REQUIRE( is_pentagonal(6667) == false );
    REQUIRE( is_pentagonal(1990) == false );
    REQUIRE( is_pentagonal(7104) == false );
}

TEST_CASE("perfect")
{
	REQUIRE( is_perfect(0) == false );
    REQUIRE( is_perfect(1) == false );
    REQUIRE( is_perfect(2) == false );  //*
	REQUIRE( is_perfect(6) );
	REQUIRE( is_perfect(28) );
	REQUIRE( is_perfect(293) == false );
	REQUIRE( is_perfect(366) == false );
	REQUIRE( is_perfect(496) );
	REQUIRE( is_perfect(1313) == false );
	REQUIRE( is_perfect(1503) == false );
	REQUIRE( is_perfect(1789) == false );
    REQUIRE( is_perfect(1991) == false );
    REQUIRE( is_perfect(1938) == false );
    REQUIRE( is_perfect(1995) == false );
    REQUIRE( is_perfect(2014) == false );
	REQUIRE( is_perfect(8400) == false );
    REQUIRE( is_perfect(4712) == false );
    REQUIRE( is_perfect(6667) == false );
	REQUIRE( is_perfect(8128) );
	REQUIRE( is_perfect(33550336) );
	REQUIRE( is_perfect(44533434) == false );
	REQUIRE( is_perfect(8589869056llu) );
	REQUIRE( is_perfect(137438691328llu) );
	REQUIRE( is_perfect(2305843008139952128llu) );
//	REQUIRE( is_perfect(2658455991569831744654692615953842176llu) );
//	REQUIRE( is_perfect(191561942608236107294793378084303638130997321548169216llu) );
    REQUIRE( is_perfect(1990) == false );
    REQUIRE( is_perfect(7104) == false );
}


TEST_CASE("power_of_2")
{
	REQUIRE( is_power_of_2(0) == false );
	REQUIRE( is_power_of_2(1) );
	REQUIRE( is_power_of_2(2) );
    REQUIRE( is_power_of_2(3) == false );
	REQUIRE( is_power_of_2(4) );
	REQUIRE( is_power_of_2(8) );
	REQUIRE( is_power_of_2(16) );
	REQUIRE( is_power_of_2(32) );
	REQUIRE( is_power_of_2(64) );
	REQUIRE( is_power_of_2(128) );
	REQUIRE( is_power_of_2(293) == false );
	REQUIRE( is_power_of_2(256) );
	REQUIRE( is_power_of_2(366) == false );
    REQUIRE( is_power_of_2(458) == false );
	REQUIRE( is_power_of_2(512) );
	REQUIRE( is_power_of_2(1024) );
    REQUIRE( is_power_of_2(1313) == false );
    REQUIRE( is_power_of_2(1349) == false );
    REQUIRE( is_power_of_2(1503) == false );
    REQUIRE( is_power_of_2(1789) == false );
    REQUIRE( is_power_of_2(1938) == false );
    REQUIRE( is_power_of_2(1995) == false );
    REQUIRE( is_power_of_2(2014) == false );
	REQUIRE( is_power_of_2(2048) );
	REQUIRE( is_power_of_2(4096) );
	REQUIRE( is_power_of_2(6667) == false );
	REQUIRE( is_power_of_2(8192) );
	REQUIRE( is_power_of_2(16384) );
	REQUIRE( is_power_of_2(32768) );
	REQUIRE( is_power_of_2(65536) );
	REQUIRE( is_power_of_2(262144) );   //*
	REQUIRE( is_power_of_2(524288) );   //*
	REQUIRE( is_power_of_2(8388608) );
	REQUIRE( is_power_of_2(1990) == false );  //*
	REQUIRE( is_power_of_2(7104) == false );
}

TEST_CASE("powerful")
{
	REQUIRE( is_powerful(0) == false );
	REQUIRE( is_powerful(1) );
    REQUIRE( is_powerful(2) == false );
	REQUIRE( is_powerful(4) );
	REQUIRE( is_powerful(8) );
	REQUIRE( is_powerful(9) );
	REQUIRE( is_powerful(16) );
	REQUIRE( is_powerful(25) );
	REQUIRE( is_powerful(27) );
	REQUIRE( is_powerful(32) );
	REQUIRE( is_powerful(36) );
	REQUIRE( is_powerful(49) );
	REQUIRE( is_powerful(72) );     //*
	REQUIRE( is_powerful(81) );     //*
	REQUIRE( is_powerful(100) );    //*
	REQUIRE( is_powerful(108) );    //*
	REQUIRE( is_powerful(121) );    //*
	REQUIRE( is_powerful(125) );    //*
	REQUIRE( is_powerful(128) );    //*
	REQUIRE( is_powerful(144) );    //*
	REQUIRE( is_powerful(169) );    //*
	REQUIRE( is_powerful(293) == false );
	REQUIRE( is_powerful(366) == false );
    REQUIRE( is_powerful(811) == false );
    REQUIRE( is_powerful(1313) == false );
    REQUIRE( is_powerful(1349) == false );
    REQUIRE( is_powerful(1503) == false );
    REQUIRE( is_powerful(1789) == false );
    REQUIRE( is_powerful(1938) == false );
    REQUIRE( is_powerful(1995) == false );
    REQUIRE( is_powerful(2014) == false );
	REQUIRE( is_powerful(2048) );
	REQUIRE( is_powerful(6667) == false );
	REQUIRE( is_powerful(1990) == false );
	REQUIRE( is_powerful(7104) == false );
}

TEST_CASE("practical")
{
	REQUIRE( is_practical(0) == false );
	REQUIRE( is_practical(1) );
	REQUIRE( is_practical(2) );
    REQUIRE( is_practical(3) == false );
	REQUIRE( is_practical(4) );
	REQUIRE( is_practical(6) );
	REQUIRE( is_practical(8) );
	REQUIRE( is_practical(12) );
	REQUIRE( is_practical(16) );
	REQUIRE( is_practical(18) );
	REQUIRE( is_practical(20) );
	REQUIRE( is_practical(24) );
	REQUIRE( is_practical(25) == false );
	REQUIRE( is_practical(252) );
	REQUIRE( is_practical(293) == false );
	REQUIRE( is_practical(366) == false );
    REQUIRE( is_practical(666) );
    REQUIRE( is_practical(672) );   //*
    REQUIRE( is_practical(680) );   //*
    REQUIRE( is_practical(684) );   //*
    REQUIRE( is_practical(690) );   //*
    REQUIRE( is_practical(696) );   //*
    REQUIRE( is_practical(714) );   //*
    REQUIRE( is_practical(800) );   //*
    REQUIRE( is_practical(816) );   //*
	REQUIRE( is_practical(1313) == false );
	REQUIRE( is_practical(1503) == false );
	REQUIRE( is_practical(1789) == false );
	REQUIRE( is_practical(1938) == false );
    REQUIRE( is_practical(1995) == false );
    REQUIRE( is_practical(2014) == false );
    REQUIRE( is_practical(5656) );
    REQUIRE( is_practical(6667) == false );
    REQUIRE( is_practical(1990) == false );
    REQUIRE( is_practical(7104) );
    REQUIRE( is_practical(7104) == false );
}

TEST_CASE("prime")
{
	REQUIRE( is_prime(0) == false );
	REQUIRE( is_prime(1) == false );
	REQUIRE( is_prime(2) );
	REQUIRE( is_prime(3) );
	REQUIRE( is_prime(4) == false );
	REQUIRE( is_prime(5) );
    REQUIRE( is_prime(6) == false );
	REQUIRE( is_prime(7) );
	REQUIRE( is_prime(9) == false );
	REQUIRE( is_prime(11) );
	REQUIRE( is_prime(13) );
	REQUIRE( is_prime(17) );
	REQUIRE( is_prime(19) );
	REQUIRE( is_prime(23) );
	REQUIRE( is_prime(29) );
	REQUIRE( is_prime(31) );
	REQUIRE( is_prime(32) == false );
	REQUIRE( is_prime(257) );
    REQUIRE( is_prime(1313) == false );
    REQUIRE( is_prime(1349) == false);
    REQUIRE( is_prime(1503) == false );
	REQUIRE( is_prime(1789) );
	REQUIRE( is_prime(1801) );  //*
	REQUIRE( is_prime(1811) );  //*
	REQUIRE( is_prime(1823) );  //*
	REQUIRE( is_prime(1949) );  //*
    REQUIRE( is_prime(1938) == false );
    REQUIRE( is_prime(1991) == false );
    REQUIRE( is_prime(1995) == false );
    REQUIRE( is_prime(2014) == false );
    REQUIRE( is_prime(6667) == false );
    REQUIRE( is_prime(8911) == false );
	REQUIRE( is_prime(9817) );  //*
	REQUIRE( is_prime(100000000000001llu) == false );
	REQUIRE( is_prime(1990) == false );
	REQUIRE( is_prime(7104) == false );
}

TEST_CASE("primorial")
{
	REQUIRE( is_primorial(0) == false );
    REQUIRE( is_primorial(1) == false );
	REQUIRE( is_primorial(2) );
	REQUIRE( is_primorial(6) );
	REQUIRE( is_primorial(30) );
	REQUIRE( is_primorial(210) );
	REQUIRE( is_primorial(293) == false );
	REQUIRE( is_primorial(366) == false );
    REQUIRE( is_primorial(1349) == false );
    REQUIRE( is_primorial(1313) == false );
    REQUIRE( is_primorial(1503) == false );
    REQUIRE( is_primorial(1789) == false );
    REQUIRE( is_primorial(1938) == false );
    REQUIRE( is_primorial(1995) == false );
    REQUIRE( is_primorial(2014) == false );
	REQUIRE( is_primorial(2030) == false );
	REQUIRE( is_primorial(2310) );
	REQUIRE( is_primorial(6667) == false );
    REQUIRE( is_primorial(8911) == false );
	REQUIRE( is_primorial(30030) );
	REQUIRE( is_primorial(30031) == false );
	REQUIRE( is_primorial(510510llu) );
	REQUIRE( is_primorial(9699690llu) );
	REQUIRE( is_primorial(223092870llu) );
	REQUIRE( is_primorial(6469693230llu) );
	REQUIRE( is_primorial(1990) == false );
	REQUIRE( is_primorial(7104) == false );
}

TEST_CASE("pronic")
{
	REQUIRE( is_pronic(0) == false );
    REQUIRE( is_pronic(1) == false );
	REQUIRE( is_pronic(2) );
	REQUIRE( is_pronic(6) );
	REQUIRE( is_pronic(12) );
	REQUIRE( is_pronic(20) );
	REQUIRE( is_pronic(30) );
	REQUIRE( is_pronic(42) );
	REQUIRE( is_pronic(56) );
	REQUIRE( is_pronic(72) );
	REQUIRE( is_pronic(90) );
	REQUIRE( is_pronic(110) );
	REQUIRE( is_pronic(366) == false );
    REQUIRE( is_pronic(1349) == false );
    REQUIRE( is_pronic(1313) == false );
    REQUIRE( is_pronic(1503) == false );
    REQUIRE( is_pronic(1789) == false );
    REQUIRE( is_pronic(1938) == false );
    REQUIRE( is_pronic(1995) == false );
    REQUIRE( is_pronic(2014) == false );
	REQUIRE( is_pronic(1806) );
	REQUIRE( is_pronic(6667) == false );
    REQUIRE( is_pronic(8911) == false );
	REQUIRE( is_pronic(132) );
	REQUIRE( is_pronic(133) == false );
	REQUIRE( is_pronic(1990) == false );
	REQUIRE( is_pronic(7104) == false );
}

TEST_CASE("repunit")
{
	REQUIRE( is_repunit(0) == false );
	REQUIRE( is_repunit(1) );
    REQUIRE( is_repunit(2) == false );
	REQUIRE( is_repunit(11) );
	REQUIRE( is_repunit(111) );
	REQUIRE( is_repunit(366) == false );
	REQUIRE( is_repunit(1111) );
    REQUIRE( is_repunit(1349) == false );
	REQUIRE( is_repunit(11111) );
	REQUIRE( is_repunit(111111) );
	REQUIRE( is_repunit(1111111) );
	REQUIRE( is_repunit(11111111) );
	REQUIRE( is_repunit(111111111) );
	REQUIRE( is_repunit(1111111111) );
	REQUIRE( is_repunit(1313) == false );
	REQUIRE( is_repunit(1503) == false );
	REQUIRE( is_repunit(1789) == false );
	REQUIRE( is_repunit(1938) == false );
    REQUIRE( is_repunit(1995) == false );
    REQUIRE( is_repunit(2014) == false );
	REQUIRE( is_repunit(6666) == false );
	REQUIRE( is_repunit(6667) == false );
    REQUIRE( is_repunit(8911) == false );
	REQUIRE( is_repunit(11111111111) );
	REQUIRE( is_repunit(11111111112) == false );
	REQUIRE( is_repunit(1990) == false );
	REQUIRE( is_repunit(11111111110) == false );
	REQUIRE( is_repunit(7104) == false );
}

TEST_CASE("repdigit")
{
    REQUIRE( is_repdigit(0) == false );
    REQUIRE( is_repdigit(1) );
    REQUIRE( is_repdigit(22) );
    REQUIRE( is_repdigit(333) );
	REQUIRE( is_repdigit(366) == false );
    REQUIRE( is_repdigit(666) );
    REQUIRE( is_repdigit(4444) );
    REQUIRE( is_repdigit(55555) );
    REQUIRE( is_repdigit(666666) );
    REQUIRE( is_repdigit(7777777) );
    REQUIRE( is_repdigit(88888888) );
    REQUIRE( is_repdigit(9999999990) == false);
	REQUIRE( is_repdigit(7777777777777777777llu) );
    REQUIRE( is_repdigit(1234345) == false );
    REQUIRE( is_repdigit(1313) == false );
    REQUIRE( is_repdigit(1503) == false );
    REQUIRE( is_repdigit(1789) == false );
    REQUIRE( is_repdigit(1938) == false );
    REQUIRE( is_repdigit(1995) == false );
    REQUIRE( is_repdigit(2014) == false );
	REQUIRE( is_repdigit(2222) );
	REQUIRE( is_repdigit(6667) == false );
    REQUIRE( is_repdigit(8911) == false );
    REQUIRE( is_repdigit(8912) == false );
    REQUIRE( is_repdigit(1990) == false );
    REQUIRE( is_repdigit(7104) == false );
}

TEST_CASE("smith")
{
	REQUIRE( is_smith(0) == false );
    REQUIRE( is_smith(1) == false );
	REQUIRE( is_smith(4) );
	REQUIRE( is_smith(22) );
	REQUIRE( is_smith(27) );
	REQUIRE( is_smith(58) );
	REQUIRE( is_smith(85) );
	REQUIRE( is_smith(94) );
	REQUIRE( is_smith(121) );
	REQUIRE( is_smith(166) );
	REQUIRE( is_smith(202) );
	REQUIRE( is_smith(265) );
	REQUIRE( is_smith(366) == false );
    REQUIRE( is_smith(666) );
    REQUIRE( is_smith(1313) == false );
    REQUIRE( is_smith(1503) == false );
    REQUIRE( is_smith(1789) == false );
    REQUIRE( is_smith(1938) == false );
    REQUIRE( is_smith(1995) == false );
    REQUIRE( is_smith(2014) == false );
    REQUIRE( is_smith(6667) == false );
	REQUIRE( is_smith(634) );
    REQUIRE( is_smith(654) );
	REQUIRE( is_smith(274) );
	REQUIRE( is_smith(275) == false);
	REQUIRE( is_smith(1990) == false );
	REQUIRE( is_smith(7104) == false );
}

TEST_CASE("sociable")
{
	REQUIRE( is_sociable(0) == false );
    REQUIRE( is_sociable(1) == false );
	REQUIRE( is_sociable(366) == false );
	REQUIRE( is_sociable(12496) );
	REQUIRE( is_sociable(14264) );
	REQUIRE( is_sociable(14288) );
	REQUIRE( is_sociable(14316) );
	REQUIRE( is_sociable(14536) );
	REQUIRE( is_sociable(15472) );
	REQUIRE( is_sociable(17716) );
	REQUIRE( is_sociable(19116) );
	REQUIRE( is_sociable(19916) );
	REQUIRE( is_sociable(22744) );
    REQUIRE( is_sociable(1349) == false );
    REQUIRE( is_sociable(1313) == false );
    REQUIRE( is_sociable(1503) == false );
    REQUIRE( is_sociable(1789) == false );
    REQUIRE( is_sociable(1938) == false );
    REQUIRE( is_sociable(1995) == false );
    REQUIRE( is_sociable(2014) == false );
	REQUIRE( is_sociable(2684) );
	REQUIRE( is_sociable(6667) == false );
    REQUIRE( is_sociable(8911) == false );
	REQUIRE( is_sociable(22745) == false );
	REQUIRE( is_sociable(1990) == false );
	REQUIRE( is_sociable(7104) == false );
}

TEST_CASE("square")
{
	REQUIRE( is_square(0) == false );
	REQUIRE( is_square(1) );
    REQUIRE( is_square(2) == false );
	REQUIRE( is_square(4) );
	REQUIRE( is_square(9) );
	REQUIRE( is_square(16) );
	REQUIRE( is_square(25) );
	REQUIRE( is_square(36) );
	REQUIRE( is_square(49) );
	REQUIRE( is_square(64) );
	REQUIRE( is_square(81) );
	REQUIRE( is_square(100) );
	REQUIRE( is_square(366) == false );
    REQUIRE( is_square(1349) == false );
    REQUIRE( is_square(1313) == false );
    REQUIRE( is_square(1503) == false );
    REQUIRE( is_square(1789) == false );
    REQUIRE( is_square(1938) == false );
    REQUIRE( is_square(1995) == false );
    REQUIRE( is_square(2014) == false );
    REQUIRE( is_square(6667) == false );
	REQUIRE( is_square(1600) );
    REQUIRE( is_square(144) );
    REQUIRE( is_square(484) );
	REQUIRE( is_square(121) );
	REQUIRE( is_square(122) == false );
	REQUIRE( is_square(1990) == false );
	REQUIRE( is_square(7104) == false );
}

TEST_CASE("square_free")
{
	REQUIRE( is_square_free(0) == false );
	REQUIRE( is_square_free(1) );
	REQUIRE( is_square_free(2) );
	REQUIRE( is_square_free(3) );
    REQUIRE( is_square_free(4) == false );
	REQUIRE( is_square_free(5) );
	REQUIRE( is_square_free(6) );
	REQUIRE( is_square_free(7) );
	REQUIRE( is_square_free(10) );
	REQUIRE( is_square_free(11) );
	REQUIRE( is_square_free(13) );
	REQUIRE( is_square_free(14) );
	REQUIRE( is_square_free(293) );
	REQUIRE( is_square_free(366) );
    REQUIRE( is_square_free(1349) );
    REQUIRE( is_square_free(1313) );
    REQUIRE( is_square_free(1503) == false );
    REQUIRE( is_square_free(1789) );
    REQUIRE( is_square_free(1938) );
    REQUIRE( is_square_free(1995) );
    REQUIRE( is_square_free(2014) );
    REQUIRE( is_square_free(6667) );
	REQUIRE( is_square_free(7691) );
    REQUIRE( is_square_free(8911) );
	REQUIRE( is_square_free(15) );
	REQUIRE( is_square_free(16) == false );
	REQUIRE( is_square_free(1990) );
	REQUIRE( is_square_free(7104) == false );
}

TEST_CASE("tetrahedral")
{
	REQUIRE( is_tetrahedral(0) == false );
	REQUIRE( is_tetrahedral(1) );
    REQUIRE( is_tetrahedral(2) == false );
	REQUIRE( is_tetrahedral(4) );
	REQUIRE( is_tetrahedral(10) );
	REQUIRE( is_tetrahedral(20) );
	REQUIRE( is_tetrahedral(35) );
	REQUIRE( is_tetrahedral(56) );
	REQUIRE( is_tetrahedral(84) );
	REQUIRE( is_tetrahedral(120) );
	REQUIRE( is_tetrahedral(165) );
	REQUIRE( is_tetrahedral(220) );
	REQUIRE( is_tetrahedral(293) == false );
	REQUIRE( is_tetrahedral(366) == false );
    REQUIRE( is_tetrahedral(1349) == false );
    REQUIRE( is_tetrahedral(1313) == false );
    REQUIRE( is_tetrahedral(1503) == false );
    REQUIRE( is_tetrahedral(1789) == false );
    REQUIRE( is_tetrahedral(1938) == false );
    REQUIRE( is_tetrahedral(1995) == false );
    REQUIRE( is_tetrahedral(2014) == false );
    REQUIRE( is_tetrahedral(6667) == false );
	REQUIRE( is_tetrahedral(8436) );
    REQUIRE( is_tetrahedral(8911) == false );
	REQUIRE( is_tetrahedral(286) );
	REQUIRE( is_tetrahedral(287) == false );
	REQUIRE( is_tetrahedral(1990) == false );
	REQUIRE( is_tetrahedral(7104) == false );
}

TEST_CASE("triangular")
{
	REQUIRE( is_triangular(0) == false );
	REQUIRE( is_triangular(1) );
    REQUIRE( is_triangular(2) == false );
	REQUIRE( is_triangular(3) );
	REQUIRE( is_triangular(6) );
	REQUIRE( is_triangular(10) );
	REQUIRE( is_triangular(15) );
	REQUIRE( is_triangular(21) );
	REQUIRE( is_triangular(28) );
	REQUIRE( is_triangular(36) );
	REQUIRE( is_triangular(45) );
	REQUIRE( is_triangular(55) );
	REQUIRE( is_triangular(351) );
	REQUIRE( is_triangular(366) == false );
    REQUIRE( is_triangular(666) );
    REQUIRE( is_triangular(1313) == false );
    REQUIRE( is_triangular(1503) == false );
    REQUIRE( is_triangular(1789) == false );
    REQUIRE( is_triangular(1938) == false );
    REQUIRE( is_triangular(1995) == false );
    REQUIRE( is_triangular(2014) == false );
    REQUIRE( is_triangular(6667) == false );
	REQUIRE( is_triangular(1431) );
    REQUIRE( is_triangular(8911) );
	REQUIRE( is_triangular(66) );
	REQUIRE( is_triangular(67) == false );
	REQUIRE( is_triangular(1990) == false );
	REQUIRE( is_triangular(7104) == false );
}

TEST_CASE("twin")
{
	REQUIRE( is_twin(0) == false );
    REQUIRE( is_twin(1) == false );
	REQUIRE( is_twin(3) );
	REQUIRE( is_twin(5) );
	REQUIRE( is_twin(7) );
	REQUIRE( is_twin(11) );
	REQUIRE( is_twin(13) );
	REQUIRE( is_twin(17) );
	REQUIRE( is_twin(19) );
	REQUIRE( is_twin(29) );
	REQUIRE( is_twin(31) );
	REQUIRE( is_twin(41) );
	REQUIRE( is_twin(366) == false );
    REQUIRE( is_twin(1349) == false );
    REQUIRE( is_twin(1313) == false );
    REQUIRE( is_twin(1503) == false );
    REQUIRE( is_twin(1789) );
    REQUIRE( is_twin(1938) == false );
    REQUIRE( is_twin(1995) == false );
    REQUIRE( is_twin(2014) == false );
    REQUIRE( is_twin(6667) == false );
	REQUIRE( is_twin(1229) );
    REQUIRE( is_twin(4637) );
	REQUIRE( is_twin(59) );
	REQUIRE( is_twin(60) == false );
	REQUIRE( is_twin(1990) == false );
	REQUIRE( is_twin(7104) == false );
}

TEST_CASE("ulam")
{
	REQUIRE( is_ulam(0) == false );
	REQUIRE( is_ulam(1) );
	REQUIRE( is_ulam(2) );
	REQUIRE( is_ulam(3) );
	REQUIRE( is_ulam(4) );
	REQUIRE( is_ulam(6) );
	REQUIRE( is_ulam(8) );
	REQUIRE( is_ulam(11) );
    REQUIRE( is_ulam(12) == false );
	REQUIRE( is_ulam(13) );
	REQUIRE( is_ulam(16) );
	REQUIRE( is_ulam(18) );
	REQUIRE( is_ulam(366) == false );
    REQUIRE( is_ulam(1349) == false );
    REQUIRE( is_ulam(1313));
    REQUIRE( is_ulam(1503) == false );
    REQUIRE( is_ulam(1789) == false );
    REQUIRE( is_ulam(1938) == false );
    REQUIRE( is_ulam(1995) == false );
    REQUIRE( is_ulam(2014) == false );
    REQUIRE( is_ulam(6667) == false );
	REQUIRE( is_ulam(316));
    REQUIRE( is_ulam(8911) == false );
	REQUIRE( is_ulam(26) );
	REQUIRE( is_ulam(27) == false );
	REQUIRE( is_ulam(1990) == false );
	REQUIRE( is_ulam(7104) );
}

TEST_CASE("undulating")
{
	REQUIRE( is_undulating(0) == false );
    REQUIRE( is_undulating(1) == false );
	REQUIRE( is_undulating(101) );
	REQUIRE( is_undulating(111) );
	REQUIRE( is_undulating(121) );
	REQUIRE( is_undulating(131) );
	REQUIRE( is_undulating(141) );
	REQUIRE( is_undulating(151) );
	REQUIRE( is_undulating(161) );
	REQUIRE( is_undulating(171) );
	REQUIRE( is_undulating(181) );
	REQUIRE( is_undulating(191) );
	REQUIRE( is_undulating(366) == false );
    REQUIRE( is_undulating(666) );
    REQUIRE( is_undulating(1313));
    REQUIRE( is_undulating(1503) == false );
    REQUIRE( is_undulating(1789) == false );
    REQUIRE( is_undulating(1938) == false );
    REQUIRE( is_undulating(1995) == false );
    REQUIRE( is_undulating(2014) == false );
    REQUIRE( is_undulating(6667) == false );
	REQUIRE( is_undulating(929));
    REQUIRE( is_undulating(5656));
	REQUIRE( is_undulating(313) );
	REQUIRE( is_undulating(314) == false );
	REQUIRE( is_undulating(1990) == false );
	REQUIRE( is_undulating(7104) == false );
}

TEST_CASE("untouchable")
{
	REQUIRE( is_untouchable(0) == false );
    REQUIRE( is_untouchable(1) == false );
	REQUIRE( is_untouchable(2) );
	REQUIRE( is_untouchable(5) );
	REQUIRE( is_untouchable(52) );
	REQUIRE( is_untouchable(88) );
	REQUIRE( is_untouchable(96) );
	REQUIRE( is_untouchable(120) );
	REQUIRE( is_untouchable(124) );
	REQUIRE( is_untouchable(146) );
	REQUIRE( is_untouchable(162) );
	REQUIRE( is_untouchable(188) );
	REQUIRE( is_untouchable(366) == false );
    REQUIRE( is_untouchable(1349) == false );
    REQUIRE( is_untouchable(1313) == false );
    REQUIRE( is_untouchable(1503) == false );
    REQUIRE( is_untouchable(1789) == false );
    REQUIRE( is_untouchable(1938) == false );
    REQUIRE( is_untouchable(1995) == false );
    REQUIRE( is_untouchable(2014) == false );
	REQUIRE( is_untouchable(2015) == false );
	REQUIRE( is_untouchable(6667) == false );
    REQUIRE( is_untouchable(4712) );
	REQUIRE( is_untouchable(206) );
	REQUIRE( is_untouchable(210) == false );
	REQUIRE( is_untouchable(1990) == false );
	REQUIRE( is_untouchable(7104) == false );
}

TEST_CASE("vampire")
{
	REQUIRE( is_vampire(0) == false );
    REQUIRE( is_vampire(1) == false );
	REQUIRE( is_vampire(126) );
	REQUIRE( is_vampire(153) );
	REQUIRE( is_vampire(315) == false );
	REQUIRE( is_vampire(366) == false );
	REQUIRE( is_vampire(688) );
	REQUIRE( is_vampire(1313) == false );
	REQUIRE( is_vampire(1206) );
	REQUIRE( is_vampire(1255) );
	REQUIRE( is_vampire(1260) );
    REQUIRE( is_vampire(1349) == false );
	REQUIRE( is_vampire(1395) );
	REQUIRE( is_vampire(1435) );
	REQUIRE( is_vampire(1503) );
    REQUIRE( is_vampire(1530) );
	REQUIRE( is_vampire(1789) == false );
	REQUIRE( is_vampire(1938) == false );
    REQUIRE( is_vampire(1995) == false );
    REQUIRE( is_vampire(2014) == false );
    REQUIRE( is_vampire(6667) == false );
	REQUIRE( is_vampire(6880) );
    REQUIRE( is_vampire(8911) == false );
	REQUIRE( is_vampire(1530) );
	REQUIRE( is_vampire(1827) );
	REQUIRE( is_vampire(1828) == false );
	REQUIRE( is_vampire(1990) == false );
	REQUIRE( is_vampire(7104) == false );
}

TEST_CASE("weird")
{
	REQUIRE( is_weird(0) == false );
    REQUIRE( is_weird(1) == false );
	REQUIRE( is_weird(70) );
	REQUIRE( is_weird(366) == false );
	REQUIRE( is_weird(836) );
    REQUIRE( is_weird(1349) == false );
    REQUIRE( is_weird(1313) == false );
    REQUIRE( is_weird(1503) == false );
    REQUIRE( is_weird(4030) );
	REQUIRE( is_weird(5830) );
	REQUIRE( is_weird(7192) );
	REQUIRE( is_weird(7912) );
	REQUIRE( is_weird(9272) );
	REQUIRE( is_weird(10430) );
	REQUIRE( is_weird(10570) );
	REQUIRE( is_weird(10792) );
	REQUIRE( is_weird(1789) == false );
	REQUIRE( is_weird(1938) == false );
    REQUIRE( is_weird(1995) == false );
    REQUIRE( is_weird(2014) == false );
    REQUIRE( is_weird(6667) == false );
	REQUIRE( is_weird(100) == false );
    REQUIRE( is_weird(8911) == false );
	REQUIRE( is_weird(10990) );
	REQUIRE( is_weird(10991) == false );
	REQUIRE( is_weird(1990) == false );
	REQUIRE( is_weird(7104) == false );
}

TEST_CASE("fermat")
{
	REQUIRE( is_fermat(0) == false );
    REQUIRE( is_fermat(2) == false );
	REQUIRE( is_fermat(3) );
	REQUIRE( is_fermat(5) );
	REQUIRE( is_fermat(17) );
	REQUIRE( is_fermat(257) );
	REQUIRE( is_fermat(366) == false );
    REQUIRE( is_fermat(1349) == false );
    REQUIRE( is_fermat(1503) == false );
    REQUIRE( is_fermat(1313) == false );
    REQUIRE( is_fermat(65537) );
	REQUIRE( is_fermat(1789) == false );
    REQUIRE( is_fermat(1995) == false );
    REQUIRE( is_fermat(2014) == false );
    REQUIRE( is_fermat(6667) == false );
    REQUIRE( is_fermat(8321) == false );
    REQUIRE( is_fermat(8911) == false );
//	REQUIRE( is_fermat(4294967297llu) );
//	REQUIRE( is_fermat(4294967298llu) == false );
    REQUIRE( is_fermat(1990) == false );
    REQUIRE( is_fermat(7104) == false );
}

TEST_CASE("hypotenuse")
{
	REQUIRE( is_hypotenuse(0) == false );
    REQUIRE( is_hypotenuse(1) == false );
	REQUIRE( is_hypotenuse(5) );
	REQUIRE( is_hypotenuse(6) == false);
	REQUIRE( is_hypotenuse(10) );
	REQUIRE( is_hypotenuse(13) );
	REQUIRE( is_hypotenuse(17) );
	REQUIRE( is_hypotenuse(25) );
	REQUIRE( is_hypotenuse(26) );
	REQUIRE( is_hypotenuse(29) );
	REQUIRE( is_hypotenuse(37) );
	REQUIRE( is_hypotenuse(41) );
	REQUIRE( is_hypotenuse(53) );
	REQUIRE( is_hypotenuse(61) );
	REQUIRE( is_hypotenuse(65) );
	REQUIRE( is_hypotenuse(65) );
	REQUIRE( is_hypotenuse(73) );
	REQUIRE( is_hypotenuse(85) );
	REQUIRE( is_hypotenuse(85) );
	REQUIRE( is_hypotenuse(89) );
	REQUIRE( is_hypotenuse(97) );
	REQUIRE( is_hypotenuse(101) );
	REQUIRE( is_hypotenuse(109) );
	REQUIRE( is_hypotenuse(113) );
	REQUIRE( is_hypotenuse(125) );
	REQUIRE( is_hypotenuse(137) );
	REQUIRE( is_hypotenuse(145) );
	REQUIRE( is_hypotenuse(145) );
	REQUIRE( is_hypotenuse(149) );
	REQUIRE( is_hypotenuse(157) );
	REQUIRE( is_hypotenuse(169) );
	REQUIRE( is_hypotenuse(173) );
	REQUIRE( is_hypotenuse(181) );
	REQUIRE( is_hypotenuse(185) );
	REQUIRE( is_hypotenuse(185) );
	REQUIRE( is_hypotenuse(193) );
	REQUIRE( is_hypotenuse(197) );
	REQUIRE( is_hypotenuse(205) );
	REQUIRE( is_hypotenuse(205) );
	REQUIRE( is_hypotenuse(221) );
	REQUIRE( is_hypotenuse(221) );
	REQUIRE( is_hypotenuse(229) );
	REQUIRE( is_hypotenuse(233) );
	REQUIRE( is_hypotenuse(241) );
	REQUIRE( is_hypotenuse(257) );
	REQUIRE( is_hypotenuse(265) );
	REQUIRE( is_hypotenuse(265) );
	REQUIRE( is_hypotenuse(269) );
	REQUIRE( is_hypotenuse(277) );
	REQUIRE( is_hypotenuse(281) );
	REQUIRE( is_hypotenuse(289) );
	REQUIRE( is_hypotenuse(293) );
	REQUIRE( is_hypotenuse(305) );
	REQUIRE( is_hypotenuse(306) );
	REQUIRE( is_hypotenuse(307)  == false );
	REQUIRE( is_hypotenuse(313) );
	REQUIRE( is_hypotenuse(366) );
	REQUIRE( is_hypotenuse(1302)== false );
    REQUIRE( is_hypotenuse(1313));
    REQUIRE( is_hypotenuse(1349) == false );
    REQUIRE( is_hypotenuse(1789));
    REQUIRE( is_hypotenuse(1938) == false );
    REQUIRE( is_hypotenuse(1990));
    REQUIRE( is_hypotenuse(1995));
    REQUIRE( is_hypotenuse(2012) == false );
    REQUIRE( is_hypotenuse(2014));
    REQUIRE( is_hypotenuse(6667));
	REQUIRE( is_hypotenuse(8911) == false );
    REQUIRE( is_hypotenuse(99991) == false );
    REQUIRE( is_hypotenuse(7104) == false );


}

TEST_CASE("persistent")
{
	REQUIRE( is_persistent(0) == false );
    REQUIRE( is_persistent(1) == false );
	REQUIRE( is_persistent(1) == false );
	REQUIRE( is_persistent(2) == false );
	REQUIRE( is_persistent(3) == false );
	REQUIRE( is_persistent(4) == false );
	REQUIRE( is_persistent(5) == false );
	REQUIRE( is_persistent(6) == false );
	REQUIRE( is_persistent(7) == false );
	REQUIRE( is_persistent(8) == false );
	REQUIRE( is_persistent(9) == false );
	REQUIRE( is_persistent(10) == false );
	REQUIRE( is_persistent(11) == false );
	REQUIRE( is_persistent(12) == false );
	REQUIRE( is_persistent(13) == false );
	REQUIRE( is_persistent(14) == false );
	REQUIRE( is_persistent(15) == false );
	REQUIRE( is_persistent(16) == false );
	REQUIRE( is_persistent(17) == false );
	REQUIRE( is_persistent(18) == false );
	REQUIRE( is_persistent(19) == false );
	REQUIRE( is_persistent(20) == false );
	REQUIRE( is_persistent(21) == false );
	REQUIRE( is_persistent(22) == false );
	REQUIRE( is_persistent(23) == false );
	REQUIRE( is_persistent(24) == false );
	REQUIRE( is_persistent(25) == false );
	REQUIRE( is_persistent(26) == false );
	REQUIRE( is_persistent(27) == false );
	REQUIRE( is_persistent(28) == false );
	REQUIRE( is_persistent(29) == false );
	REQUIRE( is_persistent(30) == false );
	REQUIRE( is_persistent(31) == false );
	REQUIRE( is_persistent(32) == false );
	REQUIRE( is_persistent(33) == false );
	REQUIRE( is_persistent(34) == false );
	REQUIRE( is_persistent(35) == false );
	REQUIRE( is_persistent(36) == false );
	REQUIRE( is_persistent(37) == false );
	REQUIRE( is_persistent(38) == false );
	REQUIRE( is_persistent(39));
	REQUIRE( is_persistent(366) == false );
	REQUIRE( is_persistent(555) == false );
	REQUIRE( is_persistent(764) );
	REQUIRE( is_persistent(765) == false );
	REQUIRE( is_persistent(788) );
	REQUIRE( is_persistent(789) == false );
	REQUIRE( is_persistent(967) );
	REQUIRE( is_persistent(999) );
	REQUIRE( is_persistent(1313) == false );
	REQUIRE( is_persistent(1503) == false );
	REQUIRE( is_persistent(1789) == false );
    REQUIRE( is_persistent(1995) == false );
    REQUIRE( is_persistent(2014) == false );
    REQUIRE( is_persistent(6667) == false );
	REQUIRE( is_persistent(6788) );
	REQUIRE( is_persistent(6789) == false );
	REQUIRE( is_persistent(8819) == false );
	REQUIRE( is_persistent(8911) == false );
	REQUIRE( is_persistent(9996) );
	REQUIRE( is_persistent(9997) == false );
	REQUIRE( is_hypotenuse(1990) == false );
	REQUIRE( is_persistent(7104) == false );
}

TEST_CASE("product_perfect")
{
	REQUIRE( is_product_perfect(0) == false );
	REQUIRE( is_product_perfect(6) );
	REQUIRE( is_product_perfect(8) );
	REQUIRE( is_product_perfect(10) );
	REQUIRE( is_product_perfect(14) );
	REQUIRE( is_product_perfect(15) );
	REQUIRE( is_product_perfect(21) );
	REQUIRE( is_product_perfect(22) );
	REQUIRE( is_product_perfect(26) );
	REQUIRE( is_product_perfect(27) );
	REQUIRE( is_product_perfect(28) == false );
	REQUIRE( is_product_perfect(33) );
	REQUIRE( is_product_perfect(34) );
	REQUIRE( is_product_perfect(35) );
	REQUIRE( is_product_perfect(38) );
	REQUIRE( is_product_perfect(39) );
	REQUIRE( is_product_perfect(44) == false );
	REQUIRE( is_product_perfect(45) == false);
	REQUIRE( is_product_perfect(46) );
	REQUIRE( is_product_perfect(51) );
	REQUIRE( is_product_perfect(52) == false );
	REQUIRE( is_product_perfect(55) );
	REQUIRE( is_product_perfect(57) );
	REQUIRE( is_product_perfect(58) );
	REQUIRE( is_product_perfect(62) );
	REQUIRE( is_product_perfect(63) == false );
	REQUIRE( is_product_perfect(366) == false );
	REQUIRE( is_product_perfect(1000) == false );
	REQUIRE( is_product_perfect(1313) );
	REQUIRE( is_product_perfect(1349) );
	REQUIRE( is_product_perfect(1503) == false );
    REQUIRE( is_product_perfect(1789) == false );
    REQUIRE( is_product_perfect(1995) == false );
    REQUIRE( is_product_perfect(2014) == false );
    REQUIRE( is_product_perfect(6667) );
    REQUIRE( is_product_perfect(8911) == false );
    REQUIRE( is_product_perfect(89111) );
    REQUIRE( is_product_perfect(1990) == false );
    REQUIRE( is_product_perfect(7104) == false );
}

TEST_CASE("parasite")
{
	REQUIRE( is_parasite(0) == false );
	REQUIRE( is_parasite(366) == false );
	REQUIRE( is_parasite(1313) == false );
	REQUIRE( is_parasite(1349) == false );
	REQUIRE( is_parasite(1503) == false );
	REQUIRE( is_parasite(1789) == false );
	REQUIRE( is_parasite(1995) == false );
	REQUIRE( is_parasite(2014) == false );
	REQUIRE( is_parasite(4000) == false );
	REQUIRE( is_parasite(6667) == false );
	REQUIRE( is_parasite(8911) == false );
	REQUIRE( is_parasite(9999) == false );
	REQUIRE( is_parasite(102564) );
	REQUIRE( is_parasite(142857) );
	REQUIRE( is_parasite(142858) == false );
	REQUIRE( is_parasite(179487) );
    REQUIRE( is_parasite(285714) == false);
    REQUIRE( is_parasite(410256) == false);
	REQUIRE( is_parasite(428571) );
    REQUIRE( is_parasite(571428) == false);
    REQUIRE( is_parasite(714285) == false);
    REQUIRE( is_parasite(717948) == false);
	REQUIRE( is_parasite(857142) );
	REQUIRE( is_parasite(1990) == false );
	REQUIRE( is_parasite(7104) == false );
    REQUIRE( is_parasite(105263157894736842) );
}

TEST_CASE("easy_to_remember")
{
	REQUIRE( is_easy_to_remember(12) );
	REQUIRE( is_easy_to_remember(366) == false );
	REQUIRE( is_easy_to_remember(1234) );
	REQUIRE( is_easy_to_remember(1313) == false );
	REQUIRE( is_easy_to_remember(1349) == false );
	REQUIRE( is_easy_to_remember(1503) == false );
	REQUIRE( is_easy_to_remember(1789) == false );
	REQUIRE( is_easy_to_remember(1995) == false );
	REQUIRE( is_easy_to_remember(2014) == false );
	REQUIRE( is_easy_to_remember(4000) );
	REQUIRE( is_easy_to_remember(4001) == false );
	REQUIRE( is_easy_to_remember(4422) );
	REQUIRE( is_easy_to_remember(6667) );
	REQUIRE( is_easy_to_remember(7691) == false );
	REQUIRE( is_easy_to_remember(8911) == false );
	REQUIRE( is_easy_to_remember(9875) == false );
	REQUIRE( is_easy_to_remember(9876) );
	REQUIRE( is_easy_to_remember(345678) );
	REQUIRE( is_easy_to_remember(6543210) );
	REQUIRE( is_easy_to_remember(333000444llu) );
	REQUIRE( is_easy_to_remember(555559977llu) );
	REQUIRE( is_easy_to_remember(1990) == false );
	
}

TEST_CASE("ecci1")
{
	REQUIRE( is_ecci1(0) == false );
	REQUIRE( is_ecci1(3) == false );
	REQUIRE( is_ecci1(12) );
	REQUIRE( is_ecci1(15) == false );
	REQUIRE( is_ecci1(20) );
	REQUIRE( is_ecci1(21) );
	REQUIRE( is_ecci1(24) );
	REQUIRE( is_ecci1(25) == false );
	REQUIRE( is_ecci1(366) == false );
	REQUIRE( is_ecci1(1349) == false );
	REQUIRE( is_ecci1(1313) == false );
	REQUIRE( is_ecci1(1503) );
	REQUIRE( is_ecci1(1789) == false );
	REQUIRE( is_ecci1(1995) == false );
	REQUIRE( is_ecci1(2014) == false );
	REQUIRE( is_ecci1(6667) == false );
	REQUIRE( is_ecci1(8911) == false );
	REQUIRE( is_ecci1(1990) == false );
}

TEST_CASE("ecci2")
{
	REQUIRE( is_ecci2(0) == false );
	REQUIRE( is_ecci2(1) == false );
	REQUIRE( is_ecci2(2) == false );
    REQUIRE( is_ecci2(3) == false );
    REQUIRE( is_ecci2(4) == false );
    REQUIRE( is_ecci2(5) == false );
    REQUIRE( is_ecci2(6) == false );
    REQUIRE( is_ecci2(7) == false );
    REQUIRE( is_ecci2(8) == false );
    REQUIRE( is_ecci2(9) == false );
    REQUIRE( is_ecci2(10) == false );
    REQUIRE( is_ecci2(11) == false );
    REQUIRE( is_ecci2(12) == false );
    REQUIRE( is_ecci2(13) == false );
    REQUIRE( is_ecci2(14) == false );
    REQUIRE( is_ecci2(15) == false );
    REQUIRE( is_ecci2(16) == false );
    REQUIRE( is_ecci2(17) == false );
    REQUIRE( is_ecci2(18) == false );
    REQUIRE( is_ecci2(19) == false );
    REQUIRE( is_ecci2(20) == false );
	REQUIRE( is_ecci2(21) );
	REQUIRE( is_ecci2(22) == false );
    REQUIRE( is_ecci2(32) );
	REQUIRE( is_ecci2(33) == false );
	REQUIRE( is_ecci1(112) == false );
	REQUIRE( is_ecci2(366) == false );
	REQUIRE( is_ecci2(1313) == false );
	REQUIRE( is_ecci2(1349) == false );
	REQUIRE( is_ecci2(1503) == false );
	REQUIRE( is_ecci2(1789) == false );
	REQUIRE( is_ecci2(1819) == false );
	REQUIRE( is_ecci2(1938) == false );
	REQUIRE( is_ecci2(1995) == false );
	REQUIRE( is_ecci2(6667) == false );
	REQUIRE( is_ecci2(8911) == false );
	REQUIRE( is_ecci2(89111) == false );
	REQUIRE( is_ecci2(1990) == false );
}

