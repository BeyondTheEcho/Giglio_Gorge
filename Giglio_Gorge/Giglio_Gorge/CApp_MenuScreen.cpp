#include "CApp.h"

/*void CApp::MenuScreen()
{
    bool quit = false;

    //Event handler
    SDL_Event e;

    //Set text color as black
    SDL_Color textColor = { 0, 0, 0, 0xFF };

    //The current input text.
    string inputText = "Some Text";
    InputTextTexture.loadFromRenderedText(inputText.c_str(), textColor);

    //Enable text input
    SDL_StartTextInput();

    while (!quit)
    {
        //The rerender text flag
        bool renderText = false;

        //Handle events on queue
        while (SDL_PollEvent(&e) != 0)
        {
            if (e.type == SDL_KEYDOWN)
            {
                //Handle backspace
                if (e.key.keysym.sym == SDLK_BACKSPACE && inputText.length() > 0)
                {
                    //lop off character
                    inputText.pop_back();
                    renderText = true;
                }
                //Handle copy
                else if (e.key.keysym.sym == SDLK_c && SDL_GetModState() & KMOD_CTRL)
                {
                    SDL_SetClipboardText(inputText.c_str());
                }
                //Handle paste
                else if (e.key.keysym.sym == SDLK_v && SDL_GetModState() & KMOD_CTRL)
                {
                    inputText = SDL_GetClipboardText();
                    renderText = true;
                }

                if (e.type == SDL_TEXTINPUT)
                {
                    //Not copy or pasting
                    if (!(SDL_GetModState() & KMOD_CTRL && (e.text.text[0] == 'c' || e.text.text[0] == 'C' || e.text.text[0] == 'v' || e.text.text[0] == 'V')))
                    {
                        //Append character
                        inputText += e.text.text;
                        renderText = true;
                    }
                }
            }
            
            if (renderText)
            {
                //Text is not empty
                if (inputText != "")
                {
                    //Render new text
                    gInputTextTexture.loadFromRenderedText(inputText.c_str(), textColor);
                }
                //Text is empty
                else
                {
                    //Render space texture
                    gInputTextTexture.loadFromRenderedText(" ", textColor);
                }
            }
            SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
            SDL_RenderClear(gRenderer);

            //Render text textures
            gPromptTextTexture.render((SCREEN_WIDTH - gPromptTextTexture.getWidth()) / 2, 0);
            gInputTextTexture.render((SCREEN_WIDTH - gInputTextTexture.getWidth()) / 2, gPromptTextTexture.getHeight());

            //Update screen
            SDL_RenderPresent(gRenderer);
        }
        SDL_StopTextInput();
    }
}*/