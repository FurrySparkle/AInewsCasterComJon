import requests

url = 'https://api.openai.com/v1/chat/completions'
headers = {
    'Content-Type': 'application/json',
    'Authorization': 'Bearer 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'
}
data = {
    'model': 'gpt-3.5-turbo',
    'prompt': 'This is a test!',
    'temperature': 0.7
}
response = requests.post(url, headers=headers, json=data)

if response.ok:
    completions = response.json()['choices']
    for completion in completions:
        print(completion['text'])
else:
    print('Error:', response.status_code, response.reason)
