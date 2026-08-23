class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        groups = defaultdict(int)
        for email in emails : 
            local, domain = email.split("@")
            local = local.replace("." , "")
            local = local.split("+")[0]
            groups[local + "@" + domain] += 1 

        return len(groups)