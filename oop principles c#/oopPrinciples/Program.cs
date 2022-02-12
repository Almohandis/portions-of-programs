using System;

namespace oopPrinciples
{
    class MediaProduction
    {
        private void SaveFile() { }
        private void OpenFile() { }
        private void CreateProject() { }
        public enum Theme { Black, White, Blue, Purple };
        Theme theme;
        protected virtual void EditFrame() { Console.WriteLine("Edit video frame"); }
        protected virtual void AddFrame(Theme theme) { Console.WriteLine("Add voice frame"); }
        public void AutoEditFrame()
        {
            OpenFile();
            SaveFile();
            EditFrame();
            SaveFile();
        }
        public void AutoAddFrame(Theme theme)
        {
            OpenFile();
            CreateProject();
            SaveFile();
            AddFrame(theme);
            SaveFile();
        }

    }
    class VideoEditing:MediaProduction
    {
        protected override void AddFrame(Theme theme) { Console.WriteLine("Add video frame"); }
        public void AddVideo() { }
    }
    class VoiceEditing : MediaProduction
    {
        protected override void EditFrame() { Console.WriteLine("Edit voice frame"); }
        public void AddVoice() { }
    }
    class Program
    {
        static void Main(string[] args)
        {
            MediaProduction m1 = new VideoEditing();
            MediaProduction m2 = new MediaProduction();
        }
    }
}
