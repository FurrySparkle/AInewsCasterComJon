with open('nextScript.txt','r') as f:
    file=f.readlines()

with open('episode.txt','w') as w:
    w.write(file)