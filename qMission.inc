#if defined _qMission_included_
#endinput
#endif
#define _qMission_included_

public SharedPlugin __pl_qMission =  {
	name = "qMission", 
	file = "qMission.smx", 
	#if defined REQUIRE_PLUGIN
	required = 1, 
	#else
	required = 0, 
	#endif
};


/**
 * Wywołuje się gdy gracz zakończy wszystkie misje z danej kategorii
 *
 * @param iClient			Identyfikator gracza
 * @param iCategory			ID Kategorii
 */
forward void OnQMissionFinishCategory(int iClient, int iCategory);


/**
 * Ilość pominięć misji
 *
 * @param iClient			Identyfikator gracza
 * @return					Zwraca aktualną ilość pominięć misji
 */
native int qmission_get_skip_mission(int iClient);

/**
 * Ustawianie pominięć misji
 *
 * @param iClient			Identyfikator gracza
 * @param iValue			Ilość pominieć
 * @return					Zwraca aktualną ilość pominięć
 */
native int qmission_set_skip_mission(int iClient, int iValue);