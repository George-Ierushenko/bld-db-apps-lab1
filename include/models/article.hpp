#ifndef ARTICLEMODELHPP
#define ARTICLEMODELHPP

#include <string>

class ArticleModel {

	public:
		int m_id;
		std::string m_name;
		float m_price;
		int m_quantity;
		std::string m_unit;

		ArticleModel(int &id, const std::string &name, float &price, int &quantity, const std::string &unit);
};

#endif