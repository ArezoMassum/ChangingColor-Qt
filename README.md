 This project is about making a program with the interface where the user can change color of PNG files to any desired colour using it. 
 I used Signals and Slots which are used for communication between objects. Then, in the mainwindow.ui class, I added layouts and push buttons and connect them to 
 the function calls I wrote in the mainwindow.cpp class by trigger function of signals and slots. Moreover, I wrote method for
 opening a desired file of user by QFileDialog under the function call of (Choose an Image) QPushbutton . Then using QPixMap class, which Is an off-screen image 
 representation that can be used as a paint device, I represent the image that user selected from the file browser. After  that, inside another method that was 
 responsible for changing the colour which was linked to (Change the Colour) widget, that I added in the interface I used QColorDialog class which provides a 
 dialog widget for specifying colours. For example, when blue is selected from the Color palette, it will open the PNG files one by one, make the pixels that color 
 and copy them to the blue folder with the same name (or the folder name according to the RGB code of the color). I wrote this program based on Qt and C++.
