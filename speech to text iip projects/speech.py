
# coding: utf-8

# In[1]:


import speech_recognition as sr
 
# Record Audio
r = sr.Recognizer()
mic = sr.Microphone(device_index=0)


# In[2]:


sr.Microphone.list_microphone_names()


# In[6]:


print("mic started")
with mic as source:
    r.adjust_for_ambient_noise(source)
    audio = r.listen(source)
print("mic ended\n\n")    


# In[4]:


speech_to_text = r.recognize_google(audio)


# In[5]:


print(" Translated string:" + speech_to_text )
print()


# In[ ]:


"""
# Language Translator
from googletrans import Translator  # Import Translator module from googletrans package

translator = Translator() # Create object of Translator.

translated = translator.translate('안녕하세요') 

# Source language auto detect by google trans
# By default destination language is English

print(" Source Language:" + translated.src) 
# Output: Source Language: ko

print(" Translated string:" + translated.text)
# Output: Translated string: Good evening




translated = translator.translate('안녕하세요', src='ko') # Pass only source language
translated = translator.translate('안녕하세요', dest='en') # Pass only destination language
translated = translator.translate('안녕하세요', src='ko', dest='en') # Pass both source and destinatio

translated = translator.translate('안녕하세요', src='ko', dest='ja')

print(" Source Language:" + translated.src)
# Output: Source Language: ko

print(" Translated string:" + translated.text) 
# Output: Translated string: こんにちは

print(" Pronunciation:", translated.pronunciation)
# Output: Pronunciation: Kon'nichiwa

https://www.codeproject.com/Tips/1236705/How-to-Use-Google-Translator-in-Python

"""


# In[8]:


from googletrans import Translator  # Import Translator module from googletrans package


# In[9]:


translator = Translator() # Create object of Translator.


# In[13]:


translated = translator.translate(speech_to_text, src='en', dest='hi')


# In[16]:


print(" Translated string:" + translated.text) 

