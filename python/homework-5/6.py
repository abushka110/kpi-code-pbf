import random

class Soldier:
    def __init__(self, id, team):
        self.id = id
        self.team = team

    def follow_hero(self, hero):
        print(f"Soldier {self.id} is following Hero {hero.id}")

class Hero(Soldier):
    def __init__(self, id, team):
        super().__init__(id, team)
        self.level = 1

    def increase_level(self):
        self.level += 1

team1 = []
team2 = []
hero1 = Hero(1, "Team1")
hero2 = Hero(2, "Team2")

for i in range(3, 103):
    if random.choice([True, False]):
        team1.append(Soldier(i, "Team1"))
    else:
        team2.append(Soldier(i, "Team2"))

print(f"Team1 has {len(team1)} soldiers. Team2 has {len(team2)} soldiers.")

if len(team1) > len(team2):
    hero1.increase_level()
else:
    hero2.increase_level()

team1[0].follow_hero(hero1)

print(f"Hero1 ID: {hero1.id}, Soldier ID: {team1[0].id}")