#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct User {
	int age;
	int index;
	string name;
};

bool compare(const User &a, const User &b) {
	if (a.age == b.age) {
		return a.index < b.index;
	}
	return a.age < b.age;
}

int main() {
	
	int n;
	cin >> n;

	vector<User> users;

	for (int i = 0; i < n; i++) {
		User user;
		cin >> user.age >> user.name;
		user.index = i;
		users.push_back(user);
	}

	sort(users.begin(), users.end(), compare);

	for (const User &user : users) {
		cout << user.age << " " << user.name << "\n";
	}

	return 0;
}