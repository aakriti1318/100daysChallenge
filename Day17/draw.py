import cv2 as cv
import numpy as np 

blank = np.zeros((500,500,3),dtype = 'uint8') # draws a blank img of 500x500 size and uint8 is a img data type
cv.imshow('blank',blank)

# img = cv.imread('photos/cat4.jpg')
# cv.imshow('Cat',img)

# ---- 1. paint the img a certain color ----
# blank[200:300, 300:400] = 255,0,0 # BGR
# cv.imshow('Green',blank)

# ---- 2. Draw a rectangle ----
# a. border -> thickness = 2
# cv.rectangle(blank,(0,0),(250,250),(198,200,150),thickness = 2)
# cv.imshow('Rect',blank)

# b. fill inside the border thickness = cv.FILLED or -1
# cv.rectangle(blank,(0,0),(251,500),(0,255,0),thickness = cv.FILLED)
# cv.imshow('Rect',blank)

# c. Not fixed dimension 
# cv.rectangle(blank,(0,0),(blank.shape[1]//2,blank.shape[0]//1),(0,255,0),thickness = cv.FILLED)
# cv.imshow('Rect',blank)

# ---- 3. Draw a circle -----
cv.circle(blank,(blank.shape[1]//2,blank.shape[0]//2),40,(0,0,255),thickness = -1)
cv.imshow('Circle', blank)

# ---- 4. Draw a line ---- 
cv.line(blank,(100,250),(300,400),(255,255,255),thickness = 3)
cv.imshow('Line',blank )

# ---- 5. Write text on image -----
cv.putText(blank,'Soul on Fleek', (225,225), cv.FONT_HERSHEY_TRIPLEX, 1.0, (0,255,0),2)
cv.imshow('Text',blank)
cv.waitKey(0)