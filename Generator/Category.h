#ifndef CATEGORY_H
#define CATEGORY_H
#include <string>
#include <map>
#include <vector>
#include "Node.h"

class Category
{
  std::string	_name;
  std::map<std::string, float> _values;
  std::vector<Node>		_nodes;
  float					_weight;
  bool					_maximize;

  
public:
  

  Category(const std::string& name, float weight, bool maximize = true);
  Category(const Category& other);
  
  virtual ~Category();
  virtual Category& operator=(const Category& other);
  virtual bool operator==(const Category& other) const;

  const std::string&	getName() const;
  
  const std::pair<std::string, float> getRandomValue() const;
  void	addValues(const std::string& name, float poid);
  void	deleteValues(const std::string& name);
  
  void	addNode(const Node& node);
  void deleteNode(const Node& node);

};

#endif // CATEGORY_H
