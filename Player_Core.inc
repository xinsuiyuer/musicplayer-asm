;typedef DWORD OAFilterState;



;/* ��ȡ���������ַ���(ANSC)��ֻ�Ƿ�����ʾ */
Get_Length_StringA PROTO lpszLength:DWORD,sizeof_szLength_in_characters:DWORD

;/* ��ȡ���������ַ���(UniCode),�ڶ�������ΪszWLength�������ɵ��ַ�����*/
Get_Length_StringW PROTO lpWLength:DWORD,sizeof_szWLength_in_characters:DWORD


;/*��ȡ��ǰ��ʣ��ʱ��*/
GetCurrentAndRemainA PROTO  szCurrent:DWORD,sizeof_szCurrent_in_characters:DWORD,\
						szRemain:DWORD,sizeof_szRemain_in_characters:DWORD
												
GetCurrentAndRemainW PROTO  szWCurrent:DWORD,sizeof_szWCurrent_in_characters:DWORD,\
						 szWRemain:DWORD,sizeof_szWRemain_in_characters:DWORD



;/* ��ȡ��������,һ��Ϊ��λ */
;Get_Length(int *);
Get_Length PROTO llength:DWORD



;/* ���� */
Play_Music PROTO



;/* ��ͣ */
Pause_Music PROTO




;/* ֹͣ */
Stop_Music PROTO



;/*ָ�������ļ�*/
SpecifyMusicFileA PROTO szMusicFile:DWORD
SpecifyMusicFileW PROTO WszMusicFile:DWORD




;/* ���ò������� */
SetMusicRate PROTO dRate:Real8




;/*��������ƽ��(-10000~0~10000),0����������ƽ�⡣10000��������������-10000������������*/
SetPlayerBalance PROTO lBalance:DWORD




;/*��������(-10000~0),0Ϊ���-10000����*/
SetPlayerVolume PROTO lVolume:DWORD



;/*��ȡ����(-10000~0),0Ϊ���-10000����*/
;GetPlayerVolume(long *plVolume);
GetPlayerVolume PROTO plVolume:DWORD



;/*��ȡ��ǰ����λ��,����Ϊ��λ*/
;GetPlayerCurrentPosition(int *pCurrentPosition);
GetPlayerCurrentPosition PROTO pCurrentPosition:DWORD



;/*���ò���λ��,����Ϊ��λ*/ 
SetPlayerPosition PROTO newPosition:DWORD




;/*��ȡ��ǰ״̬
;typedef enum _FilterState
;{   
;    State_Stopped   = 0,
;    State_Paused    = State_Stopped + 1,
;    State_Running   = State_Paused + 1
;} FILTER_STATE;
;*/

;GetCurrentState(OAFilterState *pFilterState); 
GetCurrentState PROTO pFilterState:DWORD

IF      UNICODE
        
SpecifyMusicFile EQU <SpecifyMusicFileW>
Get_Length_String EQU <Get_Length_StringW>
GetCurrentAndRemain EQU <GetCurrentAndRemainW>
        
ELSE
        
SpecifyMusicFile EQU <SpecifyMusicFileA>
Get_Length_String EQU <Get_Length_StringA>    
GetCurrentAndRemain EQU <GetCurrentAndRemainA>    
ENDIF


