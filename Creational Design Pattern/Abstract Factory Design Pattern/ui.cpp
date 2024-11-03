#include <iostream>
using namespace std;

class IButton
{
public:
    virtual void pressed() = 0;
};
class MacButton : public IButton
{
public:
    void pressed()
    {
        cout << "Pressed Mac Button" << endl;
    }
};
class WindowsButton : public IButton
{
public:
    void pressed()
    {
        cout << "Pressed Windows Button" << endl;
    }
};

class ITextBox
{
public:
    virtual void showText() = 0;
};

class MacTextBox : public ITextBox
{
public:
    void showText()
    {
        cout << "Show Mac Text Box" << endl;
    }
};
class WindowsTextBox : public ITextBox
{
public:
    void showText()
    {
        cout << "Show Windows Text Box" << endl;
    }
};

class IFactory
{
public:
    virtual IButton *createButton() = 0;
    virtual ITextBox *createTextBox() = 0;
};

class MacFactory : public IFactory
{
public:
    IButton *createButton()
    {
        return new MacButton();
    }

    ITextBox *createTextBox()
    {
        return new MacTextBox();
    }
};

class WindowsFactory : public IFactory
{
public:
    IButton *createButton()
    {
        return new WindowsButton();
    }
    ITextBox *createTextBox()
    {
        return new WindowsTextBox();
    }
};

class GUIAbstractFactory
{
public:
    static IFactory *CreateFactory(string osType)
    {
        if (osType == "mac")
        {
            return new MacFactory();
        }
        else if (osType == "windows")
        {
            return new WindowsFactory();
        }
        return new MacFactory();
    }
};

int main()
{
    cout << "Enter your machine OS " << endl;
    string osType;
    cin >> osType;

    IFactory *factory = GUIAbstractFactory::CreateFactory(osType);

    IButton *button = factory->createButton();
    button->pressed();

    ITextBox *textBox = factory->createTextBox();
    textBox->showText();

    return 0;
}