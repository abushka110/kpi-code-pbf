class Webinar:
    def __init__(self, name, speakers, listeners):
        self.name = name
        self.speakers = speakers
        self.listeners = listeners

    def print_info(self):
        print(f'Webinar Name: {self.name}, Speakers: {self.speakers}, Listeners: {self.listeners}')

    def calculate_quality(self):
        return self.speakers / self.listeners


class ExtendedWebinar(Webinar):
    def __init__(self, name, speakers, listeners, questions):
        super().__init__(name, speakers, listeners)
        self.questions = questions

    def calculate_quality(self):
        base_quality = super().calculate_quality()
        return base_quality + 0.5 * (self.questions / self.speakers + self.questions / self.listeners)


# Create instances for demonstration
webinar1 = Webinar('Webinar 1', 5, 100)
webinar1.print_info()
print('Quality:', webinar1.calculate_quality())

webinar2 = ExtendedWebinar('Webinar 2', 5, 100, 20)
webinar2.print_info()
print('Quality:', webinar2.calculate_quality())