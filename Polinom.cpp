#include "Polinom.h"

void Polinom::afisare()
{
	for (int i = 0; i < get_coefs(); i++)
	{
		std::cout << "+" << coefs[i] << "*" << "x^" << get_coefs()-i-1;
	}
	std::cout << "\n";
}

void Polinom::citire()
{
	std::string read;
	std::getline(std::cin, read);
	std::vector<std::string> tokens;
	std::string token;
	std::istringstream tokenStream(read);
	while (std::getline(tokenStream, token, ' '))
	{
		tokens.push_back(token);
	}
	for (int i = 0; i < tokens.size(); i++)
	{
		coefs.push_back(std::stoi(tokens[i]));
	}
	nr_coefs = tokens.size();
}

double Polinom::calculate(double x)
{
	double sum{ 0 };
	double x_aux = 1;
	for (int i = 0; i < get_coefs(); i++)
	{
		x_aux = 1;
		for (int j = 0; j < get_coefs() - i - 1; j++)
		{
			x_aux *= x;
		}
		sum+=coefs[i]*x_aux;
	}
	return sum;
}
