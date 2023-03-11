#include "../include/services/cart.hpp"
#include "../include/repositories/cart.hpp"

std::vector<CartModel> CartService::getAllCarts() {
	CartRepository repository;

	std::vector<CartModel> carts = repository.getAllCarts();

	for (auto& cart : carts) {
		int cartValue = 0;

		for (auto& article : cart.m_articles) {
			cartValue += article.m_price * article.m_quantity;
		}

		cart.setCartValue(cartValue);
	}

	return carts;
}