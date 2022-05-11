def mutate_string(string, position, character):
    # l=list(string)
    # l[position]=character
    # string=''.join(l)
    n=len(string)
    string=string[:position]+character+string[position+1:]
    return string