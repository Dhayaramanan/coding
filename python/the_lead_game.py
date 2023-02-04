def main():
    number_of_rounds = int(input())

    for _i in range(number_of_rounds):
        player1_score, player2_score = map(int, input().split())

        if player1_score > player2_score:
            leader = 1
            lead = player1_score - player2_score
        else:
            leader = 2
            lead = player2_score - player1_score
    
    print(leader, lead)

if __name__ == '__main__':
    main()