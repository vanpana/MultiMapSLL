# Bank Account and Transaction Management :fire::fire::fire:

<b>The problem</b><br>
Create an application used to store and manage a bank account database, each client having an unique ID. For every client, the application will store the dates in which the client made a transaction. The application must be able to add, remove and print all transactions for all the clients. Also, it must be able to check if a user had any transaction on a given date. 

Problem solved using a Multimap implemented using Singly Linked Lists alocated dinamically

# ADT Specification
o	Multimap = {m| m is a map with elements e = (k,v), where k ∈ TKey and v ∈ set on SLL} <br>
o	Set = S = {s|s is a set with elements of the type TElement} <br>
o	TKey -> each key has one single associated value and keys have to be unique. <br>
<b>The interface of TKey contains the following operations:</b>  <br>
•	assignment (k1 ← k2)  <br>
♣	pre: k1, k2 ∈ TKey <br>
♣	post: k′1 = k2  <br>
•	equality test (k1 = k2)  <br>
♣	pre: k1, k2 ∈ TKey <br>
♣	post: <br>
True, if k1 = k2 <br>
False, otherwise  <br>
	TElement -> the general element in containers <br>
The interface of TElem contains the following operations:  <br>
•	assignment (e1 ← e2)  <br>
♣	pre: e1, e2 ∈ TElement <br>
♣	post: e′1 = e2  <br>
•	equality test (e1 = e2)  <br>
♣	pre: e1, e2 ∈ TElement <br>
♣	post: <br>
True, if e1 = e2 <br>
False, otherwise <br>
o	Iterator = { it | it – iterator over Multimap } <br>

# ADT Interface
<b>Multimap</b> <br>
•	init(m): <br>
♣	descr: creates a new empty map <br>
♣	pre: True <br>
♣	post:  m∈M, m is an empty map <br>
•	destroy(m): <br>
♣	descr: destroys a map  <br>
♣	pre: m∈M <br>
♣	post: m was destroyed <br>
•	add(m,k,v): <br>
♣	descr: add a new key-value pair to the map (the operation can be called put as well) <br>
♣	pre: m ∈ M, k ∈ TKey, v ∈ set on SLL <br>
♣	post: m′ ∈ M,m′ = m ∪ < k,v >  <br>
•	remove(m,k,v): <br>
♣	descr: removes a pair with a given key from the map  <br>
♣	pre: m ∈ M, k ∈ TKey <br>
♣	post: v ∈ TValue <br>
v = v’, if ∃<k,v′ >∈m and m′ ∈M, m’ = m\<k,v’> <br>
  |0, otherwise <br>

•	search(m,k,v): <br>
♣	descr: searches for the value associated with a given key in the map <br>
♣	pre: m ∈ M, k ∈ TKey <br>
♣	post:  v ∈ Set on SLL <br>
v = v’, if∃<k,v′ >∈m  <br>
0, otherwise <br>

•	iterator(m, it ): <br>
♣	descr: returns an iterator for a map <br>
♣	pre: m ∈ M <br>
♣	post: it  Iterator, it – iterator over m <br>

•	size(m): <br>
♣	descr: returns the number of pairs from the map <br>
♣	pre: m ∈ M <br>
♣	post: size <- the number of pairs from m <br>

•	keys(m,s): <br>
♣	descr: returns the set of keys from the map <br>
♣	pre: m ∈ M <br>
♣	post: s ∈ S, s is the set of all keys from m <br>
•	values(m,b): <br>
♣	descr: returns a bag with all the values from the map <br>
♣	pre: m ∈ M <br>
♣	post: b ∈ B, b is the bag of all values from m <br>
•	 add(m,s): <br>
♣	descr: returns the set of pairs from the map <br>
♣	pre: m ∈ M <br>
♣	post: s ∈ S, s is the set of all pairs from m s <br>

<b>Iterator</b> <br>
•	init(m): <br>
♣	pre:        m  M <br>
♣	post:       it  Iterator , it – iterator over m pointing to ”first element” <br>
•	next(it): <br>
♣	pre:        it  Iterator, it is a valid iterator <br>
♣	post:       it′ - pointing to the next element <br>


•	valid( it ): <br>
♣	pre:        it  Iterator  <br>
♣	post:     <br>

valid(it) = True, if it valid <br>
False, otherwise <br>
•	getCurrent(it, v):<br>
♣	pre:        it  Iterator<br>
♣	post:       e(k,v)  Multimap, e – the current pair pointed by it<br>

# ADT Representation
<b>Multimap</b> (Implemented on a singly linked list with dynamic allocation) <br>
•	cap : Integer  <br>
•	k: TKey <br>
•	v: Set on SLL <br>
•	next: Integer[]  <br>
•	head: Integer  <br>

<b>Iterator</b> <br>
•	m : ↑Multimap<br>
•	currentPos : ↑TKey<br>

