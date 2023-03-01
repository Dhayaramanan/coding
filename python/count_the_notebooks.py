class NoteBooks:
    def __init__(self, kgs_of_pulp):
        self.kgs_of_pulp = kgs_of_pulp
    
    def count_notebooks(self):
        PAGES_PER_KG = 1000
        PAGES_PER_NOTE = 100

        total_pages_made = self.kgs_of_pulp * PAGES_PER_KG
        number_of_notebooks = total_pages_made // PAGES_PER_NOTE

        return number_of_notebooks

def main():
    kgs_of_pulp = int(input())
    note = NoteBooks(kgs_of_pulp)

    print(note.count_notebooks())

if __name__ == '__main__':
    main()