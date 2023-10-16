class Songs{
  string name;
  string artist;
  float duration;
  bool favorite;
  Songs * next;

  public:
  Songs();
};

Songs::Songs(string iname = "Among Us Beatbox Rap Battle", string iartist = "LilSussyFartBoi", float iduration = 694.20, bool ifavorite = true, Songs * inext = nullptr)
{
  name = iname;
  artist = iartist;
  duration = iduration;
  favorite = ifavorite;
  next = inext;
}
