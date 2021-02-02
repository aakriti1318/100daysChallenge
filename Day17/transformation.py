import cv2 as cv
import numpy as np

img = cv.imread('photos/dog.jpg')
cv.imshow('cat',img)

# -------1. translation ----------
# shifting an img along x and y axis 
def translate(img,x,y):
    transMat = np.float32([[1,0,x],[0,1,y]]) # matrix
    dimensions = (img.shape[1], img.shape[0])
    return cv.warpAffine(img,transMat,dimensions)

# -x -> left
# -y -> up

translated = translate(img,-100,100)
cv.imshow('Trans', translated)

# --------2. Rotation ----------
def rotate(img,angle,rotPoint = None):
    (height,width) = img.shape[:2]  # 
    if rotPoint is None:
        rotPoint = (width//2,height//2)
    
    rotMat = cv.getRotationMatrix2D(rotPoint,angle,1.0)
    dimensions = (width,height)

    return cv.warpAffine(img,rotMat,dimensions)

rotated = rotate(img,45)
cv.imshow('Rotated',rotated)

cv.waitKey(0)