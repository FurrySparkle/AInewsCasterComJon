import sys
print(sys.path)

sys.path.append(C:\Python310\Lib\site-packages)
print(sys.path)




# -----------------------------------------------------------


# app.py deprecate


# Science Editor
script = str(FinalScript)
editorNewton = [
		,contract
		,editControl
    ,{"role":"user", "content": script}]



NewtonEdit = openai.ChatCompletion.create(

		model = model,
		messages = editorNewton,
		max_tokens = 2300,
		top_p=  0.25,
		temperature= 0.18,
		).choices[0].message.content





# TechEditor Block
script = str(NewtonEdit)
editorLinusPenguin = [
		,contract
		,editControl
    ,{"role":"user", "content": script}]



PenguinEdit = openai.ChatCompletion.create(

		model = model,
		messages = editorLinusPenguin,
		max_tokens = 2300,
		top_p=  0.35,
		temperature= 0.75,
		).choices[0].message.content


#Emotions Editor Block
script = str(PenguinEdit)
editorHaddaLamb = [		,contract
    ,editControl
  ,{"role":"user", "content": script}]


LambEdit = openai.ChatCompletion.create(

		model = model,
		messages = editorHaddaLamb,
		max_tokens = 2300,
		top_p= 0.6 ,
		temperature= 0.9,
		).choices[0].message.content


# This is an editor block, specifically notorious Culture Editor Lil Smoke
script = str(LambEdit)
editorLilSmoke = [		,contract
		,editControl
    ,{"role":"user", "content": script}]



LilEdit = openai.ChatCompletion.create(

		model = model,
		messages = editorLilSmoke,
		max_tokens = 2300,
		top_p=  0.9,
		temperature= 1.3,
		)