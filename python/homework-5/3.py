class Webinar:
    def __init__(self, name, speakers, listeners):
        self.name = name
        self.speakers = speakers
        self.listeners = listeners

    def display_info(self):
        return f"Webinar: {self.name}, Speakers: {self.speakers}, Listeners: {self.listeners}"

    def quality(self):
        return self.speakers / self.listeners


class WebinarChild(Webinar):
    def __init__(self, name, speakers, listeners, questions):
        super().__init__(name, speakers, listeners)
        self.questions = questions

    def quality(self):
        parent_quality = super().quality()
        return parent_quality + 0.5 * (self.questions / self.speakers + self.questions / self.listeners)


# Create instances for demonstration
webinar1 = Webinar("Webinar 1", 2, 100)
webinar2 = WebinarChild("Webinar 2", 3, 150, 10)

print(webinar1.display_info())
print("Quality:", webinar1.quality())

print(webinar2.display_info())
print("Quality:", webinar2.quality())