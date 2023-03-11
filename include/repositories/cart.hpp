#ifndef CARTREPOSITORYHPP
#define CARTREPOSITORYHPP

#include <ctime>
#include "../models/cart.hpp"

class CartRepository {

	public:
		CartModel getCart(int id);
		std::vector<CartModel> getAllCarts(time_t &updateDate);
		std::vector<CartModel>  getAllCarts();
};

#endif