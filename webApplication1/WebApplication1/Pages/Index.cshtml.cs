using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;
using Microsoft.Extensions.Logging;
using WebApplication1.ViewModels;
namespace WebApplication1.Pages
{
    public class IndexModel : PageModel
    {
        public IndexViewModel ViewModel { get; set; }
        public string Value { get; set; }
       [BindProperty (SupportsGet =true)] public string Name { get; set; }
        
        public void OnGet()
        {
            Value = "Hello c#".ToUpper();
        }
        public string Result { get; set; }
        [BindProperty ] public string name { get; set; }
        public void OnPost()
        {
            if (name == "abdo")
                Result = "true";
            else
                Result = "False";
            OnGet();
        }
    }
}
