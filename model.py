import openai
import os
openai.organization = "org-WsldWQC59wHfWx5SojdHtyxX"
openai.api_key = os.getenv("API_KEY")


out = str(openai.Model.list())

if out:
   
        
    with open('Models.txt', 'w') as file:
        file.write(out)

else:
    print('Error:', out)

print("successful model list out")
