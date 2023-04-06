# import subprocess

# # Define the pre-selected list of gestures
# GESTURES = {
#     "wave": "wave_animation", 
#     "smile": "smile_animation",
#     "nod": "nod_animation",
#     "open his arms": "open_arms_animation",
#     "fold his arms accross his chest": "fold_arms_animation",
#     "wink": "wink_animation",
#     "laugh": "laugh_animation",
#     "shake his head": "shake_head_animation",
#     "lean back": "lean_back_animation",
#     "fold his arms behind his head": "fold_arms_behind_head_animation",
#     "put his hand on his heart": "hand_on_heart_animation",
#     "raise his eyebrows": "raise_eyebrows_animation"
# }

# # Define the command to run Tortoise TTS
# TTS_COMMAND = "tortoise_tts --voice JamesOlympia --text '{}'"

# # Read the episode script file
# with open("episode_script.txt", "r") as f:
#     lines = f.readlines()

# # Parse the episode script and perform the necessary actions
# for line in lines:
#     line = line.strip()
#     if line.startswith("JAMES OLYMPIA:"):
#         # Use Tortoise TTS to read James Olympia's dialog
#         dialog = line.split("JAMES OLYMPIA: ")[1]
#         subprocess.run(TTS_COMMAND.format(dialog), shell=True)
#     elif "[" in line and "]" in line:
#         # Perform the gesture specified in the brackets
#         gesture = line.split("[")[1].split("]")[0].lower()
#         if gesture == "laugh track is played":
#             # Play the laugh track
#             subprocess.run("play laugh_track.mp3", shell=True)
#         elif gesture in GESTURES:
#             # Trigger the corresponding animation in Unreal 5
#             animation = GESTURES[gesture]
#             subprocess.run("unreal_command --trigger-animation {}".format(animation), shell=True)
#         else:
#             # Invalid gesture specified
#             print("Invalid gesture: {}".format(gesture))



import unreal as ue
import os

GESTURE_LIST = {
    "wave": "gesture_wave",
    # "smile": "gesture_smile",
    "nod": "gesture_nod",
    "open his arms": "gesture_open_arms",
    "fold his arms across his chest": "gesture_fold_arms",
    # "wink": "gesture_wink",
    # "laugh": "gesture_laugh",
    "shake his head": "gesture_shake_head",
    "lean back": "gesture_lean_back",
    "fold his arms behind his head": "gesture_fold_arms_behind_head",
    "put his hand on his heart": "gesture_heart",
    # "raise his eyebrows": "gesture_raise_eyebrows"
}

def read_script(filename):
    with open(filename, 'r') as f:
        lines = f.readlines()

    dialogue = ''
    reading_dialogue = False

    for line in lines:
        if ue.TTS.Speak == False:
        
            line = line.strip()

            if line.startswith('[') and line.endswith(']'):
            # this is a stage direction or gesture
                if reading_dialogue:
                # if we were reading dialogue, end the TTS
                    ue.TTS.Speak(dialogue)
                    dialogue = ''
                    reading_dialogue = False

                if line.lower() == '[laugh track]':
                # if it's a laugh track, play it
                    ue.SoundWavePlayer.Start(ue.load_object(None, '/Sounds/laugh_track_Cue'))
                else:
                # if it's a gesture, perform it
                    gesture_name = line[1:-1].strip().lower()
                    if gesture_name in GESTURE_LIST:
                        gesture_function_name = GESTURE_LIST[gesture_name]
                        ue.get_editor_world().exec('ABP_JamesGestures.PerformGesture{}()'.format(gesture_function_name))
            elif line.startswith('JAMES OLYMPIA:'):
            # this is dialogue
                if not reading_dialogue:
                # if we weren't reading dialogue, start the TTS
                    reading_dialogue = True

                    dialogue += '\n' + line

    # end any remaining dialogue
    if reading_dialogue:
        ue.TTS.Speak(dialogue)

# example usage:
filename = os.path.join(os.getcwd(), 'episode.txt')
read_script(filename)