class Account:
    def __init__(self,owner,balance):
        self.owner=owner
        self.balance=balance
    def deposit(self,depo):
        self.balance=self.balance+depo
        print("Deposit Accepted")
    def withdraw(self,withd):
        if withd<=self.balance:
            self.balance=self.balance-withd
            print("Withdrawal Accepted")
        else:
            print("Funds Unavailable!")
    def __str__(self):
        return f"Account owner: {self.owner} \nAccount balance: {self.balance}"

acct1 = Account('Jose',100)
print(acct1)
acct1.owner
acct1.balance
acct1.withdraw(50)
acct1.deposit(100)
acct1.balance
acct1.withdraw(500)
