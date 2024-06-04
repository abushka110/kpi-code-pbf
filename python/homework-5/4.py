class Computer:
    def __init__(self, processor, frequency, ram):
        self.processor = processor
        self.frequency = frequency
        self.ram = ram

    def quality(self):
        return 0.1 * self.frequency + self.ram

    def __str__(self):
        return f"Processor: {self.processor}, Frequency: {self.frequency}, RAM: {self.ram}"

class SubComputer(Computer):
    def __init__(self, processor, frequency, ram, disk_volume):
        super().__init__(processor, frequency, ram)
        self.disk_volume = disk_volume

    def quality(self):
        return super().quality() + 0.5 * self.disk_volume

    def __str__(self):
        return super().__str__() + f", Disk Volume: {self.disk_volume}"

# Create an instance of the parent class
parent_computer = Computer("Intel", 3.5, 16)
print(parent_computer)
print("Quality of parent computer:", parent_computer.quality())

# Create an instance of the subclass
sub_computer = SubComputer("AMD", 3.6, 32, 500)
print(sub_computer)
print("Quality of subclass computer:", sub_computer.quality())