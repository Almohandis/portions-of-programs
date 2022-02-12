using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;
using Microsoft.Extensions.Logging;

namespace add_students.Pages
{
    public class IndexModel : PageModel
    {
        [BindProperty] public string name { get; set; }
        public string name2 { get; set; }
        
        public string welcome { get; set; }
        public void OnGet(string nn="er")
        {
            name2 = "any welcome!!";

            if (nn != "")
                welcome = "Hi " + nn;
            if(nn=="")
                welcome = "f";
            if (nn == "er")
                welcome = "k";
        }
        public void OnPost()
        {
            OnGet(name);
        }

    }

}
