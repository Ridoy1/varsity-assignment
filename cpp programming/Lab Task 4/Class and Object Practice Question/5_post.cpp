//*******************************
//***** - RIdoy karmakar - ******
//******** - 24103031 -  ********
//*******************************

#include <iostream>
#include <string>
using namespace std;

class Post
{
private:
    int postID;
    string authorName;
    string content;

public:
    void inputPost()
    {
        cin >> postID;
        cin >> authorName;
        cin >> content;
    }

    void editContent(string newContent)
    {
        content = newContent;
    }

    void displayPost()
    {
        cout << "\nPost ID: " << postID << endl;
        cout << "Author: " << authorName << endl;
        cout << "Content: " << content << endl;
    }
};

int main()
{
    Post myPost;

    myPost.inputPost();

    string updatedContent;
    cout << "\nEnter new content to update the post: ";
    cin >> updatedContent;
    myPost.editContent(updatedContent);

    cout << "\nUpdated Post Details:\n";
    myPost.displayPost();

    return 0;
}
