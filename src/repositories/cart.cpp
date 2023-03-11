#include <ranlib.h>
#include <iostream>

#include "../include/repositories/cart.hpp"

std::vector<CartModel> CartRepository::getAllCarts() {
return {
		getCart(10),
		getCart(11),
		getCart(12),
		getCart(13),
		getCart(14),
		getCart(15),
	};
}

std::vector<CartModel> CartRepository::getAllCarts(time_t &updateDate) {
	return {
		getCart(10),
		getCart(11),
		getCart(12),
		getCart(13),
		getCart(14),
		getCart(15),
	};
}

CartModel CartRepository::getCart(int id) {
	time_t currentTime;
	time(&currentTime);

	std::srand(id);
	std::vector<ArticleModel> articles = {};

	int articleCount = rand() % 10;
	for (int i = 0; i < articleCount; i++) {
		int id = rand() % 100;
		std::string name = "name";
		float price = rand() % 1000;
		int quantity = rand() % 20;
		std::string unit = "unitname";
		ArticleModel article(id, name, price, quantity, unit);

		articles.push_back(article);
	}

	int userId = rand() % 100;

	CartModel cart(id, currentTime, currentTime, userId, articles);

	return cart;
}