spam=False
spamcontents={"buy now","subscribe now","click this"}
email=input("enter mail")
if('buy now' in email):
    spam=True
if('subscribe now' in email):
    spam=True
if('click this' in email):
    spam=True

print("spam is ",spam)