import speech_recognition as sr
import webbrowser
import pyttsx3
import musicLibrary

recognizer = sr.Recognizer()
recognizer.energy_threshold = 250 
recognizer.dynamic_energy_threshold = True 

engine = pyttsx3.init()

def speak(text):
    engine.say(text)
    engine.runAndWait()

def processCommand(c):
    if "open google" in c.lower():
        webbrowser.open("https://google.com")   
    elif "open whatsApp" in c.lower():
        webbrowser.open("https://whatsApp.com")   
    elif "open facebook" in c.lower():
        webbrowser.open("https://facebook.com")   
    elif "open linkedin" in c.lower():
        webbrowser.open("https://linkedin.com")   
    elif "open youtube" in c.lower():
        webbrowser.open("https://youtube.com")   
    elif c.lower().startswith("play"):
        song = c.lower().split(" ")[1] 
        link = musicLibrary2.music.get(song)
        if link:
            webbrowser.open(link)
        else:
            speak("Sorry, I couldn't find that song.")

if __name__ == "__main__":
    speak("initializing jarvis...")

    while True:
        print("recognizing...")
        try:
            with sr.Microphone() as source:
                recognizer.adjust_for_ambient_noise(source, duration=1) 
                print("Listening")
                audio = recognizer.listen(source, timeout=5, phrase_time_limit=5)  

            word = recognizer.recognize_google(audio)
            if word.lower() == "jarvis":
                speak("Ya")

                with sr.Microphone() as source:
                    recognizer.adjust_for_ambient_noise(source, duration=1) 
                    print("jarvis Active...")
                    audio = recognizer.listen(source, timeout=5, phrase_time_limit=5)  

                command = recognizer.recognize_google(audio)
                processCommand(command)

        except Exception as e:
            print("Error;{0}".format(e))
