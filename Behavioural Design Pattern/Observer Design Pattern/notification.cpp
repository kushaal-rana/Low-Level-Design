#include <iostream>
#include <list>
using namespace std;

class ISubscriber
{
public:
    virtual void notify(string message) = 0;
};

class User : public ISubscriber
{
private:
    int userId;

public:
    User(int userId)
    {
        this->userId = userId;
    }

    void notify(string message)
    {
        cout << "User " << userId << " got notification: " << message << endl;
    }
};

class Group : public ISubscriber
{
private:
    list<ISubscriber *> subscribers;

public:
    void subscribe(ISubscriber *subscriber)
    {
        subscribers.push_back(subscriber);
    }
    void unsubscribe(ISubscriber *subscriber)
    {
        subscribers.remove(subscriber);
    }
    void notify(string message)
    {
        for (auto subscriber : subscribers)
        {
            subscriber->notify(message);
        }
    }
};

int main()
{
    Group *group = new Group();

    User *user1 = new User(1);
    User *user2 = new User(2);
    User *user3 = new User(3);

    group->subscribe(user1);
    group->subscribe(user2);
    group->subscribe(user3);

    group->notify("Hello Users, This is new notification");
    group->unsubscribe(user2);
    group->notify("Hello Users, This is new notification");
}