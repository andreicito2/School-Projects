"""
In-Class Exercise and Demo: Manipulating Images

Note: Install the pillow library using the command:

      pip3 install --user pillow

File Name: meme_maker.py
Course:    CPTR 141
"""

# write code here
from PIL import Image, ImageFont, ImageDraw

my_image = Image.open("wolf_logo.png")
my_font = ImageFont.truetype("Roboto-Regular.ttf", 64)

editable_image - ImageDraw.Draw