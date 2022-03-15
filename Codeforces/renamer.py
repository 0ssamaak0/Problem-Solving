import os
from stat import filemode


for file in os.listdir():
    file_modified = file.replace(" ", " - ", 1)
    os.rename(file, file_modified)
