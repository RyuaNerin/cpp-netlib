
// Copyright 2010 Dean Michael Berris. 
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#define BOOST_TEST_MODULE HTTP 1.0 Client Constructor Test
#include <boost/network/include/http/client.hpp>
#include <boost/test/unit_test.hpp>

namespace http = boost::network::http;

BOOST_AUTO_TEST_CASE(http_client_constructor_test) {
    http::client instance;
    boost::asio::io_service io_service;
    http::client instance2(io_service);
    http::client instance3(http::_io_service=io_service);
}

BOOST_AUTO_TEST_CASE(http_cient_constructor_params_test) {
    http::client instance(
        http::_follow_redirects=true,
        http::_cache_resolved=true
        );
    boost::asio::io_service io_service;
    http::client instance2(
        http::_follow_redirects=true,
        http::_io_service=io_service,
        http::_cache_resolved=true
        );
    http::client instance3(
        http::_openssl_certificate="foo",
        http::_openssl_verify_path="bar"
        );
}
