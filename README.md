# Native Image Transformation
Project will be using an alternative color space that represents colors by human perception of color. The HSL color space uses the Hue, Saturation, and Luminance of the color. 

Using C++ I will transform a image into grayscale, illini orange, create spotlight in centre and add a watermark..

**This is the original image:**

<img src="https://raw.githubusercontent.com/Iltwats/Image-Transformation/master/alma.png" width="250" height="250">

**This code will transform this image into these:**<br>
<img src="https://raw.githubusercontent.com/Iltwats/Image-Transformation/master/Result/out-grayscale.png" width="250" height="250"> 
<img src="https://raw.githubusercontent.com/Iltwats/Image-Transformation/master/Result/out-illinify.png" width="250" height="250"><br>
<img src="https://raw.githubusercontent.com/Iltwats/Image-Transformation/master/Result/out-spotlight.png" width="250" height="250">
<img src="https://raw.githubusercontent.com/Iltwats/Image-Transformation/master/Result/out-watermark.png" width="250" height="250">

## How the project works:
### For loading and saving PNG files:

- **bool PNG::readFromFile(const std::string & fileName)** loads an image based on the provided file name, a text string. The return value shows success or failure. it means a direct reference to the memory is being passed, similar to a pointer.
- **bool PNG::writeToFile(const std::string & fileName)** writes the current image to the providedfile name (overwriting existing files).

### For retrieving pixel and image information:

- **unsigned int PNG::width()** constreturns the width of the image.
- **unsigned int PNG::height()** constreturns the height of the image.
- **HSLAPixel & getPixel(unsigned int x, unsigned int y)** returns a direct reference to a pixel at the specified location.

### Other methods:

- Methods for creating empty PNGs, resizing an image, etc. You can view uiuc/PNG.h and uiuc/PNG.cpp for complete details.

***The output folder is in Result folder and the main image transformation code is in ImageTransform.cpp***

### Running and Compiling the code
Type the following commands in the terminal:
    1. `make` to build the executable for the code.<br>
    2. `./ImageTransform` to run this executable to generate the output.<br>

If you want to run the tests then:
    1. `make test` to build the test executable files.<br>
    2. `./test ` to run test executable files.<br>



