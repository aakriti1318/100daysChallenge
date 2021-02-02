import cv2 as cv

img = cv.imread('photos/dog.jpg')
cv.imshow('cat',img)

# ---------1. Converting to grayscale --------------
gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
cv.imshow('Gray',gray)

# ---------2. Blurring Img -------------
blur = cv.GaussianBlur(img, (7,7), cv.BORDER_DEFAULT) #(3,3) is the kernel size that should always be odd number increases the blurriness
cv.imshow('Blur', blur)

# ---------3. Edge Cascade --------------
# canny edge dectector 
canny = cv.Canny(blur,125,175)
cv.imshow('Canny',canny) 

# ---------4. Dilating Img --------------
dilated = cv.dilate(canny,(3,3),iterations=3)
cv.imshow('dilated',dilated)

# ---------5. Eroding ----------
eroded = cv.erode(dilated,(3,3),iterations = 3)
cv.imshow('Eroded',eroded)

# ---------6. Resize ------------
resized = cv.resize(img,(500,500), interpolation = cv.INTER_CUBIC)  # if u r shrinking the img use INTER_AREA and if enlarging the img use INTER_LINEAR
cv.imshow('Resized',resized)

# ---------7. Cropping -----------
crop = img[50:200,200:400]
cv.imshow('Cropped',crop)

cv.waitKey(0)
