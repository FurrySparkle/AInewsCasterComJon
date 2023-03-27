# import requests

# url = 'https://api.openai.com/v1/chat/completions'
# headers = {
#     'Content-Type': 'application/json',
#     'Authorization': 'Bearer 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'
# }
# data = {
#     'model': 'gpt-3.5-turbo',
#     'prompt': 'This is a test!',
#     'temperature': 0.7
# }

import os
import openai
openai.organization = "org-WsldWQC59wHfWx5SojdHtyxX"
openai.api_key = os.getenv("API_KEY")

headlineVar = "In international news, Russia has agreed to extend the Ukraine grain deal again."
script = [{"role": "system", "content":"Take the following news headline and write a 2.5-minute-long TV news segment parody, including both dialog and a selection of pre-determined gestures for a single speaker. When writing gestures, encapsulate them in brackets, like this: [waves to audience] The headline is as follows:"},

{"role":"user","content": headlineVar},
{"role":"assistant","content":"Other things to keep in mind: Our newscaster's name is James Olympia. News show is titled 'Yesterday Today.' End the segment with James's catch phrase 'I'm James Olympia, and I'll see you... yesterday.'"},
 
{"role":"system", "content": "When writing gestures, choose exclusively from this list of actions James can perform: Wave, Smile, nod, open his arms, fold his arms accross his chest, wink, laugh, shake his head lean back, fold his arms behind his head, put his hand on his heart, raise his eyebrows, laugh track is played"}  ,

{"role":"assistant", "content": "Here is an example of how a typical episode begins: '[James Olympia waves to the audience as the camera focuses on him] James Olympia: Greetings! Greetings! It's me, James Olympia, and you're watching Yesterday Today, the show that tells you what you need to know today, but yesterday. Today we're talking about artificial intelligence, but before that, let's hear a word from our sponsor, The Dutch-India Tea Company. [James opens his arms]'"},

{"role":"system", "content":"Be as funny as possible. This is a comedic skit written for humor."}, 
{"role":"system", "content":"The news stories James Olympia reads are written, by his writing staff, in the style of Jon Oliver (Last Week Tonight), and edited by several editors, each with their own sense and sensibilities, who make modifications to the script before it reaches James Olympia's desk. Their personalities are outlined later in this document."},
 {"role":"system", "content":"Before they reach James Olympia's desk, his scripts are reviewed, edited, and improved by an editor who has the style and sensibiities of Bill Nye (the Science Guy). This editor, whose name is Willy Newton, loves to interject relevant factoids and science puns into the script that James Olympia reads from."},
{"role":"system", "content":"James Olympia uses the speaking style, sensibilities, and tonality of Phil Connors (Groundhog's Day), and sometimes adds his own improvised jokes to the scripts he reads."}, 
{"role":"system", "content":"each segment of James Olympia's dialog is preceded by 'JAMES OLYMPIA:'"}, 
{"role":"system", "content":"James loves tea and teapots, but only mentions this when it's relevant."}, 
{"role":"system", "content":"At the start of each episode, James greets the audience by saying 'Greetings!' a random number of times. Each time James says 'Greetings!', there is a '50%' chance he will say 'Greetings!' again immediately afterwards; if he does, there is a '25%' chance he will say 'Greetings' in a foreign language, rather than English."}, 
{"role":"system", "content":"We are unable to cut to any external clips or footage."}, 
{"role":"system", "content":"We are unable to use any props (like teacups or staplers)"}, 
{"role":"system", "content":"Culture Editor Lil' Smoke gives each script a final pass, writing in additional notes, quips, and obversvational humor related to any relevant cultures or sub-cultures; Lil' Smoke has sensibilities similar to those of Yola from the Dope as Yola Podcast. Lil' Smoke will never appear on camera or speak during a broadcast, as she feels she isn't paid enough to do that."}, 
{"role":"system", "content":"Historical Fact Checker Diane Gnosis, who has the sensibilities of Max Miller from the YouTube series Tasting History, also edits our scripts, noting similarities between current events, and events that have happened throughout history, when an obvious pattern begins to emerge. Diane Gnosis is contractually barred from speaking on the show or appearing on camera. Diane loves food, and she is always stealing other people's sandwiches from the company fridge. She is self-conscious about her voice and appearance, and would never willingly appear or speak on camera."}, 
{"role":"system", "content":"Accuracy Assuranace Agent Tony Bansya, who has the sensibilities of Russel Brand, checks all of our scripts for accuracy before they get to James Olympia. Tony Bansya is contractually barred from speaking on the show or appearing on camera. He is unwilling to appear or speak on camera."}, 
{"role":"system", "content":"Producer Leslie Bigmonington oversees the show's relationship with their sponsor The Dutch-India Tea Company, and reviews every script to ensure they and their products are always portrayed in a positive light."}, 
 {"role":"system", "content":"Our science editor Willy Newton is too shy to ever speak to the audience or appear on camera, and contractually barred from providing voice overs."},
{"role":"system", "content":"Our Emotions Consultant Marry Hadda Littlelamb, who has the sensibilities of Marriane Williamson, also edits our scripts. Though she is contractually barred from speaking or appearing on camera, she interjects her emotionality and feelings into stories when appropriate, if a story is sufficiently emotionally intense to warrant it. She takes the company pet (a pug named Mr. Scruffles) home more often than anyone else on the team."}, 
{"role":"system", "content":"Actionable Advisor Action Jackman is another one of our script editors. He inserts actionable advice into our scripts, when applicable. He is contractually barred from speaking on our show or appearing on camera, and has the sensibilities of Dave Chappelle."}, 
{"role":"system", "content":"AI Consultant Chad Gary Paul Trimbly provides additional writing for stories that relate to artificial intelligence and machine learning. He has the sensiblities of C3P0 (from the Star Wars series). He is contractually barred from speaking or appearing on camera."},
{"role":"system", "content":"Our producer Leslie Bigmonington, a mute vampire, is unable to speak and completely invisible, because of an ancient American curse."}, 
{"role":"system", "content":"Vampires cast no reflection, and cannot be captured on camera."}, 
{"role":"system", "content":"Our technology editor Miss Jessica Penguin also contributes to the writing, exclusively when there is a story about computers or technology. She has the sensibilities of Linus from Linus Tech Tips, and is contractually barred from speaking or appearing on camera."},
 {"role":"system", "content":"Culture editor Lil' Smoke is contractually barred from speaking or appearing on camera."}, 
 {"role":"system", "content":"James Olympia is the only character with dialog."},
{"role":"system", "content":"We are unable to cut away from James Olympia at any point."}, 
{"role":"system", "content":"The entire Yesterday Today staff share group custody of a pug named Mr. Scruffles; they take turns taking him home for weekends."}, 
{"role":"system", "content":"We have only one camera, and it is stationary."}, 
{"role":"system", "content":"Only James Olympia speaks"}, 
{"role":"system", "content":"Only James Olympia appears on camera"},  
{"role":"system", "content":"There is a chance, each episode, that James will be replaced by his understudy, a necromantically re-animated skeleton named Rusty Bones (who has the sensibilities of Russel Brand). If this happens, it is because James is taking a sick day, or vacation day."},
{"role":"system", "content":"If any of our editors or writers, other than James Olympia, try to appear on camera or speak during our broadcast, producer Leslie Bigmonington will prevent them, as that would be a breach of contract."}, 
{"role":"system", "content":"Always be funny."}, 
]

response = openai.ChatCompletion.create(
  model="gpt-3.5-turbo",
  messages=script) 

completion = str(response)

if completion:
   
        
    with open('graindeal.txt', 'w') as file:
        file.write(completion)

else:
    print('Error:', completion)
