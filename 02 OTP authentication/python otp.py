# RECEIVING OTP using twillio

import random
from twilio.rest import Client

# // using my client twillio client id to send otps 

otp = random.randint(10000,99999)
account_sid = "AC97057989246d93d0256e7872426c3e4a"
auth_token = 'bf2134bab0a1be59d86c7fc50c3fff7b'
client = Client(account_sid,auth_token)




msg = client.messages.create(

  body = f"your otp is {otp}",
  from_ = "+19206774932",   #this is yours own twillio phone number given after account creation 

  to = "+918770792399"   #to any phone number
  
  
  )
  