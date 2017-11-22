//
// Created by László Molnár on 2017-11-15.
//

#ifndef CPP_LIGHTNING_FAST_WORD_FINDER_DOJO_LIGHTNINGWORDFINDER_HPP
#define CPP_LIGHTNING_FAST_WORD_FINDER_DOJO_LIGHTNINGWORDFINDER_HPP
class LightningWordFinder
{
public:
    std::string getLongestWord(const std::string& text)
    {
        std::string longestWord = "";
        std::string nextWordToCheck = "";
        char currentLetter;
        for(std::string::size_type i = 0; i < text.size(); ++i) {
            currentLetter = text[i];
            if(currentLetter <= 'z' && currentLetter >= 'A') {
                nextWordToCheck += currentLetter;

                if(nextWordToCheck.size() > longestWord.size()) {
                    longestWord = nextWordToCheck;
                }
            } else {
                nextWordToCheck = "";
            }
        }
        return longestWord;
    }
};
#endif //CPP_LIGHTNING_FAST_WORD_FINDER_DOJO_LIGHTNINGWORDFINDER_HPP
