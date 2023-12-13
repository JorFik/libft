/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_str_manipulation.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:19:56 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/13 23:46:41 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STR_MANIPULATION_H
# define LIBFT_STR_MANIPULATION_H

// **----------------------------- FUNCTIONS ----------------------------- **//

//_RETURNS
//?		LENGTH OF STRING
//?		0	IF CHAR IS NULL
unsigned long	ft_strlen(const char *str);

//_RETURNS
//?		SRC SIZE
//?		0 IF SRC IS NULL
//_NOTES
//*	SETS TO 0 THE LAST BYTE OF DESTINATION
//_WARNINGS
//!	RETURNS INMIDIATELY IF DST_SIZE IS 0 OR NEGATIVE
//!	YOU NEED TO MAKE SURE WE CAN WRITE IN THE MEMORY SIZE GIVEN FOR DEST
unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dst_size);

//_RETURNS
//?		DEST SIZE + SRC SIZE
//_WARNINGS
//!	RETURNS INMIDIATELY DST IS ALREADY FILLED
//!	YOU NEED TO MAKE SURE WE CAN WRITE IN THE MEMORY SIZE GIVEN FOR DEST
unsigned long	ft_strlcat(char *dst, const char *src, unsigned long dst_size);

//_RETURNS
//?		INT FROM STR NUMBER 
//_NOTES
//*	HANDLES MULTIPLE BLANK CHARACTERS BEFORE NUMBER (ASCII 32, 9-13)
//_WARNINGS
//!	HANDLES ONLY ONE SIGN EITHER + OR -
//!	UNDIFINED BEHAVIOR IF STR IS NULL
int				ft_atoi(const char *str);

//_RETURNS
//?		ADDRESS OF NEW MEMORY ALLOCATED FILLED WITH SAME CONTENT AS SRC
//?		NULL IF MALLOC FAILS
//_WARNINGS
//!	UNDEFINED BEHEAVIOR IF SRC IS NULL
//!	THE MEMORY IS ALLOCATED DON'T FORGET TO FREE IT
char			*ft_strdup(const char *src);

//_DESCRIPTION
//?		CREATES A COPY OF THE SUBSTRING STARTING AT SRC[START] AND ENDING AT
//?		SRC[START + LEN] OR AT '\0'
//_RETURNS
//?		ADDRESS		IF SUCCESS
//?		NULL		IF MALLOC FAILS
//?		EMPTY STR	IF START IS OUTSIDE OF SRC
//_WARNINGS
//!		YOU NEED TO MAKE SURE WE CAN READ FROM SRC
//!		THE MEMORY IS ALLOCATED DON'T FORGET TO FREE IT
char			*ft_substr(char const *src, unsigned int start,
					unsigned long len);

//_DESCRIPTION
//?		CREATES A STRING WITH THE RESULT OF THE CONCATENATION OF S1 AND S2
//_RETURNS
//?		ADDRESS		IF SUCCESS
//?		NULL		IF MALLOC FAILS
//_NOTES
//*		DOES NOT FREE STR_1 NOR STR_2
//_WARNINGS
//!		THE MEMORY IS ALLOCATED DON'T FORGET TO FREE IT
char			*ft_strjoin(char const *str_1, char const *str_2);

//_DESCRIPTION
//?		CREATES A NEW STR FROM THE CONTENT OF SRC AFTER EREASING THE CHARACTERS
//?		SPECIFIED IN SET FROM THE BEGINNING AND END.
//_RETURNS
//?		ADDRESS		IF SUCCESS
//?		NULL		IF MALLOC FAILS
//_NOTES
//*		IF SRC IS NULL OR EMPTY RETURNS AN EMPTY STRING
//*		DOES NOT FREE SRC
//_WARNINGS
//!		THE MEMORY IS ALLOCATED DON'T FORGET TO FREE IT
char			*ft_strtrim(char const *src, char const *set);

//_DESCRIPTION
//?		SPLITS THE STRING SRC USING THE CHAR C AS A DELIMITER
//_RETURNS
//?		ADDRESS OF A POINTER TO A NEWLY ALLOCATED STRING ARRAY
//?		NULL IF MALLOC FAILS
//_NOTES
//*		DOES NOT FREE SRC
//_WARNINGS
//!		IS AN ARRAY OF STRINGS, DON'T FORGET TO FREE EACH STRING AND THE ARRAY
char			**ft_split(char *src, char c);

//_DESCRIPTION
//?		
//_RETURNS
//?		
//_NOTES
//*		
//_WARNINGS
//!		
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

//_DESCRIPTION
//?		
//_RETURNS
//?		
//_NOTES
//*		
//_WARNINGS
//!		
void			ft_striteri(char *s, void (*f)(unsigned int, char *));

//_--------------------------------------------------------------------------_//

#endif