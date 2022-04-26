oxford ={
    "lakdi":"wood",
    "kursi":"chair",
    "chaku":"knife"
}
key=input("Enter the key\n")
if(oxford.get(key)==None):
    print("Value not found")
else:
    print("the value of coresponding to your is ",oxford.get(key))