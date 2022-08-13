import qrcode
import cv2


# # creating a qr code that has the below given data
img= qrcode.make("https://timesofindia.indiatimes.com/india/coronavirus-in-india-live-updates-may-29/liveblog/91861001.cms")
# # data will be saved  in the new file.
img.save("qrcode_image.jpg") 



# decoding the qr code  which requires the qr code scanner
# d= cv2.QRCodeDetector()
# val,points,straight_qrcode = d.detectAndDecode(cv2.imread("bit3.jpg"))
# print(val)



