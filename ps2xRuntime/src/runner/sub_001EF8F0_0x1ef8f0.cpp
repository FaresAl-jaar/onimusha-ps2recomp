#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EF8F0
// Address: 0x1ef8f0 - 0x1efef8
void sub_001EF8F0_0x1ef8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF8F0_0x1ef8f0");
#endif

    switch (ctx->pc) {
        case 0x1ef8f0u: goto label_1ef8f0;
        case 0x1ef8f4u: goto label_1ef8f4;
        case 0x1ef8f8u: goto label_1ef8f8;
        case 0x1ef8fcu: goto label_1ef8fc;
        case 0x1ef900u: goto label_1ef900;
        case 0x1ef904u: goto label_1ef904;
        case 0x1ef908u: goto label_1ef908;
        case 0x1ef90cu: goto label_1ef90c;
        case 0x1ef910u: goto label_1ef910;
        case 0x1ef914u: goto label_1ef914;
        case 0x1ef918u: goto label_1ef918;
        case 0x1ef91cu: goto label_1ef91c;
        case 0x1ef920u: goto label_1ef920;
        case 0x1ef924u: goto label_1ef924;
        case 0x1ef928u: goto label_1ef928;
        case 0x1ef92cu: goto label_1ef92c;
        case 0x1ef930u: goto label_1ef930;
        case 0x1ef934u: goto label_1ef934;
        case 0x1ef938u: goto label_1ef938;
        case 0x1ef93cu: goto label_1ef93c;
        case 0x1ef940u: goto label_1ef940;
        case 0x1ef944u: goto label_1ef944;
        case 0x1ef948u: goto label_1ef948;
        case 0x1ef94cu: goto label_1ef94c;
        case 0x1ef950u: goto label_1ef950;
        case 0x1ef954u: goto label_1ef954;
        case 0x1ef958u: goto label_1ef958;
        case 0x1ef95cu: goto label_1ef95c;
        case 0x1ef960u: goto label_1ef960;
        case 0x1ef964u: goto label_1ef964;
        case 0x1ef968u: goto label_1ef968;
        case 0x1ef96cu: goto label_1ef96c;
        case 0x1ef970u: goto label_1ef970;
        case 0x1ef974u: goto label_1ef974;
        case 0x1ef978u: goto label_1ef978;
        case 0x1ef97cu: goto label_1ef97c;
        case 0x1ef980u: goto label_1ef980;
        case 0x1ef984u: goto label_1ef984;
        case 0x1ef988u: goto label_1ef988;
        case 0x1ef98cu: goto label_1ef98c;
        case 0x1ef990u: goto label_1ef990;
        case 0x1ef994u: goto label_1ef994;
        case 0x1ef998u: goto label_1ef998;
        case 0x1ef99cu: goto label_1ef99c;
        case 0x1ef9a0u: goto label_1ef9a0;
        case 0x1ef9a4u: goto label_1ef9a4;
        case 0x1ef9a8u: goto label_1ef9a8;
        case 0x1ef9acu: goto label_1ef9ac;
        case 0x1ef9b0u: goto label_1ef9b0;
        case 0x1ef9b4u: goto label_1ef9b4;
        case 0x1ef9b8u: goto label_1ef9b8;
        case 0x1ef9bcu: goto label_1ef9bc;
        case 0x1ef9c0u: goto label_1ef9c0;
        case 0x1ef9c4u: goto label_1ef9c4;
        case 0x1ef9c8u: goto label_1ef9c8;
        case 0x1ef9ccu: goto label_1ef9cc;
        case 0x1ef9d0u: goto label_1ef9d0;
        case 0x1ef9d4u: goto label_1ef9d4;
        case 0x1ef9d8u: goto label_1ef9d8;
        case 0x1ef9dcu: goto label_1ef9dc;
        case 0x1ef9e0u: goto label_1ef9e0;
        case 0x1ef9e4u: goto label_1ef9e4;
        case 0x1ef9e8u: goto label_1ef9e8;
        case 0x1ef9ecu: goto label_1ef9ec;
        case 0x1ef9f0u: goto label_1ef9f0;
        case 0x1ef9f4u: goto label_1ef9f4;
        case 0x1ef9f8u: goto label_1ef9f8;
        case 0x1ef9fcu: goto label_1ef9fc;
        case 0x1efa00u: goto label_1efa00;
        case 0x1efa04u: goto label_1efa04;
        case 0x1efa08u: goto label_1efa08;
        case 0x1efa0cu: goto label_1efa0c;
        case 0x1efa10u: goto label_1efa10;
        case 0x1efa14u: goto label_1efa14;
        case 0x1efa18u: goto label_1efa18;
        case 0x1efa1cu: goto label_1efa1c;
        case 0x1efa20u: goto label_1efa20;
        case 0x1efa24u: goto label_1efa24;
        case 0x1efa28u: goto label_1efa28;
        case 0x1efa2cu: goto label_1efa2c;
        case 0x1efa30u: goto label_1efa30;
        case 0x1efa34u: goto label_1efa34;
        case 0x1efa38u: goto label_1efa38;
        case 0x1efa3cu: goto label_1efa3c;
        case 0x1efa40u: goto label_1efa40;
        case 0x1efa44u: goto label_1efa44;
        case 0x1efa48u: goto label_1efa48;
        case 0x1efa4cu: goto label_1efa4c;
        case 0x1efa50u: goto label_1efa50;
        case 0x1efa54u: goto label_1efa54;
        case 0x1efa58u: goto label_1efa58;
        case 0x1efa5cu: goto label_1efa5c;
        case 0x1efa60u: goto label_1efa60;
        case 0x1efa64u: goto label_1efa64;
        case 0x1efa68u: goto label_1efa68;
        case 0x1efa6cu: goto label_1efa6c;
        case 0x1efa70u: goto label_1efa70;
        case 0x1efa74u: goto label_1efa74;
        case 0x1efa78u: goto label_1efa78;
        case 0x1efa7cu: goto label_1efa7c;
        case 0x1efa80u: goto label_1efa80;
        case 0x1efa84u: goto label_1efa84;
        case 0x1efa88u: goto label_1efa88;
        case 0x1efa8cu: goto label_1efa8c;
        case 0x1efa90u: goto label_1efa90;
        case 0x1efa94u: goto label_1efa94;
        case 0x1efa98u: goto label_1efa98;
        case 0x1efa9cu: goto label_1efa9c;
        case 0x1efaa0u: goto label_1efaa0;
        case 0x1efaa4u: goto label_1efaa4;
        case 0x1efaa8u: goto label_1efaa8;
        case 0x1efaacu: goto label_1efaac;
        case 0x1efab0u: goto label_1efab0;
        case 0x1efab4u: goto label_1efab4;
        case 0x1efab8u: goto label_1efab8;
        case 0x1efabcu: goto label_1efabc;
        case 0x1efac0u: goto label_1efac0;
        case 0x1efac4u: goto label_1efac4;
        case 0x1efac8u: goto label_1efac8;
        case 0x1efaccu: goto label_1efacc;
        case 0x1efad0u: goto label_1efad0;
        case 0x1efad4u: goto label_1efad4;
        case 0x1efad8u: goto label_1efad8;
        case 0x1efadcu: goto label_1efadc;
        case 0x1efae0u: goto label_1efae0;
        case 0x1efae4u: goto label_1efae4;
        case 0x1efae8u: goto label_1efae8;
        case 0x1efaecu: goto label_1efaec;
        case 0x1efaf0u: goto label_1efaf0;
        case 0x1efaf4u: goto label_1efaf4;
        case 0x1efaf8u: goto label_1efaf8;
        case 0x1efafcu: goto label_1efafc;
        case 0x1efb00u: goto label_1efb00;
        case 0x1efb04u: goto label_1efb04;
        case 0x1efb08u: goto label_1efb08;
        case 0x1efb0cu: goto label_1efb0c;
        case 0x1efb10u: goto label_1efb10;
        case 0x1efb14u: goto label_1efb14;
        case 0x1efb18u: goto label_1efb18;
        case 0x1efb1cu: goto label_1efb1c;
        case 0x1efb20u: goto label_1efb20;
        case 0x1efb24u: goto label_1efb24;
        case 0x1efb28u: goto label_1efb28;
        case 0x1efb2cu: goto label_1efb2c;
        case 0x1efb30u: goto label_1efb30;
        case 0x1efb34u: goto label_1efb34;
        case 0x1efb38u: goto label_1efb38;
        case 0x1efb3cu: goto label_1efb3c;
        case 0x1efb40u: goto label_1efb40;
        case 0x1efb44u: goto label_1efb44;
        case 0x1efb48u: goto label_1efb48;
        case 0x1efb4cu: goto label_1efb4c;
        case 0x1efb50u: goto label_1efb50;
        case 0x1efb54u: goto label_1efb54;
        case 0x1efb58u: goto label_1efb58;
        case 0x1efb5cu: goto label_1efb5c;
        case 0x1efb60u: goto label_1efb60;
        case 0x1efb64u: goto label_1efb64;
        case 0x1efb68u: goto label_1efb68;
        case 0x1efb6cu: goto label_1efb6c;
        case 0x1efb70u: goto label_1efb70;
        case 0x1efb74u: goto label_1efb74;
        case 0x1efb78u: goto label_1efb78;
        case 0x1efb7cu: goto label_1efb7c;
        case 0x1efb80u: goto label_1efb80;
        case 0x1efb84u: goto label_1efb84;
        case 0x1efb88u: goto label_1efb88;
        case 0x1efb8cu: goto label_1efb8c;
        case 0x1efb90u: goto label_1efb90;
        case 0x1efb94u: goto label_1efb94;
        case 0x1efb98u: goto label_1efb98;
        case 0x1efb9cu: goto label_1efb9c;
        case 0x1efba0u: goto label_1efba0;
        case 0x1efba4u: goto label_1efba4;
        case 0x1efba8u: goto label_1efba8;
        case 0x1efbacu: goto label_1efbac;
        case 0x1efbb0u: goto label_1efbb0;
        case 0x1efbb4u: goto label_1efbb4;
        case 0x1efbb8u: goto label_1efbb8;
        case 0x1efbbcu: goto label_1efbbc;
        case 0x1efbc0u: goto label_1efbc0;
        case 0x1efbc4u: goto label_1efbc4;
        case 0x1efbc8u: goto label_1efbc8;
        case 0x1efbccu: goto label_1efbcc;
        case 0x1efbd0u: goto label_1efbd0;
        case 0x1efbd4u: goto label_1efbd4;
        case 0x1efbd8u: goto label_1efbd8;
        case 0x1efbdcu: goto label_1efbdc;
        case 0x1efbe0u: goto label_1efbe0;
        case 0x1efbe4u: goto label_1efbe4;
        case 0x1efbe8u: goto label_1efbe8;
        case 0x1efbecu: goto label_1efbec;
        case 0x1efbf0u: goto label_1efbf0;
        case 0x1efbf4u: goto label_1efbf4;
        case 0x1efbf8u: goto label_1efbf8;
        case 0x1efbfcu: goto label_1efbfc;
        case 0x1efc00u: goto label_1efc00;
        case 0x1efc04u: goto label_1efc04;
        case 0x1efc08u: goto label_1efc08;
        case 0x1efc0cu: goto label_1efc0c;
        case 0x1efc10u: goto label_1efc10;
        case 0x1efc14u: goto label_1efc14;
        case 0x1efc18u: goto label_1efc18;
        case 0x1efc1cu: goto label_1efc1c;
        case 0x1efc20u: goto label_1efc20;
        case 0x1efc24u: goto label_1efc24;
        case 0x1efc28u: goto label_1efc28;
        case 0x1efc2cu: goto label_1efc2c;
        case 0x1efc30u: goto label_1efc30;
        case 0x1efc34u: goto label_1efc34;
        case 0x1efc38u: goto label_1efc38;
        case 0x1efc3cu: goto label_1efc3c;
        case 0x1efc40u: goto label_1efc40;
        case 0x1efc44u: goto label_1efc44;
        case 0x1efc48u: goto label_1efc48;
        case 0x1efc4cu: goto label_1efc4c;
        case 0x1efc50u: goto label_1efc50;
        case 0x1efc54u: goto label_1efc54;
        case 0x1efc58u: goto label_1efc58;
        case 0x1efc5cu: goto label_1efc5c;
        case 0x1efc60u: goto label_1efc60;
        case 0x1efc64u: goto label_1efc64;
        case 0x1efc68u: goto label_1efc68;
        case 0x1efc6cu: goto label_1efc6c;
        case 0x1efc70u: goto label_1efc70;
        case 0x1efc74u: goto label_1efc74;
        case 0x1efc78u: goto label_1efc78;
        case 0x1efc7cu: goto label_1efc7c;
        case 0x1efc80u: goto label_1efc80;
        case 0x1efc84u: goto label_1efc84;
        case 0x1efc88u: goto label_1efc88;
        case 0x1efc8cu: goto label_1efc8c;
        case 0x1efc90u: goto label_1efc90;
        case 0x1efc94u: goto label_1efc94;
        case 0x1efc98u: goto label_1efc98;
        case 0x1efc9cu: goto label_1efc9c;
        case 0x1efca0u: goto label_1efca0;
        case 0x1efca4u: goto label_1efca4;
        case 0x1efca8u: goto label_1efca8;
        case 0x1efcacu: goto label_1efcac;
        case 0x1efcb0u: goto label_1efcb0;
        case 0x1efcb4u: goto label_1efcb4;
        case 0x1efcb8u: goto label_1efcb8;
        case 0x1efcbcu: goto label_1efcbc;
        case 0x1efcc0u: goto label_1efcc0;
        case 0x1efcc4u: goto label_1efcc4;
        case 0x1efcc8u: goto label_1efcc8;
        case 0x1efcccu: goto label_1efccc;
        case 0x1efcd0u: goto label_1efcd0;
        case 0x1efcd4u: goto label_1efcd4;
        case 0x1efcd8u: goto label_1efcd8;
        case 0x1efcdcu: goto label_1efcdc;
        case 0x1efce0u: goto label_1efce0;
        case 0x1efce4u: goto label_1efce4;
        case 0x1efce8u: goto label_1efce8;
        case 0x1efcecu: goto label_1efcec;
        case 0x1efcf0u: goto label_1efcf0;
        case 0x1efcf4u: goto label_1efcf4;
        case 0x1efcf8u: goto label_1efcf8;
        case 0x1efcfcu: goto label_1efcfc;
        case 0x1efd00u: goto label_1efd00;
        case 0x1efd04u: goto label_1efd04;
        case 0x1efd08u: goto label_1efd08;
        case 0x1efd0cu: goto label_1efd0c;
        case 0x1efd10u: goto label_1efd10;
        case 0x1efd14u: goto label_1efd14;
        case 0x1efd18u: goto label_1efd18;
        case 0x1efd1cu: goto label_1efd1c;
        case 0x1efd20u: goto label_1efd20;
        case 0x1efd24u: goto label_1efd24;
        case 0x1efd28u: goto label_1efd28;
        case 0x1efd2cu: goto label_1efd2c;
        case 0x1efd30u: goto label_1efd30;
        case 0x1efd34u: goto label_1efd34;
        case 0x1efd38u: goto label_1efd38;
        case 0x1efd3cu: goto label_1efd3c;
        case 0x1efd40u: goto label_1efd40;
        case 0x1efd44u: goto label_1efd44;
        case 0x1efd48u: goto label_1efd48;
        case 0x1efd4cu: goto label_1efd4c;
        case 0x1efd50u: goto label_1efd50;
        case 0x1efd54u: goto label_1efd54;
        case 0x1efd58u: goto label_1efd58;
        case 0x1efd5cu: goto label_1efd5c;
        case 0x1efd60u: goto label_1efd60;
        case 0x1efd64u: goto label_1efd64;
        case 0x1efd68u: goto label_1efd68;
        case 0x1efd6cu: goto label_1efd6c;
        case 0x1efd70u: goto label_1efd70;
        case 0x1efd74u: goto label_1efd74;
        case 0x1efd78u: goto label_1efd78;
        case 0x1efd7cu: goto label_1efd7c;
        case 0x1efd80u: goto label_1efd80;
        case 0x1efd84u: goto label_1efd84;
        case 0x1efd88u: goto label_1efd88;
        case 0x1efd8cu: goto label_1efd8c;
        case 0x1efd90u: goto label_1efd90;
        case 0x1efd94u: goto label_1efd94;
        case 0x1efd98u: goto label_1efd98;
        case 0x1efd9cu: goto label_1efd9c;
        case 0x1efda0u: goto label_1efda0;
        case 0x1efda4u: goto label_1efda4;
        case 0x1efda8u: goto label_1efda8;
        case 0x1efdacu: goto label_1efdac;
        case 0x1efdb0u: goto label_1efdb0;
        case 0x1efdb4u: goto label_1efdb4;
        case 0x1efdb8u: goto label_1efdb8;
        case 0x1efdbcu: goto label_1efdbc;
        case 0x1efdc0u: goto label_1efdc0;
        case 0x1efdc4u: goto label_1efdc4;
        case 0x1efdc8u: goto label_1efdc8;
        case 0x1efdccu: goto label_1efdcc;
        case 0x1efdd0u: goto label_1efdd0;
        case 0x1efdd4u: goto label_1efdd4;
        case 0x1efdd8u: goto label_1efdd8;
        case 0x1efddcu: goto label_1efddc;
        case 0x1efde0u: goto label_1efde0;
        case 0x1efde4u: goto label_1efde4;
        case 0x1efde8u: goto label_1efde8;
        case 0x1efdecu: goto label_1efdec;
        case 0x1efdf0u: goto label_1efdf0;
        case 0x1efdf4u: goto label_1efdf4;
        case 0x1efdf8u: goto label_1efdf8;
        case 0x1efdfcu: goto label_1efdfc;
        case 0x1efe00u: goto label_1efe00;
        case 0x1efe04u: goto label_1efe04;
        case 0x1efe08u: goto label_1efe08;
        case 0x1efe0cu: goto label_1efe0c;
        case 0x1efe10u: goto label_1efe10;
        case 0x1efe14u: goto label_1efe14;
        case 0x1efe18u: goto label_1efe18;
        case 0x1efe1cu: goto label_1efe1c;
        case 0x1efe20u: goto label_1efe20;
        case 0x1efe24u: goto label_1efe24;
        case 0x1efe28u: goto label_1efe28;
        case 0x1efe2cu: goto label_1efe2c;
        case 0x1efe30u: goto label_1efe30;
        case 0x1efe34u: goto label_1efe34;
        case 0x1efe38u: goto label_1efe38;
        case 0x1efe3cu: goto label_1efe3c;
        case 0x1efe40u: goto label_1efe40;
        case 0x1efe44u: goto label_1efe44;
        case 0x1efe48u: goto label_1efe48;
        case 0x1efe4cu: goto label_1efe4c;
        case 0x1efe50u: goto label_1efe50;
        case 0x1efe54u: goto label_1efe54;
        case 0x1efe58u: goto label_1efe58;
        case 0x1efe5cu: goto label_1efe5c;
        case 0x1efe60u: goto label_1efe60;
        case 0x1efe64u: goto label_1efe64;
        case 0x1efe68u: goto label_1efe68;
        case 0x1efe6cu: goto label_1efe6c;
        case 0x1efe70u: goto label_1efe70;
        case 0x1efe74u: goto label_1efe74;
        case 0x1efe78u: goto label_1efe78;
        case 0x1efe7cu: goto label_1efe7c;
        case 0x1efe80u: goto label_1efe80;
        case 0x1efe84u: goto label_1efe84;
        case 0x1efe88u: goto label_1efe88;
        case 0x1efe8cu: goto label_1efe8c;
        case 0x1efe90u: goto label_1efe90;
        case 0x1efe94u: goto label_1efe94;
        case 0x1efe98u: goto label_1efe98;
        case 0x1efe9cu: goto label_1efe9c;
        case 0x1efea0u: goto label_1efea0;
        case 0x1efea4u: goto label_1efea4;
        case 0x1efea8u: goto label_1efea8;
        case 0x1efeacu: goto label_1efeac;
        case 0x1efeb0u: goto label_1efeb0;
        case 0x1efeb4u: goto label_1efeb4;
        case 0x1efeb8u: goto label_1efeb8;
        case 0x1efebcu: goto label_1efebc;
        case 0x1efec0u: goto label_1efec0;
        case 0x1efec4u: goto label_1efec4;
        case 0x1efec8u: goto label_1efec8;
        case 0x1efeccu: goto label_1efecc;
        case 0x1efed0u: goto label_1efed0;
        case 0x1efed4u: goto label_1efed4;
        case 0x1efed8u: goto label_1efed8;
        case 0x1efedcu: goto label_1efedc;
        case 0x1efee0u: goto label_1efee0;
        case 0x1efee4u: goto label_1efee4;
        case 0x1efee8u: goto label_1efee8;
        case 0x1efeecu: goto label_1efeec;
        case 0x1efef0u: goto label_1efef0;
        case 0x1efef4u: goto label_1efef4;
        default: break;
    }

    ctx->pc = 0x1ef8f0u;

label_1ef8f0:
    // 0x1ef8f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ef8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1ef8f4:
    // 0x1ef8f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ef8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1ef8f8:
    // 0x1ef8f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1ef8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1ef8fc:
    // 0x1ef8fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ef8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1ef900:
    // 0x1ef900: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ef900u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ef904:
    // 0x1ef904: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ef904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1ef908:
    // 0x1ef908: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ef908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1ef90c:
    // 0x1ef90c: 0x30d200ff  andi        $s2, $a2, 0xFF
    ctx->pc = 0x1ef90cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1ef910:
    // 0x1ef910: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ef910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ef914:
    // 0x1ef914: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ef914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ef918:
    // 0x1ef918: 0x1640000f  bnez        $s2, . + 4 + (0xF << 2)
label_1ef91c:
    if (ctx->pc == 0x1EF91Cu) {
        ctx->pc = 0x1EF91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF918u;
        // 0x1ef91c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF920u;
        goto label_1ef920;
    }
    ctx->pc = 0x1EF918u;
    {
        const bool branch_taken_0x1ef918 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF918u;
        // 0x1ef91c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef918) {
            ctx->pc = 0x1EF958u;
            goto label_1ef958;
        }
    }
    ctx->pc = 0x1EF920u;
label_1ef920:
    // 0x1ef920: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ef920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ef924:
    // 0x1ef924: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1ef924u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1ef928:
    // 0x1ef928: 0x8c24a3c8  lw          $a0, -0x5C38($at)
    ctx->pc = 0x1ef928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943688)));
label_1ef92c:
    // 0x1ef92c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1ef930:
    if (ctx->pc == 0x1EF930u) {
        ctx->pc = 0x1EF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF92Cu;
        // 0x1ef930: 0x328500ff  andi        $a1, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF934u;
        goto label_1ef934;
    }
    ctx->pc = 0x1EF92Cu;
    {
        const bool branch_taken_0x1ef92c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF92Cu;
        // 0x1ef930: 0x328500ff  andi        $a1, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef92c) {
            ctx->pc = 0x1EF958u;
            goto label_1ef958;
        }
    }
    ctx->pc = 0x1EF934u;
label_1ef934:
    // 0x1ef934: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1ef934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1ef938:
    // 0x1ef938: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1ef938u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1ef93c:
    // 0x1ef93c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ef93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1ef940:
    // 0x1ef940: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x1ef940u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1ef944:
    // 0x1ef944: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
label_1ef948:
    if (ctx->pc == 0x1EF948u) {
        ctx->pc = 0x1EF948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF944u;
        // 0x1ef948: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF94Cu;
        goto label_1ef94c;
    }
    ctx->pc = 0x1EF944u;
    {
        const bool branch_taken_0x1ef944 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EF948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF944u;
        // 0x1ef948: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef944) {
            ctx->pc = 0x1EF958u;
            goto label_1ef958;
        }
    }
    ctx->pc = 0x1EF94Cu;
label_1ef94c:
    // 0x1ef94c: 0x90900001  lbu         $s0, 0x1($a0)
    ctx->pc = 0x1ef94cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1ef950:
    // 0x1ef950: 0x90880002  lbu         $t0, 0x2($a0)
    ctx->pc = 0x1ef950u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1ef954:
    // 0x1ef954: 0x0  nop
    ctx->pc = 0x1ef954u;
    // NOP
label_1ef958:
    // 0x1ef958: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1ef958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ef95c:
    // 0x1ef95c: 0x12430012  beq         $s2, $v1, . + 4 + (0x12 << 2)
label_1ef960:
    if (ctx->pc == 0x1EF960u) {
        ctx->pc = 0x1EF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF95Cu;
        // 0x1ef960: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF964u;
        goto label_1ef964;
    }
    ctx->pc = 0x1EF95Cu;
    {
        const bool branch_taken_0x1ef95c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF95Cu;
        // 0x1ef960: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef95c) {
            ctx->pc = 0x1EF9A8u;
            goto label_1ef9a8;
        }
    }
    ctx->pc = 0x1EF964u;
label_1ef964:
    // 0x1ef964: 0x12430004  beq         $s2, $v1, . + 4 + (0x4 << 2)
label_1ef968:
    if (ctx->pc == 0x1EF968u) {
        ctx->pc = 0x1EF96Cu;
        goto label_1ef96c;
    }
    ctx->pc = 0x1EF964u;
    {
        const bool branch_taken_0x1ef964 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ef964) {
            ctx->pc = 0x1EF978u;
            goto label_1ef978;
        }
    }
    ctx->pc = 0x1EF96Cu;
label_1ef96c:
    // 0x1ef96c: 0x10000086  b           . + 4 + (0x86 << 2)
label_1ef970:
    if (ctx->pc == 0x1EF970u) {
        ctx->pc = 0x1EF974u;
        goto label_1ef974;
    }
    ctx->pc = 0x1EF96Cu;
    {
        const bool branch_taken_0x1ef96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef96c) {
            ctx->pc = 0x1EFB88u;
            goto label_1efb88;
        }
    }
    ctx->pc = 0x1EF974u;
label_1ef974:
    // 0x1ef974: 0x0  nop
    ctx->pc = 0x1ef974u;
    // NOP
label_1ef978:
    // 0x1ef978: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x1ef978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1ef97c:
    // 0x1ef97c: 0x240414c0  addiu       $a0, $zero, 0x14C0
    ctx->pc = 0x1ef97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5312));
label_1ef980:
    // 0x1ef980: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x1ef980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_1ef984:
    // 0x1ef984: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x1ef984u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1ef988:
    // 0x1ef988: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ef988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ef98c:
    // 0x1ef98c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1ef98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1ef990:
    // 0x1ef990: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x1ef990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
label_1ef994:
    // 0x1ef994: 0x24841550  addiu       $a0, $a0, 0x1550
    ctx->pc = 0x1ef994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5456));
label_1ef998:
    // 0x1ef998: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ef998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1ef99c:
    // 0x1ef99c: 0x1000014e  b           . + 4 + (0x14E << 2)
label_1ef9a0:
    if (ctx->pc == 0x1EF9A0u) {
        ctx->pc = 0x1EF9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF99Cu;
        // 0x1ef9a0: 0xac640080  sw          $a0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF9A4u;
        goto label_1ef9a4;
    }
    ctx->pc = 0x1EF99Cu;
    {
        const bool branch_taken_0x1ef99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF99Cu;
        // 0x1ef9a0: 0xac640080  sw          $a0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef99c) {
            ctx->pc = 0x1EFED8u;
            goto label_1efed8;
        }
    }
    ctx->pc = 0x1EF9A4u;
label_1ef9a4:
    // 0x1ef9a4: 0x0  nop
    ctx->pc = 0x1ef9a4u;
    // NOP
label_1ef9a8:
    // 0x1ef9a8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ef9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ef9ac:
    // 0x1ef9ac: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1ef9acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1ef9b0:
    // 0x1ef9b0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1ef9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ef9b4:
    // 0x1ef9b4: 0x9425a3c4  lhu         $a1, -0x5C3C($at)
    ctx->pc = 0x1ef9b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943684)));
label_1ef9b8:
    // 0x1ef9b8: 0x10a30147  beq         $a1, $v1, . + 4 + (0x147 << 2)
label_1ef9bc:
    if (ctx->pc == 0x1EF9BCu) {
        ctx->pc = 0x1EF9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9B8u;
        // 0x1ef9bc: 0x54e3c  dsll32      $t1, $a1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF9C0u;
        goto label_1ef9c0;
    }
    ctx->pc = 0x1EF9B8u;
    {
        const bool branch_taken_0x1ef9b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EF9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9B8u;
        // 0x1ef9bc: 0x54e3c  dsll32      $t1, $a1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9b8) {
            ctx->pc = 0x1EFED8u;
            goto label_1efed8;
        }
    }
    ctx->pc = 0x1EF9C0u;
label_1ef9c0:
    // 0x1ef9c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ef9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ef9c4:
    // 0x1ef9c4: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1ef9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ef9c8:
    // 0x1ef9c8: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x1ef9c8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
label_1ef9cc:
    // 0x1ef9cc: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x1ef9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1ef9d0:
    // 0x1ef9d0: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1ef9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1ef9d4:
    // 0x1ef9d4: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1ef9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1ef9d8:
    // 0x1ef9d8: 0xa423a3c4  sh          $v1, -0x5C3C($at)
    ctx->pc = 0x1ef9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943684), (uint16_t)GPR_U32(ctx, 3));
label_1ef9dc:
    // 0x1ef9dc: 0x538c0  sll         $a3, $a1, 3
    ctx->pc = 0x1ef9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1ef9e0:
    // 0x1ef9e0: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x1ef9e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_1ef9e4:
    // 0x1ef9e4: 0xe95023  subu        $t2, $a3, $t1
    ctx->pc = 0x1ef9e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_1ef9e8:
    // 0x1ef9e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ef9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ef9ec:
    // 0x1ef9ec: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x1ef9ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1ef9f0:
    // 0x1ef9f0: 0x1312821  addu        $a1, $t1, $s1
    ctx->pc = 0x1ef9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
label_1ef9f4:
    // 0x1ef9f4: 0x3401a380  ori         $at, $zero, 0xA380
    ctx->pc = 0x1ef9f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41856);
label_1ef9f8:
    // 0x1ef9f8: 0x22a5021  addu        $t2, $s1, $t2
    ctx->pc = 0x1ef9f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
label_1ef9fc:
    // 0x1ef9fc: 0xa13821  addu        $a3, $a1, $at
    ctx->pc = 0x1ef9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_1efa00:
    // 0x1efa00: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1efa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1efa04:
    // 0x1efa04: 0x254a0700  addiu       $t2, $t2, 0x700
    ctx->pc = 0x1efa04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1792));
label_1efa08:
    // 0x1efa08: 0x3401a3a0  ori         $at, $zero, 0xA3A0
    ctx->pc = 0x1efa08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41888);
label_1efa0c:
    // 0x1efa0c: 0xac6a0080  sw          $t2, 0x80($v1)
    ctx->pc = 0x1efa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 10));
label_1efa10:
    // 0x1efa10: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1efa10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1efa14:
    // 0x1efa14: 0xa12821  addu        $a1, $a1, $at
    ctx->pc = 0x1efa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_1efa18:
    // 0x1efa18: 0xa0eb0000  sb          $t3, 0x0($a3)
    ctx->pc = 0x1efa18u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 11));
label_1efa1c:
    // 0x1efa1c: 0xa0ab0000  sb          $t3, 0x0($a1)
    ctx->pc = 0x1efa1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 11));
label_1efa20:
    // 0x1efa20: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efa20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1efa24:
    // 0x1efa24: 0x8c6b0080  lw          $t3, 0x80($v1)
    ctx->pc = 0x1efa24u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_1efa28:
    // 0x1efa28: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x1efa28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1efa2c:
    // 0x1efa2c: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x1efa2cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
label_1efa30:
    // 0x1efa30: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1efa30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1efa34:
    // 0x1efa34: 0xa5600030  sh          $zero, 0x30($t3)
    ctx->pc = 0x1efa34u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 48), (uint16_t)GPR_U32(ctx, 0));
label_1efa38:
    // 0x1efa38: 0x8c6b0080  lw          $t3, 0x80($v1)
    ctx->pc = 0x1efa38u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_1efa3c:
    // 0x1efa3c: 0xa16c0000  sb          $t4, 0x0($t3)
    ctx->pc = 0x1efa3cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 12));
label_1efa40:
    // 0x1efa40: 0x8c6b0080  lw          $t3, 0x80($v1)
    ctx->pc = 0x1efa40u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_1efa44:
    // 0x1efa44: 0xa1660001  sb          $a2, 0x1($t3)
    ctx->pc = 0x1efa44u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 6));
label_1efa48:
    // 0x1efa48: 0x8c660080  lw          $a2, 0x80($v1)
    ctx->pc = 0x1efa48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_1efa4c:
    // 0x1efa4c: 0xa0d00002  sb          $s0, 0x2($a2)
    ctx->pc = 0x1efa4cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 16));
label_1efa50:
    // 0x1efa50: 0x8c660080  lw          $a2, 0x80($v1)
    ctx->pc = 0x1efa50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_1efa54:
    // 0x1efa54: 0xa0c80003  sb          $t0, 0x3($a2)
    ctx->pc = 0x1efa54u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 8));
label_1efa58:
    // 0x1efa58: 0x8c660080  lw          $a2, 0x80($v1)
    ctx->pc = 0x1efa58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_1efa5c:
    // 0x1efa5c: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x1efa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
label_1efa60:
    // 0x1efa60: 0x8c660080  lw          $a2, 0x80($v1)
    ctx->pc = 0x1efa60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_1efa64:
    // 0x1efa64: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x1efa64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
label_1efa68:
    // 0x1efa68: 0x8c660080  lw          $a2, 0x80($v1)
    ctx->pc = 0x1efa68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_1efa6c:
    // 0x1efa6c: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x1efa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
label_1efa70:
    // 0x1efa70: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x1efa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_1efa74:
    // 0x1efa74: 0xac6a002c  sw          $t2, 0x2C($v1)
    ctx->pc = 0x1efa74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 10));
label_1efa78:
    // 0x1efa78: 0x8c23a3c8  lw          $v1, -0x5C38($at)
    ctx->pc = 0x1efa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943688)));
label_1efa7c:
    // 0x1efa7c: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_1efa80:
    if (ctx->pc == 0x1EFA80u) {
        ctx->pc = 0x1EFA84u;
        goto label_1efa84;
    }
    ctx->pc = 0x1EFA7Cu;
    {
        const bool branch_taken_0x1efa7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efa7c) {
            ctx->pc = 0x1EFB70u;
            goto label_1efb70;
        }
    }
    ctx->pc = 0x1EFA84u;
label_1efa84:
    // 0x1efa84: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x1efa84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1efa88:
    // 0x1efa88: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1efa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1efa8c:
    // 0x1efa8c: 0x8068000a  lb          $t0, 0xA($v1)
    ctx->pc = 0x1efa8cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
label_1efa90:
    // 0x1efa90: 0x5000007  bltz        $t0, . + 4 + (0x7 << 2)
label_1efa94:
    if (ctx->pc == 0x1EFA94u) {
        ctx->pc = 0x1EFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA90u;
        // 0x1efa94: 0x80660003  lb          $a2, 0x3($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFA98u;
        goto label_1efa98;
    }
    ctx->pc = 0x1EFA90u;
    {
        const bool branch_taken_0x1efa90 = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x1EFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA90u;
        // 0x1efa94: 0x80660003  lb          $a2, 0x3($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa90) {
            ctx->pc = 0x1EFAB0u;
            goto label_1efab0;
        }
    }
    ctx->pc = 0x1EFA98u;
label_1efa98:
    // 0x1efa98: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x1efa98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
label_1efa9c:
    // 0x1efa9c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1efa9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1efaa0:
    // 0x1efaa0: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
label_1efaa4:
    if (ctx->pc == 0x1EFAA4u) {
        ctx->pc = 0x1EFAA8u;
        goto label_1efaa8;
    }
    ctx->pc = 0x1EFAA0u;
    {
        const bool branch_taken_0x1efaa0 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x1efaa0) {
            ctx->pc = 0x1EFAB0u;
            goto label_1efab0;
        }
    }
    ctx->pc = 0x1EFAA8u;
label_1efaa8:
    // 0x1efaa8: 0xa0e80000  sb          $t0, 0x0($a3)
    ctx->pc = 0x1efaa8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 8));
label_1efaac:
    // 0x1efaac: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x1efaacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
label_1efab0:
    // 0x1efab0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1efab4:
    // 0x1efab4: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1efab4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1efab8:
    // 0x1efab8: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x1efab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1efabc:
    // 0x1efabc: 0x8c26a3c8  lw          $a2, -0x5C38($at)
    ctx->pc = 0x1efabcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943688)));
label_1efac0:
    // 0x1efac0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1efac0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1efac4:
    // 0x1efac4: 0x913821  addu        $a3, $a0, $s1
    ctx->pc = 0x1efac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1efac8:
    // 0x1efac8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1efac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1efacc:
    // 0x1efacc: 0x8ce40080  lw          $a0, 0x80($a3)
    ctx->pc = 0x1efaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
label_1efad0:
    // 0x1efad0: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1efad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1efad4:
    // 0x1efad4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1efad8:
    // 0x1efad8: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x1efad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1efadc:
    // 0x1efadc: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1efadcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1efae0:
    // 0x1efae0: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1efae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_1efae4:
    // 0x1efae4: 0x8c26a3c8  lw          $a2, -0x5C38($at)
    ctx->pc = 0x1efae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943688)));
label_1efae8:
    // 0x1efae8: 0x8ce40080  lw          $a0, 0x80($a3)
    ctx->pc = 0x1efae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
label_1efaec:
    // 0x1efaec: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1efaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1efaf0:
    // 0x1efaf0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1efaf4:
    // 0x1efaf4: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x1efaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1efaf8:
    // 0x1efaf8: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1efaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1efafc:
    // 0x1efafc: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1efafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_1efb00:
    // 0x1efb00: 0x8c26a3c8  lw          $a2, -0x5C38($at)
    ctx->pc = 0x1efb00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943688)));
label_1efb04:
    // 0x1efb04: 0x8ce40080  lw          $a0, 0x80($a3)
    ctx->pc = 0x1efb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
label_1efb08:
    // 0x1efb08: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1efb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1efb0c:
    // 0x1efb0c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1efb10:
    // 0x1efb10: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x1efb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1efb14:
    // 0x1efb14: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1efb14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1efb18:
    // 0x1efb18: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1efb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_1efb1c:
    // 0x1efb1c: 0x8ce40080  lw          $a0, 0x80($a3)
    ctx->pc = 0x1efb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
label_1efb20:
    // 0x1efb20: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x1efb20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
label_1efb24:
    // 0x1efb24: 0x8c25a3c8  lw          $a1, -0x5C38($at)
    ctx->pc = 0x1efb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943688)));
label_1efb28:
    // 0x1efb28: 0x8ce40080  lw          $a0, 0x80($a3)
    ctx->pc = 0x1efb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
label_1efb2c:
    // 0x1efb2c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1efb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1efb30:
    // 0x1efb30: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1efb34:
    // 0x1efb34: 0x84a50004  lh          $a1, 0x4($a1)
    ctx->pc = 0x1efb34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_1efb38:
    // 0x1efb38: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1efb38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1efb3c:
    // 0x1efb3c: 0xa48500c0  sh          $a1, 0xC0($a0)
    ctx->pc = 0x1efb3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 192), (uint16_t)GPR_U32(ctx, 5));
label_1efb40:
    // 0x1efb40: 0x8c25a3c8  lw          $a1, -0x5C38($at)
    ctx->pc = 0x1efb40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943688)));
label_1efb44:
    // 0x1efb44: 0x8ce40080  lw          $a0, 0x80($a3)
    ctx->pc = 0x1efb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
label_1efb48:
    // 0x1efb48: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1efb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1efb4c:
    // 0x1efb4c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1efb50:
    // 0x1efb50: 0x84a50006  lh          $a1, 0x6($a1)
    ctx->pc = 0x1efb50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_1efb54:
    // 0x1efb54: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1efb54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1efb58:
    // 0x1efb58: 0xa48500c2  sh          $a1, 0xC2($a0)
    ctx->pc = 0x1efb58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 194), (uint16_t)GPR_U32(ctx, 5));
label_1efb5c:
    // 0x1efb5c: 0x8c25a3c8  lw          $a1, -0x5C38($at)
    ctx->pc = 0x1efb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943688)));
label_1efb60:
    // 0x1efb60: 0x8ce40080  lw          $a0, 0x80($a3)
    ctx->pc = 0x1efb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
label_1efb64:
    // 0x1efb64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1efb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1efb68:
    // 0x1efb68: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x1efb68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1efb6c:
    // 0x1efb6c: 0xa48300c4  sh          $v1, 0xC4($a0)
    ctx->pc = 0x1efb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 3));
label_1efb70:
    // 0x1efb70: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x1efb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1efb74:
    // 0x1efb74: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1efb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1efb78:
    // 0x1efb78: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efb78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1efb7c:
    // 0x1efb7c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1efb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1efb80:
    // 0x1efb80: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_1efb84:
    if (ctx->pc == 0x1EFB84u) {
        ctx->pc = 0x1EFB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB80u;
        // 0x1efb84: 0xac20a300  sw          $zero, -0x5D00($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFB88u;
        goto label_1efb88;
    }
    ctx->pc = 0x1EFB80u;
    {
        const bool branch_taken_0x1efb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB80u;
        // 0x1efb84: 0xac20a300  sw          $zero, -0x5D00($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb80) {
            ctx->pc = 0x1EFED8u;
            goto label_1efed8;
        }
    }
    ctx->pc = 0x1EFB88u;
label_1efb88:
    // 0x1efb88: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1efb8c:
    // 0x1efb8c: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1efb8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1efb90:
    // 0x1efb90: 0x9422a3d6  lhu         $v0, -0x5C2A($at)
    ctx->pc = 0x1efb90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1efb94:
    // 0x1efb94: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1efb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1efb98:
    // 0x1efb98: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1efb9c:
    if (ctx->pc == 0x1EFB9Cu) {
        ctx->pc = 0x1EFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB98u;
        // 0x1efb9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFBA0u;
        goto label_1efba0;
    }
    ctx->pc = 0x1EFB98u;
    {
        const bool branch_taken_0x1efb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB98u;
        // 0x1efb9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb98) {
            ctx->pc = 0x1EFBE0u;
            goto label_1efbe0;
        }
    }
    ctx->pc = 0x1EFBA0u;
label_1efba0:
    // 0x1efba0: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
label_1efba4:
    if (ctx->pc == 0x1EFBA4u) {
        ctx->pc = 0x1EFBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBA0u;
        // 0x1efba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFBA8u;
        goto label_1efba8;
    }
    ctx->pc = 0x1EFBA0u;
    {
        const bool branch_taken_0x1efba0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EFBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBA0u;
        // 0x1efba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efba0) {
            ctx->pc = 0x1EFBC0u;
            goto label_1efbc0;
        }
    }
    ctx->pc = 0x1EFBA8u;
label_1efba8:
    // 0x1efba8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1efba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1efbac:
    // 0x1efbac: 0xc0b2ebc  jal         func_2CBAF0
label_1efbb0:
    if (ctx->pc == 0x1EFBB0u) {
        ctx->pc = 0x1EFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBACu;
        // 0x1efbb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFBB4u;
        goto label_1efbb4;
    }
    ctx->pc = 0x1EFBACu;
    SET_GPR_U32(ctx, 31, 0x1EFBB4u);
    ctx->pc = 0x1EFBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFBACu;
    // 0x1efbb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x1EFBACu, 0x1EFBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFBB4u;
label_1efbb4:
    // 0x1efbb4: 0x10000010  b           . + 4 + (0x10 << 2)
label_1efbb8:
    if (ctx->pc == 0x1EFBB8u) {
        ctx->pc = 0x1EFBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBB4u;
        // 0x1efbb8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFBBCu;
        goto label_1efbbc;
    }
    ctx->pc = 0x1EFBB4u;
    {
        const bool branch_taken_0x1efbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBB4u;
        // 0x1efbb8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efbb4) {
            ctx->pc = 0x1EFBF8u;
            goto label_1efbf8;
        }
    }
    ctx->pc = 0x1EFBBCu;
label_1efbbc:
    // 0x1efbbc: 0x0  nop
    ctx->pc = 0x1efbbcu;
    // NOP
label_1efbc0:
    // 0x1efbc0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1efbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1efbc4:
    // 0x1efbc4: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1efbc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1efbc8:
    // 0x1efbc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1efbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1efbcc:
    // 0x1efbcc: 0xc0b2f78  jal         func_2CBDE0
label_1efbd0:
    if (ctx->pc == 0x1EFBD0u) {
        ctx->pc = 0x1EFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBCCu;
        // 0x1efbd0: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFBD4u;
        goto label_1efbd4;
    }
    ctx->pc = 0x1EFBCCu;
    SET_GPR_U32(ctx, 31, 0x1EFBD4u);
    ctx->pc = 0x1EFBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFBCCu;
    // 0x1efbd0: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBDE0u, 0x1EFBCCu, 0x1EFBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFBD4u;
label_1efbd4:
    // 0x1efbd4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1efbd8:
    if (ctx->pc == 0x1EFBD8u) {
        ctx->pc = 0x1EFBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBD4u;
        // 0x1efbd8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFBDCu;
        goto label_1efbdc;
    }
    ctx->pc = 0x1EFBD4u;
    {
        const bool branch_taken_0x1efbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBD4u;
        // 0x1efbd8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efbd4) {
            ctx->pc = 0x1EFBF8u;
            goto label_1efbf8;
        }
    }
    ctx->pc = 0x1EFBDCu;
label_1efbdc:
    // 0x1efbdc: 0x0  nop
    ctx->pc = 0x1efbdcu;
    // NOP
label_1efbe0:
    // 0x1efbe0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1efbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1efbe4:
    // 0x1efbe4: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1efbe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1efbe8:
    // 0x1efbe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1efbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1efbec:
    // 0x1efbec: 0xc0b2f78  jal         func_2CBDE0
label_1efbf0:
    if (ctx->pc == 0x1EFBF0u) {
        ctx->pc = 0x1EFBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBECu;
        // 0x1efbf0: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFBF4u;
        goto label_1efbf4;
    }
    ctx->pc = 0x1EFBECu;
    SET_GPR_U32(ctx, 31, 0x1EFBF4u);
    ctx->pc = 0x1EFBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFBECu;
    // 0x1efbf0: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBDE0u, 0x1EFBECu, 0x1EFBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFBF4u;
label_1efbf4:
    // 0x1efbf4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1efbf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1efbf8:
    // 0x1efbf8: 0x126000b3  beqz        $s3, . + 4 + (0xB3 << 2)
label_1efbfc:
    if (ctx->pc == 0x1EFBFCu) {
        ctx->pc = 0x1EFBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBF8u;
        // 0x1efbfc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFC00u;
        goto label_1efc00;
    }
    ctx->pc = 0x1EFBF8u;
    {
        const bool branch_taken_0x1efbf8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBF8u;
        // 0x1efbfc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efbf8) {
            ctx->pc = 0x1EFEC8u;
            goto label_1efec8;
        }
    }
    ctx->pc = 0x1EFC00u;
label_1efc00:
    // 0x1efc00: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1efc00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1efc04:
    // 0x1efc04: 0x9422a3d6  lhu         $v0, -0x5C2A($at)
    ctx->pc = 0x1efc04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1efc08:
    // 0x1efc08: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efc08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1efc0c:
    // 0x1efc0c: 0xa66214b2  sh          $v0, 0x14B2($s3)
    ctx->pc = 0x1efc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5298), (uint16_t)GPR_U32(ctx, 2));
label_1efc10:
    // 0x1efc10: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1efc10u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1efc14:
    // 0x1efc14: 0x9424a3d6  lhu         $a0, -0x5C2A($at)
    ctx->pc = 0x1efc14u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1efc18:
    // 0x1efc18: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x1efc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_1efc1c:
    // 0x1efc1c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_1efc20:
    if (ctx->pc == 0x1EFC20u) {
        ctx->pc = 0x1EFC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC1Cu;
        // 0x1efc20: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFC24u;
        goto label_1efc24;
    }
    ctx->pc = 0x1EFC1Cu;
    {
        const bool branch_taken_0x1efc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC1Cu;
        // 0x1efc20: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc1c) {
            ctx->pc = 0x1EFD28u;
            goto label_1efd28;
        }
    }
    ctx->pc = 0x1EFC24u;
label_1efc24:
    // 0x1efc24: 0x12430014  beq         $s2, $v1, . + 4 + (0x14 << 2)
label_1efc28:
    if (ctx->pc == 0x1EFC28u) {
        ctx->pc = 0x1EFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC24u;
        // 0x1efc28: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFC2Cu;
        goto label_1efc2c;
    }
    ctx->pc = 0x1EFC24u;
    {
        const bool branch_taken_0x1efc24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC24u;
        // 0x1efc28: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc24) {
            ctx->pc = 0x1EFC78u;
            goto label_1efc78;
        }
    }
    ctx->pc = 0x1EFC2Cu;
label_1efc2c:
    // 0x1efc2c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1efc30:
    if (ctx->pc == 0x1EFC30u) {
        ctx->pc = 0x1EFC34u;
        goto label_1efc34;
    }
    ctx->pc = 0x1EFC2Cu;
    {
        const bool branch_taken_0x1efc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efc2c) {
            ctx->pc = 0x1EFC58u;
            goto label_1efc58;
        }
    }
    ctx->pc = 0x1EFC34u;
label_1efc34:
    // 0x1efc34: 0x92260001  lbu         $a2, 0x1($s1)
    ctx->pc = 0x1efc34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_1efc38:
    // 0x1efc38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1efc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1efc3c:
    // 0x1efc3c: 0x92270002  lbu         $a3, 0x2($s1)
    ctx->pc = 0x1efc3cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1efc40:
    // 0x1efc40: 0x92280003  lbu         $t0, 0x3($s1)
    ctx->pc = 0x1efc40u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1efc44:
    // 0x1efc44: 0xc0ae728  jal         func_2B9CA0
label_1efc48:
    if (ctx->pc == 0x1EFC48u) {
        ctx->pc = 0x1EFC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC44u;
        // 0x1efc48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFC4Cu;
        goto label_1efc4c;
    }
    ctx->pc = 0x1EFC44u;
    SET_GPR_U32(ctx, 31, 0x1EFC4Cu);
    ctx->pc = 0x1EFC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFC44u;
    // 0x1efc48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9CA0u, 0x1EFC44u, 0x1EFC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC4Cu;
label_1efc4c:
    // 0x1efc4c: 0x10000048  b           . + 4 + (0x48 << 2)
label_1efc50:
    if (ctx->pc == 0x1EFC50u) {
        ctx->pc = 0x1EFC54u;
        goto label_1efc54;
    }
    ctx->pc = 0x1EFC4Cu;
    {
        const bool branch_taken_0x1efc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efc4c) {
            ctx->pc = 0x1EFD70u;
            goto label_1efd70;
        }
    }
    ctx->pc = 0x1EFC54u;
label_1efc54:
    // 0x1efc54: 0x0  nop
    ctx->pc = 0x1efc54u;
    // NOP
label_1efc58:
    // 0x1efc58: 0x92260001  lbu         $a2, 0x1($s1)
    ctx->pc = 0x1efc58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_1efc5c:
    // 0x1efc5c: 0x92270002  lbu         $a3, 0x2($s1)
    ctx->pc = 0x1efc5cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1efc60:
    // 0x1efc60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1efc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1efc64:
    // 0x1efc64: 0x92280003  lbu         $t0, 0x3($s1)
    ctx->pc = 0x1efc64u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1efc68:
    // 0x1efc68: 0xc0ae728  jal         func_2B9CA0
label_1efc6c:
    if (ctx->pc == 0x1EFC6Cu) {
        ctx->pc = 0x1EFC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC68u;
        // 0x1efc6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFC70u;
        goto label_1efc70;
    }
    ctx->pc = 0x1EFC68u;
    SET_GPR_U32(ctx, 31, 0x1EFC70u);
    ctx->pc = 0x1EFC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFC68u;
    // 0x1efc6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9CA0u, 0x1EFC68u, 0x1EFC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC70u;
label_1efc70:
    // 0x1efc70: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1efc74:
    if (ctx->pc == 0x1EFC74u) {
        ctx->pc = 0x1EFC78u;
        goto label_1efc78;
    }
    ctx->pc = 0x1EFC70u;
    {
        const bool branch_taken_0x1efc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efc70) {
            ctx->pc = 0x1EFD70u;
            goto label_1efd70;
        }
    }
    ctx->pc = 0x1EFC78u;
label_1efc78:
    // 0x1efc78: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1efc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1efc7c:
    // 0x1efc7c: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x1efc7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
label_1efc80:
    // 0x1efc80: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1efc84:
    if (ctx->pc == 0x1EFC84u) {
        ctx->pc = 0x1EFC88u;
        goto label_1efc88;
    }
    ctx->pc = 0x1EFC80u;
    {
        const bool branch_taken_0x1efc80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efc80) {
            ctx->pc = 0x1EFCA8u;
            goto label_1efca8;
        }
    }
    ctx->pc = 0x1EFC88u;
label_1efc88:
    // 0x1efc88: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x1efc88u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
label_1efc8c:
    // 0x1efc8c: 0x8e7904d4  lw          $t9, 0x4D4($s3)
    ctx->pc = 0x1efc8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1236)));
label_1efc90:
    // 0x1efc90: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x1efc90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_1efc94:
    // 0x1efc94: 0x320f809  jalr        $t9
label_1efc98:
    if (ctx->pc == 0x1EFC98u) {
        ctx->pc = 0x1EFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC94u;
        // 0x1efc98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFC9Cu;
        goto label_1efc9c;
    }
    ctx->pc = 0x1EFC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EFC9Cu);
        ctx->pc = 0x1EFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC94u;
        // 0x1efc98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFC94u, 0x1EFC9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFC9Cu;
label_1efc9c:
    // 0x1efc9c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1efca0:
    if (ctx->pc == 0x1EFCA0u) {
        ctx->pc = 0x1EFCA4u;
        goto label_1efca4;
    }
    ctx->pc = 0x1EFC9Cu;
    {
        const bool branch_taken_0x1efc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efc9c) {
            ctx->pc = 0x1EFCC0u;
            goto label_1efcc0;
        }
    }
    ctx->pc = 0x1EFCA4u;
label_1efca4:
    // 0x1efca4: 0x0  nop
    ctx->pc = 0x1efca4u;
    // NOP
label_1efca8:
    // 0x1efca8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1efca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1efcac:
    // 0x1efcac: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1efcacu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1efcb0:
    // 0x1efcb0: 0x8e7904d4  lw          $t9, 0x4D4($s3)
    ctx->pc = 0x1efcb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1236)));
label_1efcb4:
    // 0x1efcb4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x1efcb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_1efcb8:
    // 0x1efcb8: 0x320f809  jalr        $t9
label_1efcbc:
    if (ctx->pc == 0x1EFCBCu) {
        ctx->pc = 0x1EFCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCB8u;
        // 0x1efcbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFCC0u;
        goto label_1efcc0;
    }
    ctx->pc = 0x1EFCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EFCC0u);
        ctx->pc = 0x1EFCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCB8u;
        // 0x1efcbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFCB8u, 0x1EFCC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFCC0u;
label_1efcc0:
    // 0x1efcc0: 0x8e660148  lw          $a2, 0x148($s3)
    ctx->pc = 0x1efcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
label_1efcc4:
    // 0x1efcc4: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x1efcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_1efcc8:
    // 0x1efcc8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1efcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1efccc:
    // 0x1efccc: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1efcccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_1efcd0:
    // 0x1efcd0: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1efcd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1efcd4:
    // 0x1efcd4: 0xae650148  sw          $a1, 0x148($s3)
    ctx->pc = 0x1efcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 5));
label_1efcd8:
    // 0x1efcd8: 0x8e650148  lw          $a1, 0x148($s3)
    ctx->pc = 0x1efcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
label_1efcdc:
    // 0x1efcdc: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x1efcdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
label_1efce0:
    // 0x1efce0: 0xae650148  sw          $a1, 0x148($s3)
    ctx->pc = 0x1efce0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 5));
label_1efce4:
    // 0x1efce4: 0x8e650148  lw          $a1, 0x148($s3)
    ctx->pc = 0x1efce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
label_1efce8:
    // 0x1efce8: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1efce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
label_1efcec:
    // 0x1efcec: 0xae650148  sw          $a1, 0x148($s3)
    ctx->pc = 0x1efcecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 5));
label_1efcf0:
    // 0x1efcf0: 0x8e650148  lw          $a1, 0x148($s3)
    ctx->pc = 0x1efcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
label_1efcf4:
    // 0x1efcf4: 0x34a51000  ori         $a1, $a1, 0x1000
    ctx->pc = 0x1efcf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4096);
label_1efcf8:
    // 0x1efcf8: 0xae650148  sw          $a1, 0x148($s3)
    ctx->pc = 0x1efcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 5));
label_1efcfc:
    // 0x1efcfc: 0x8e650148  lw          $a1, 0x148($s3)
    ctx->pc = 0x1efcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
label_1efd00:
    // 0x1efd00: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1efd00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_1efd04:
    // 0x1efd04: 0xae650148  sw          $a1, 0x148($s3)
    ctx->pc = 0x1efd04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 5));
label_1efd08:
    // 0x1efd08: 0x8e650148  lw          $a1, 0x148($s3)
    ctx->pc = 0x1efd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
label_1efd0c:
    // 0x1efd0c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1efd0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1efd10:
    // 0x1efd10: 0xae640148  sw          $a0, 0x148($s3)
    ctx->pc = 0x1efd10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 4));
label_1efd14:
    // 0x1efd14: 0x8e640148  lw          $a0, 0x148($s3)
    ctx->pc = 0x1efd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
label_1efd18:
    // 0x1efd18: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1efd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1efd1c:
    // 0x1efd1c: 0x10000014  b           . + 4 + (0x14 << 2)
label_1efd20:
    if (ctx->pc == 0x1EFD20u) {
        ctx->pc = 0x1EFD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD1Cu;
        // 0x1efd20: 0xae630148  sw          $v1, 0x148($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFD24u;
        goto label_1efd24;
    }
    ctx->pc = 0x1EFD1Cu;
    {
        const bool branch_taken_0x1efd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD1Cu;
        // 0x1efd20: 0xae630148  sw          $v1, 0x148($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd1c) {
            ctx->pc = 0x1EFD70u;
            goto label_1efd70;
        }
    }
    ctx->pc = 0x1EFD24u;
label_1efd24:
    // 0x1efd24: 0x0  nop
    ctx->pc = 0x1efd24u;
    // NOP
label_1efd28:
    // 0x1efd28: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1efd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1efd2c:
    // 0x1efd2c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1efd30:
    if (ctx->pc == 0x1EFD30u) {
        ctx->pc = 0x1EFD34u;
        goto label_1efd34;
    }
    ctx->pc = 0x1EFD2Cu;
    {
        const bool branch_taken_0x1efd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efd2c) {
            ctx->pc = 0x1EFD58u;
            goto label_1efd58;
        }
    }
    ctx->pc = 0x1EFD34u;
label_1efd34:
    // 0x1efd34: 0x92260001  lbu         $a2, 0x1($s1)
    ctx->pc = 0x1efd34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_1efd38:
    // 0x1efd38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1efd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1efd3c:
    // 0x1efd3c: 0x92270002  lbu         $a3, 0x2($s1)
    ctx->pc = 0x1efd3cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1efd40:
    // 0x1efd40: 0x92280003  lbu         $t0, 0x3($s1)
    ctx->pc = 0x1efd40u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1efd44:
    // 0x1efd44: 0xc0ae728  jal         func_2B9CA0
label_1efd48:
    if (ctx->pc == 0x1EFD48u) {
        ctx->pc = 0x1EFD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD44u;
        // 0x1efd48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFD4Cu;
        goto label_1efd4c;
    }
    ctx->pc = 0x1EFD44u;
    SET_GPR_U32(ctx, 31, 0x1EFD4Cu);
    ctx->pc = 0x1EFD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD44u;
    // 0x1efd48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9CA0u, 0x1EFD44u, 0x1EFD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD4Cu;
label_1efd4c:
    // 0x1efd4c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1efd50:
    if (ctx->pc == 0x1EFD50u) {
        ctx->pc = 0x1EFD54u;
        goto label_1efd54;
    }
    ctx->pc = 0x1EFD4Cu;
    {
        const bool branch_taken_0x1efd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efd4c) {
            ctx->pc = 0x1EFD70u;
            goto label_1efd70;
        }
    }
    ctx->pc = 0x1EFD54u;
label_1efd54:
    // 0x1efd54: 0x0  nop
    ctx->pc = 0x1efd54u;
    // NOP
label_1efd58:
    // 0x1efd58: 0x92260001  lbu         $a2, 0x1($s1)
    ctx->pc = 0x1efd58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_1efd5c:
    // 0x1efd5c: 0x92270002  lbu         $a3, 0x2($s1)
    ctx->pc = 0x1efd5cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1efd60:
    // 0x1efd60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1efd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1efd64:
    // 0x1efd64: 0x92280003  lbu         $t0, 0x3($s1)
    ctx->pc = 0x1efd64u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1efd68:
    // 0x1efd68: 0xc0ae728  jal         func_2B9CA0
label_1efd6c:
    if (ctx->pc == 0x1EFD6Cu) {
        ctx->pc = 0x1EFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD68u;
        // 0x1efd6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFD70u;
        goto label_1efd70;
    }
    ctx->pc = 0x1EFD68u;
    SET_GPR_U32(ctx, 31, 0x1EFD70u);
    ctx->pc = 0x1EFD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD68u;
    // 0x1efd6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9CA0u, 0x1EFD68u, 0x1EFD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD70u;
label_1efd70:
    // 0x1efd70: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x1efd70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_1efd74:
    // 0x1efd74: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1efd74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_1efd78:
    // 0x1efd78: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1efd7c:
    // 0x1efd7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1efd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1efd80:
    // 0x1efd80: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x1efd80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_1efd84:
    // 0x1efd84: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x1efd84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
label_1efd88:
    // 0x1efd88: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1efd88u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1efd8c:
    // 0x1efd8c: 0xa66000c0  sh          $zero, 0xC0($s3)
    ctx->pc = 0x1efd8cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 192), (uint16_t)GPR_U32(ctx, 0));
label_1efd90:
    // 0x1efd90: 0xa66000c2  sh          $zero, 0xC2($s3)
    ctx->pc = 0x1efd90u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 194), (uint16_t)GPR_U32(ctx, 0));
label_1efd94:
    // 0x1efd94: 0xa66000c4  sh          $zero, 0xC4($s3)
    ctx->pc = 0x1efd94u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 196), (uint16_t)GPR_U32(ctx, 0));
label_1efd98:
    // 0x1efd98: 0x8c26a3c8  lw          $a2, -0x5C38($at)
    ctx->pc = 0x1efd98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943688)));
label_1efd9c:
    // 0x1efd9c: 0x10c0004a  beqz        $a2, . + 4 + (0x4A << 2)
label_1efda0:
    if (ctx->pc == 0x1EFDA0u) {
        ctx->pc = 0x1EFDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD9Cu;
        // 0x1efda0: 0x328500ff  andi        $a1, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFDA4u;
        goto label_1efda4;
    }
    ctx->pc = 0x1EFD9Cu;
    {
        const bool branch_taken_0x1efd9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD9Cu;
        // 0x1efda0: 0x328500ff  andi        $a1, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd9c) {
            ctx->pc = 0x1EFEC8u;
            goto label_1efec8;
        }
    }
    ctx->pc = 0x1EFDA4u;
label_1efda4:
    // 0x1efda4: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1efda4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1efda8:
    // 0x1efda8: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x1efda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1efdac:
    // 0x1efdac: 0x8088000a  lb          $t0, 0xA($a0)
    ctx->pc = 0x1efdacu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
label_1efdb0:
    // 0x1efdb0: 0x5000021  bltz        $t0, . + 4 + (0x21 << 2)
label_1efdb4:
    if (ctx->pc == 0x1EFDB4u) {
        ctx->pc = 0x1EFDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDB0u;
        // 0x1efdb4: 0x80890003  lb          $t1, 0x3($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFDB8u;
        goto label_1efdb8;
    }
    ctx->pc = 0x1EFDB0u;
    {
        const bool branch_taken_0x1efdb0 = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x1EFDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDB0u;
        // 0x1efdb4: 0x80890003  lb          $t1, 0x3($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efdb0) {
            ctx->pc = 0x1EFE38u;
            goto label_1efe38;
        }
    }
    ctx->pc = 0x1EFDB8u;
label_1efdb8:
    // 0x1efdb8: 0x9263c  dsll32      $a0, $t1, 24
    ctx->pc = 0x1efdb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 24));
label_1efdbc:
    // 0x1efdbc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1efdbcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_1efdc0:
    // 0x1efdc0: 0x480001d  bltz        $a0, . + 4 + (0x1D << 2)
label_1efdc4:
    if (ctx->pc == 0x1EFDC4u) {
        ctx->pc = 0x1EFDC8u;
        goto label_1efdc8;
    }
    ctx->pc = 0x1EFDC0u;
    {
        const bool branch_taken_0x1efdc0 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x1efdc0) {
            ctx->pc = 0x1EFE38u;
            goto label_1efe38;
        }
    }
    ctx->pc = 0x1EFDC8u;
label_1efdc8:
    // 0x1efdc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1efdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1efdcc:
    // 0x1efdcc: 0x16420008  bne         $s2, $v0, . + 4 + (0x8 << 2)
label_1efdd0:
    if (ctx->pc == 0x1EFDD0u) {
        ctx->pc = 0x1EFDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDCCu;
        // 0x1efdd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFDD4u;
        goto label_1efdd4;
    }
    ctx->pc = 0x1EFDCCu;
    {
        const bool branch_taken_0x1efdcc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EFDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDCCu;
        // 0x1efdd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efdcc) {
            ctx->pc = 0x1EFDF0u;
            goto label_1efdf0;
        }
    }
    ctx->pc = 0x1EFDD4u;
label_1efdd4:
    // 0x1efdd4: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x1efdd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1efdd8:
    // 0x1efdd8: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1efdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1efddc:
    // 0x1efddc: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_1efde0:
    if (ctx->pc == 0x1EFDE0u) {
        ctx->pc = 0x1EFDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDDCu;
        // 0x1efde0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFDE4u;
        goto label_1efde4;
    }
    ctx->pc = 0x1EFDDCu;
    {
        const bool branch_taken_0x1efddc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EFDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDDCu;
        // 0x1efde0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efddc) {
            ctx->pc = 0x1EFDF0u;
            goto label_1efdf0;
        }
    }
    ctx->pc = 0x1EFDE4u;
label_1efde4:
    // 0x1efde4: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
label_1efde8:
    if (ctx->pc == 0x1EFDE8u) {
        ctx->pc = 0x1EFDECu;
        goto label_1efdec;
    }
    ctx->pc = 0x1EFDE4u;
    {
        const bool branch_taken_0x1efde4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1efde4) {
            ctx->pc = 0x1EFDF0u;
            goto label_1efdf0;
        }
    }
    ctx->pc = 0x1EFDECu;
label_1efdec:
    // 0x1efdec: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x1efdecu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1efdf0:
    // 0x1efdf0: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1efdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1efdf4:
    // 0x1efdf4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1efdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1efdf8:
    // 0x1efdf8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1efdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1efdfc:
    // 0x1efdfc: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x1efdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_1efe00:
    // 0x1efe00: 0x84620008  lh          $v0, 0x8($v1)
    ctx->pc = 0x1efe00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1efe04:
    // 0x1efe04: 0x8c88004c  lw          $t0, 0x4C($a0)
    ctx->pc = 0x1efe04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_1efe08:
    // 0x1efe08: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1efe08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1efe0c:
    // 0x1efe0c: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x1efe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1efe10:
    // 0x1efe10: 0x9106006a  lbu         $a2, 0x6A($t0)
    ctx->pc = 0x1efe10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 106)));
label_1efe14:
    // 0x1efe14: 0xc46d0014  lwc1        $f13, 0x14($v1)
    ctx->pc = 0x1efe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1efe18:
    // 0x1efe18: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x1efe18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_1efe1c:
    // 0x1efe1c: 0xc46e0018  lwc1        $f14, 0x18($v1)
    ctx->pc = 0x1efe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1efe20:
    // 0x1efe20: 0x846a0004  lh          $t2, 0x4($v1)
    ctx->pc = 0x1efe20u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1efe24:
    // 0x1efe24: 0x846b0006  lh          $t3, 0x6($v1)
    ctx->pc = 0x1efe24u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_1efe28:
    // 0x1efe28: 0xc0603b4  jal         func_180ED0
label_1efe2c:
    if (ctx->pc == 0x1EFE2Cu) {
        ctx->pc = 0x1EFE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE28u;
        // 0x1efe2c: 0x8c840050  lw          $a0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFE30u;
        goto label_1efe30;
    }
    ctx->pc = 0x1EFE28u;
    SET_GPR_U32(ctx, 31, 0x1EFE30u);
    ctx->pc = 0x1EFE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFE28u;
    // 0x1efe2c: 0x8c840050  lw          $a0, 0x50($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180ED0u, 0x1EFE28u, 0x1EFE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFE30u;
label_1efe30:
    // 0x1efe30: 0x10000025  b           . + 4 + (0x25 << 2)
label_1efe34:
    if (ctx->pc == 0x1EFE34u) {
        ctx->pc = 0x1EFE38u;
        goto label_1efe38;
    }
    ctx->pc = 0x1EFE30u;
    {
        const bool branch_taken_0x1efe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efe30) {
            ctx->pc = 0x1EFEC8u;
            goto label_1efec8;
        }
    }
    ctx->pc = 0x1EFE38u;
label_1efe38:
    // 0x1efe38: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x1efe38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1efe3c:
    // 0x1efe3c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1efe3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1efe40:
    // 0x1efe40: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efe40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1efe44:
    // 0x1efe44: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1efe44u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1efe48:
    // 0x1efe48: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x1efe48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_1efe4c:
    // 0x1efe4c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1efe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1efe50:
    // 0x1efe50: 0x8c25a3c8  lw          $a1, -0x5C38($at)
    ctx->pc = 0x1efe50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943688)));
label_1efe54:
    // 0x1efe54: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1efe54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1efe58:
    // 0x1efe58: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efe58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1efe5c:
    // 0x1efe5c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1efe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1efe60:
    // 0x1efe60: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1efe60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1efe64:
    // 0x1efe64: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x1efe64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_1efe68:
    // 0x1efe68: 0x8c25a3c8  lw          $a1, -0x5C38($at)
    ctx->pc = 0x1efe68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943688)));
label_1efe6c:
    // 0x1efe6c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1efe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1efe70:
    // 0x1efe70: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efe70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1efe74:
    // 0x1efe74: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1efe74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1efe78:
    // 0x1efe78: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1efe78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1efe7c:
    // 0x1efe7c: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x1efe7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
label_1efe80:
    // 0x1efe80: 0xae64002c  sw          $a0, 0x2C($s3)
    ctx->pc = 0x1efe80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 4));
label_1efe84:
    // 0x1efe84: 0x8c24a3c8  lw          $a0, -0x5C38($at)
    ctx->pc = 0x1efe84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943688)));
label_1efe88:
    // 0x1efe88: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1efe88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1efe8c:
    // 0x1efe8c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efe8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1efe90:
    // 0x1efe90: 0x84840004  lh          $a0, 0x4($a0)
    ctx->pc = 0x1efe90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1efe94:
    // 0x1efe94: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1efe94u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1efe98:
    // 0x1efe98: 0xa66400c0  sh          $a0, 0xC0($s3)
    ctx->pc = 0x1efe98u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 192), (uint16_t)GPR_U32(ctx, 4));
label_1efe9c:
    // 0x1efe9c: 0x8c24a3c8  lw          $a0, -0x5C38($at)
    ctx->pc = 0x1efe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943688)));
label_1efea0:
    // 0x1efea0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1efea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1efea4:
    // 0x1efea4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1efea8:
    // 0x1efea8: 0x84840006  lh          $a0, 0x6($a0)
    ctx->pc = 0x1efea8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_1efeac:
    // 0x1efeac: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1efeacu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1efeb0:
    // 0x1efeb0: 0xa66400c2  sh          $a0, 0xC2($s3)
    ctx->pc = 0x1efeb0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 194), (uint16_t)GPR_U32(ctx, 4));
label_1efeb4:
    // 0x1efeb4: 0x8c24a3c8  lw          $a0, -0x5C38($at)
    ctx->pc = 0x1efeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943688)));
label_1efeb8:
    // 0x1efeb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1efeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1efebc:
    // 0x1efebc: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x1efebcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1efec0:
    // 0x1efec0: 0xa66300c4  sh          $v1, 0xC4($s3)
    ctx->pc = 0x1efec0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 196), (uint16_t)GPR_U32(ctx, 3));
label_1efec4:
    // 0x1efec4: 0x0  nop
    ctx->pc = 0x1efec4u;
    // NOP
label_1efec8:
    // 0x1efec8: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x1efec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_1efecc:
    // 0x1efecc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1efeccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1efed0:
    // 0x1efed0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1efed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1efed4:
    // 0x1efed4: 0xac730080  sw          $s3, 0x80($v1)
    ctx->pc = 0x1efed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 19));
label_1efed8:
    // 0x1efed8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1efed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1efedc:
    // 0x1efedc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1efedcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1efee0:
    // 0x1efee0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1efee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1efee4:
    // 0x1efee4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1efee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1efee8:
    // 0x1efee8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1efee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1efeec:
    // 0x1efeec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1efeecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1efef0:
    // 0x1efef0: 0x3e00008  jr          $ra
label_1efef4:
    if (ctx->pc == 0x1EFEF4u) {
        ctx->pc = 0x1EFEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEF0u;
        // 0x1efef4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFEF8u;
        goto label_fallthrough_0x1efef0;
    }
    ctx->pc = 0x1EFEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEF0u;
        // 0x1efef4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1efef0:
    ctx->pc = 0x1EFEF8u;
}
