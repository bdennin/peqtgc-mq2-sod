#include <stdio.h>
#include "../MQ2Plugin.h"

#define KS(x)  printf("/* 0x%04x */ \n", &p->x)

main()
{
struct _CHARINFO *p = NULL;
KS(vtable1);
KS(punknown);
KS(charinfo_info);
KS(Unknown0xc);
KS(Bank);
KS(unknown0xd58);
KS(GuildID);
KS(Unknown0xe30);
KS(AAExp);
KS(Unknown0xe4c);
KS(PercentEXPtoAA);
KS(Unknown0xe4e);
KS(CareerFavor);
KS(Unknown0xe9c);
KS(CurrFavor);
KS(Unknown0xea4);
KS(GroupLeadershipExp);
KS(RaidLeadershipExp);
KS(GroupLeadershipPoints);
KS(RaidLeadershipPoints);
KS(Unknown0xec8);
KS(GroupMember);
KS(GroupLeader);
KS(Unknown0x1790);
KS(Exp);
KS(Unknown0x1a34);
KS(vtable2);
KS(eqc_info);
KS(pSpawn);
KS(Unknown0xeb84);
KS(Unknown0xeb88);
KS(CurrWeight);
KS(Unknown0xeb90);
KS(HPBonus);
KS(ManaBonus);
KS(EnduranceBonus);
KS(CombatEffectsBonus);
KS(ShieldingBonus);
KS(SpellShieldBonus);
KS(AvoidanceBonus);
KS(AccuracyBonus);
KS(StunResistBonus);
KS(StrikeThroughBonus);
KS(SkillMinDamageModBonus);
KS(Unknown0xebe0);
KS(DoTShieldBonus);
KS(AttackBonus);
KS(HPRegenBonus);
KS(ManaRegenBonus);
KS(Unknown0xebf4);
KS(DamageShieldBonus);
KS(AttackSpeed);
KS(Unknown0xec00);
KS(Unknown0xec04);
KS(ActiveGuildTribute);
KS(pCI2);
KS(Unknown0xecbc);
KS(languages);
KS(Unknown0xece0);
KS(Name);
KS(Lastname);
KS(Unknown0xed50);
KS(Stunned);
KS(Unknown0xedb1);
KS(zoneId);
KS(instance);
KS(standstate);
KS(Unknown0xedbc);
KS(BankSharedPlat);
KS(BankSharedGold);
KS(BankSharedSilver);
KS(BankSharedCopper);
KS(BankPlat);
KS(BankGold);
KS(BankSilver);
KS(BankCopper);
KS(STR);
KS(STA);
KS(CHA);
KS(DEX);
KS(INT);
KS(AGI);
KS(WIS);
KS(SavePoison);
KS(SaveMagic);
KS(SaveDisease);
KS(SaveFire);
KS(SaveCold);
KS(Unknown0xee30);
}
