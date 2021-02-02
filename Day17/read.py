import cv2 as cv

# # ---- READ IMAGE ----
# img = cv.imread('photos/cat4.jpg')
# cv.imshow('kitty',img)

# cv.waitKey(0) 
# waits for infinte amount of time -- keyboard binding function 

# ---- READ VIDEOS ----
capture = cv.VideoCapture('videos/Doggie.mp4')
# this loop reads the video frame by frame 
while True:
    isTrue, frame = capture.read()
    cv.imshow('Video',frame)

    if cv.waitKey(20) & 0xFF == ord('q'):
        break

capture.release()
cv.destroyAllWindows() 


