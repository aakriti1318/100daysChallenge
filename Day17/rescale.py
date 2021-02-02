import cv2 as cv

def rescaleFrame(frame, scale = 0.50):
    # images, videos, live videos
    width = int(frame.shape[1] * scale)
    height = int(frame.shape[0] * scale)
    dimensions = (width,height)

    return cv.resize(frame,dimensions,interpolation = cv.INTER_AREA)

# ----- IMAGE RESCALING -----
img = cv.imread('photos/cat4.jpg')
cv.imshow('Cat',img)

resized_img = rescaleFrame(img)
cv.imshow('Image',resized_img)

# ----- LIVE VIDEO CHANGING RESOLUTION -----
def changeRes(width,height):
    # live video
    capture.set(3,width)
    capture.set(4,height)

# ----- VIDEO RESCALING -----

# capture = cv.VideoCapture('videos/Doggie.mp4')
# # this loop reads the video frame by frame 
# while True:
#     isTrue, frame = capture.read()
#     frame_resized = rescaleFrame(frame)

#     cv.imshow('Video',frame)
#     cv.imshow('Video resized', frame_resized)

#     if cv.waitKey(20) & 0xFF == ord('q'):
#         break
# capture.release()
# cv.destroyAllWindows() 

cv.waitKey(0)q