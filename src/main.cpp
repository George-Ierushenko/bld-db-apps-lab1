#include <iostream>

#include "services/cart.hpp"

int main() {
	CartService service;

	auto carts = service.getAllCarts();

	for (auto& cart : carts) {
		printf(
			"Cart (%d) has %d articles, with total value of %.2f \n",
			cart.m_id, cart.m_articles.size(), cart.m_value
		);
	}

	return 0;
}