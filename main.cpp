#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

int main(int argc, char **argv) {

    if (argc != 2) {
        std::cout << "Usage: display_image ImageToLoadAndDisplay" << std::endl;
        return -1;
    }

    cv::Mat frame;
    frame = cv::imread(argv[1], cv::IMREAD_COLOR); // Read the file

    if (frame.empty()) // Check for invalid input
    {
        std::cout << "Could not open or find the frame" << std::endl;
        return -1;
    }

    cv::namedWindow("Window", cv::WINDOW_AUTOSIZE); // Create a window for display.
    cv::imshow("Window", frame); // Show our image inside it.

    cv::waitKey(0); // Wait for a keystroke in the window
    return 0;
}