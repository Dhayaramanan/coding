number_of_soldiers = int(input())

soldiers = []
weapons = list(map(int, input().split()))
soldiers.extend(weapons)

lucky_list = list(filter(lambda x: x % 2 == 0, soldiers))
unlucky_list = list(filter(lambda x: x % 2 != 0, soldiers))

if len(lucky_list) > len(unlucky_list):
    print('READY FOR BATTLE')
else:
    print('NOT READY')
