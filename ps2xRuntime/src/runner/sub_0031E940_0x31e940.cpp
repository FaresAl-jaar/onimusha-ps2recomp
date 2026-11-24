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

// Function: sub_0031E940
// Address: 0x31e940 - 0x31ee98
void sub_0031E940_0x31e940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E940_0x31e940");
#endif

    switch (ctx->pc) {
        case 0x31e940u: goto label_31e940;
        case 0x31e944u: goto label_31e944;
        case 0x31e948u: goto label_31e948;
        case 0x31e94cu: goto label_31e94c;
        case 0x31e950u: goto label_31e950;
        case 0x31e954u: goto label_31e954;
        case 0x31e958u: goto label_31e958;
        case 0x31e95cu: goto label_31e95c;
        case 0x31e960u: goto label_31e960;
        case 0x31e964u: goto label_31e964;
        case 0x31e968u: goto label_31e968;
        case 0x31e96cu: goto label_31e96c;
        case 0x31e970u: goto label_31e970;
        case 0x31e974u: goto label_31e974;
        case 0x31e978u: goto label_31e978;
        case 0x31e97cu: goto label_31e97c;
        case 0x31e980u: goto label_31e980;
        case 0x31e984u: goto label_31e984;
        case 0x31e988u: goto label_31e988;
        case 0x31e98cu: goto label_31e98c;
        case 0x31e990u: goto label_31e990;
        case 0x31e994u: goto label_31e994;
        case 0x31e998u: goto label_31e998;
        case 0x31e99cu: goto label_31e99c;
        case 0x31e9a0u: goto label_31e9a0;
        case 0x31e9a4u: goto label_31e9a4;
        case 0x31e9a8u: goto label_31e9a8;
        case 0x31e9acu: goto label_31e9ac;
        case 0x31e9b0u: goto label_31e9b0;
        case 0x31e9b4u: goto label_31e9b4;
        case 0x31e9b8u: goto label_31e9b8;
        case 0x31e9bcu: goto label_31e9bc;
        case 0x31e9c0u: goto label_31e9c0;
        case 0x31e9c4u: goto label_31e9c4;
        case 0x31e9c8u: goto label_31e9c8;
        case 0x31e9ccu: goto label_31e9cc;
        case 0x31e9d0u: goto label_31e9d0;
        case 0x31e9d4u: goto label_31e9d4;
        case 0x31e9d8u: goto label_31e9d8;
        case 0x31e9dcu: goto label_31e9dc;
        case 0x31e9e0u: goto label_31e9e0;
        case 0x31e9e4u: goto label_31e9e4;
        case 0x31e9e8u: goto label_31e9e8;
        case 0x31e9ecu: goto label_31e9ec;
        case 0x31e9f0u: goto label_31e9f0;
        case 0x31e9f4u: goto label_31e9f4;
        case 0x31e9f8u: goto label_31e9f8;
        case 0x31e9fcu: goto label_31e9fc;
        case 0x31ea00u: goto label_31ea00;
        case 0x31ea04u: goto label_31ea04;
        case 0x31ea08u: goto label_31ea08;
        case 0x31ea0cu: goto label_31ea0c;
        case 0x31ea10u: goto label_31ea10;
        case 0x31ea14u: goto label_31ea14;
        case 0x31ea18u: goto label_31ea18;
        case 0x31ea1cu: goto label_31ea1c;
        case 0x31ea20u: goto label_31ea20;
        case 0x31ea24u: goto label_31ea24;
        case 0x31ea28u: goto label_31ea28;
        case 0x31ea2cu: goto label_31ea2c;
        case 0x31ea30u: goto label_31ea30;
        case 0x31ea34u: goto label_31ea34;
        case 0x31ea38u: goto label_31ea38;
        case 0x31ea3cu: goto label_31ea3c;
        case 0x31ea40u: goto label_31ea40;
        case 0x31ea44u: goto label_31ea44;
        case 0x31ea48u: goto label_31ea48;
        case 0x31ea4cu: goto label_31ea4c;
        case 0x31ea50u: goto label_31ea50;
        case 0x31ea54u: goto label_31ea54;
        case 0x31ea58u: goto label_31ea58;
        case 0x31ea5cu: goto label_31ea5c;
        case 0x31ea60u: goto label_31ea60;
        case 0x31ea64u: goto label_31ea64;
        case 0x31ea68u: goto label_31ea68;
        case 0x31ea6cu: goto label_31ea6c;
        case 0x31ea70u: goto label_31ea70;
        case 0x31ea74u: goto label_31ea74;
        case 0x31ea78u: goto label_31ea78;
        case 0x31ea7cu: goto label_31ea7c;
        case 0x31ea80u: goto label_31ea80;
        case 0x31ea84u: goto label_31ea84;
        case 0x31ea88u: goto label_31ea88;
        case 0x31ea8cu: goto label_31ea8c;
        case 0x31ea90u: goto label_31ea90;
        case 0x31ea94u: goto label_31ea94;
        case 0x31ea98u: goto label_31ea98;
        case 0x31ea9cu: goto label_31ea9c;
        case 0x31eaa0u: goto label_31eaa0;
        case 0x31eaa4u: goto label_31eaa4;
        case 0x31eaa8u: goto label_31eaa8;
        case 0x31eaacu: goto label_31eaac;
        case 0x31eab0u: goto label_31eab0;
        case 0x31eab4u: goto label_31eab4;
        case 0x31eab8u: goto label_31eab8;
        case 0x31eabcu: goto label_31eabc;
        case 0x31eac0u: goto label_31eac0;
        case 0x31eac4u: goto label_31eac4;
        case 0x31eac8u: goto label_31eac8;
        case 0x31eaccu: goto label_31eacc;
        case 0x31ead0u: goto label_31ead0;
        case 0x31ead4u: goto label_31ead4;
        case 0x31ead8u: goto label_31ead8;
        case 0x31eadcu: goto label_31eadc;
        case 0x31eae0u: goto label_31eae0;
        case 0x31eae4u: goto label_31eae4;
        case 0x31eae8u: goto label_31eae8;
        case 0x31eaecu: goto label_31eaec;
        case 0x31eaf0u: goto label_31eaf0;
        case 0x31eaf4u: goto label_31eaf4;
        case 0x31eaf8u: goto label_31eaf8;
        case 0x31eafcu: goto label_31eafc;
        case 0x31eb00u: goto label_31eb00;
        case 0x31eb04u: goto label_31eb04;
        case 0x31eb08u: goto label_31eb08;
        case 0x31eb0cu: goto label_31eb0c;
        case 0x31eb10u: goto label_31eb10;
        case 0x31eb14u: goto label_31eb14;
        case 0x31eb18u: goto label_31eb18;
        case 0x31eb1cu: goto label_31eb1c;
        case 0x31eb20u: goto label_31eb20;
        case 0x31eb24u: goto label_31eb24;
        case 0x31eb28u: goto label_31eb28;
        case 0x31eb2cu: goto label_31eb2c;
        case 0x31eb30u: goto label_31eb30;
        case 0x31eb34u: goto label_31eb34;
        case 0x31eb38u: goto label_31eb38;
        case 0x31eb3cu: goto label_31eb3c;
        case 0x31eb40u: goto label_31eb40;
        case 0x31eb44u: goto label_31eb44;
        case 0x31eb48u: goto label_31eb48;
        case 0x31eb4cu: goto label_31eb4c;
        case 0x31eb50u: goto label_31eb50;
        case 0x31eb54u: goto label_31eb54;
        case 0x31eb58u: goto label_31eb58;
        case 0x31eb5cu: goto label_31eb5c;
        case 0x31eb60u: goto label_31eb60;
        case 0x31eb64u: goto label_31eb64;
        case 0x31eb68u: goto label_31eb68;
        case 0x31eb6cu: goto label_31eb6c;
        case 0x31eb70u: goto label_31eb70;
        case 0x31eb74u: goto label_31eb74;
        case 0x31eb78u: goto label_31eb78;
        case 0x31eb7cu: goto label_31eb7c;
        case 0x31eb80u: goto label_31eb80;
        case 0x31eb84u: goto label_31eb84;
        case 0x31eb88u: goto label_31eb88;
        case 0x31eb8cu: goto label_31eb8c;
        case 0x31eb90u: goto label_31eb90;
        case 0x31eb94u: goto label_31eb94;
        case 0x31eb98u: goto label_31eb98;
        case 0x31eb9cu: goto label_31eb9c;
        case 0x31eba0u: goto label_31eba0;
        case 0x31eba4u: goto label_31eba4;
        case 0x31eba8u: goto label_31eba8;
        case 0x31ebacu: goto label_31ebac;
        case 0x31ebb0u: goto label_31ebb0;
        case 0x31ebb4u: goto label_31ebb4;
        case 0x31ebb8u: goto label_31ebb8;
        case 0x31ebbcu: goto label_31ebbc;
        case 0x31ebc0u: goto label_31ebc0;
        case 0x31ebc4u: goto label_31ebc4;
        case 0x31ebc8u: goto label_31ebc8;
        case 0x31ebccu: goto label_31ebcc;
        case 0x31ebd0u: goto label_31ebd0;
        case 0x31ebd4u: goto label_31ebd4;
        case 0x31ebd8u: goto label_31ebd8;
        case 0x31ebdcu: goto label_31ebdc;
        case 0x31ebe0u: goto label_31ebe0;
        case 0x31ebe4u: goto label_31ebe4;
        case 0x31ebe8u: goto label_31ebe8;
        case 0x31ebecu: goto label_31ebec;
        case 0x31ebf0u: goto label_31ebf0;
        case 0x31ebf4u: goto label_31ebf4;
        case 0x31ebf8u: goto label_31ebf8;
        case 0x31ebfcu: goto label_31ebfc;
        case 0x31ec00u: goto label_31ec00;
        case 0x31ec04u: goto label_31ec04;
        case 0x31ec08u: goto label_31ec08;
        case 0x31ec0cu: goto label_31ec0c;
        case 0x31ec10u: goto label_31ec10;
        case 0x31ec14u: goto label_31ec14;
        case 0x31ec18u: goto label_31ec18;
        case 0x31ec1cu: goto label_31ec1c;
        case 0x31ec20u: goto label_31ec20;
        case 0x31ec24u: goto label_31ec24;
        case 0x31ec28u: goto label_31ec28;
        case 0x31ec2cu: goto label_31ec2c;
        case 0x31ec30u: goto label_31ec30;
        case 0x31ec34u: goto label_31ec34;
        case 0x31ec38u: goto label_31ec38;
        case 0x31ec3cu: goto label_31ec3c;
        case 0x31ec40u: goto label_31ec40;
        case 0x31ec44u: goto label_31ec44;
        case 0x31ec48u: goto label_31ec48;
        case 0x31ec4cu: goto label_31ec4c;
        case 0x31ec50u: goto label_31ec50;
        case 0x31ec54u: goto label_31ec54;
        case 0x31ec58u: goto label_31ec58;
        case 0x31ec5cu: goto label_31ec5c;
        case 0x31ec60u: goto label_31ec60;
        case 0x31ec64u: goto label_31ec64;
        case 0x31ec68u: goto label_31ec68;
        case 0x31ec6cu: goto label_31ec6c;
        case 0x31ec70u: goto label_31ec70;
        case 0x31ec74u: goto label_31ec74;
        case 0x31ec78u: goto label_31ec78;
        case 0x31ec7cu: goto label_31ec7c;
        case 0x31ec80u: goto label_31ec80;
        case 0x31ec84u: goto label_31ec84;
        case 0x31ec88u: goto label_31ec88;
        case 0x31ec8cu: goto label_31ec8c;
        case 0x31ec90u: goto label_31ec90;
        case 0x31ec94u: goto label_31ec94;
        case 0x31ec98u: goto label_31ec98;
        case 0x31ec9cu: goto label_31ec9c;
        case 0x31eca0u: goto label_31eca0;
        case 0x31eca4u: goto label_31eca4;
        case 0x31eca8u: goto label_31eca8;
        case 0x31ecacu: goto label_31ecac;
        case 0x31ecb0u: goto label_31ecb0;
        case 0x31ecb4u: goto label_31ecb4;
        case 0x31ecb8u: goto label_31ecb8;
        case 0x31ecbcu: goto label_31ecbc;
        case 0x31ecc0u: goto label_31ecc0;
        case 0x31ecc4u: goto label_31ecc4;
        case 0x31ecc8u: goto label_31ecc8;
        case 0x31ecccu: goto label_31eccc;
        case 0x31ecd0u: goto label_31ecd0;
        case 0x31ecd4u: goto label_31ecd4;
        case 0x31ecd8u: goto label_31ecd8;
        case 0x31ecdcu: goto label_31ecdc;
        case 0x31ece0u: goto label_31ece0;
        case 0x31ece4u: goto label_31ece4;
        case 0x31ece8u: goto label_31ece8;
        case 0x31ececu: goto label_31ecec;
        case 0x31ecf0u: goto label_31ecf0;
        case 0x31ecf4u: goto label_31ecf4;
        case 0x31ecf8u: goto label_31ecf8;
        case 0x31ecfcu: goto label_31ecfc;
        case 0x31ed00u: goto label_31ed00;
        case 0x31ed04u: goto label_31ed04;
        case 0x31ed08u: goto label_31ed08;
        case 0x31ed0cu: goto label_31ed0c;
        case 0x31ed10u: goto label_31ed10;
        case 0x31ed14u: goto label_31ed14;
        case 0x31ed18u: goto label_31ed18;
        case 0x31ed1cu: goto label_31ed1c;
        case 0x31ed20u: goto label_31ed20;
        case 0x31ed24u: goto label_31ed24;
        case 0x31ed28u: goto label_31ed28;
        case 0x31ed2cu: goto label_31ed2c;
        case 0x31ed30u: goto label_31ed30;
        case 0x31ed34u: goto label_31ed34;
        case 0x31ed38u: goto label_31ed38;
        case 0x31ed3cu: goto label_31ed3c;
        case 0x31ed40u: goto label_31ed40;
        case 0x31ed44u: goto label_31ed44;
        case 0x31ed48u: goto label_31ed48;
        case 0x31ed4cu: goto label_31ed4c;
        case 0x31ed50u: goto label_31ed50;
        case 0x31ed54u: goto label_31ed54;
        case 0x31ed58u: goto label_31ed58;
        case 0x31ed5cu: goto label_31ed5c;
        case 0x31ed60u: goto label_31ed60;
        case 0x31ed64u: goto label_31ed64;
        case 0x31ed68u: goto label_31ed68;
        case 0x31ed6cu: goto label_31ed6c;
        case 0x31ed70u: goto label_31ed70;
        case 0x31ed74u: goto label_31ed74;
        case 0x31ed78u: goto label_31ed78;
        case 0x31ed7cu: goto label_31ed7c;
        case 0x31ed80u: goto label_31ed80;
        case 0x31ed84u: goto label_31ed84;
        case 0x31ed88u: goto label_31ed88;
        case 0x31ed8cu: goto label_31ed8c;
        case 0x31ed90u: goto label_31ed90;
        case 0x31ed94u: goto label_31ed94;
        case 0x31ed98u: goto label_31ed98;
        case 0x31ed9cu: goto label_31ed9c;
        case 0x31eda0u: goto label_31eda0;
        case 0x31eda4u: goto label_31eda4;
        case 0x31eda8u: goto label_31eda8;
        case 0x31edacu: goto label_31edac;
        case 0x31edb0u: goto label_31edb0;
        case 0x31edb4u: goto label_31edb4;
        case 0x31edb8u: goto label_31edb8;
        case 0x31edbcu: goto label_31edbc;
        case 0x31edc0u: goto label_31edc0;
        case 0x31edc4u: goto label_31edc4;
        case 0x31edc8u: goto label_31edc8;
        case 0x31edccu: goto label_31edcc;
        case 0x31edd0u: goto label_31edd0;
        case 0x31edd4u: goto label_31edd4;
        case 0x31edd8u: goto label_31edd8;
        case 0x31eddcu: goto label_31eddc;
        case 0x31ede0u: goto label_31ede0;
        case 0x31ede4u: goto label_31ede4;
        case 0x31ede8u: goto label_31ede8;
        case 0x31edecu: goto label_31edec;
        case 0x31edf0u: goto label_31edf0;
        case 0x31edf4u: goto label_31edf4;
        case 0x31edf8u: goto label_31edf8;
        case 0x31edfcu: goto label_31edfc;
        case 0x31ee00u: goto label_31ee00;
        case 0x31ee04u: goto label_31ee04;
        case 0x31ee08u: goto label_31ee08;
        case 0x31ee0cu: goto label_31ee0c;
        case 0x31ee10u: goto label_31ee10;
        case 0x31ee14u: goto label_31ee14;
        case 0x31ee18u: goto label_31ee18;
        case 0x31ee1cu: goto label_31ee1c;
        case 0x31ee20u: goto label_31ee20;
        case 0x31ee24u: goto label_31ee24;
        case 0x31ee28u: goto label_31ee28;
        case 0x31ee2cu: goto label_31ee2c;
        case 0x31ee30u: goto label_31ee30;
        case 0x31ee34u: goto label_31ee34;
        case 0x31ee38u: goto label_31ee38;
        case 0x31ee3cu: goto label_31ee3c;
        case 0x31ee40u: goto label_31ee40;
        case 0x31ee44u: goto label_31ee44;
        case 0x31ee48u: goto label_31ee48;
        case 0x31ee4cu: goto label_31ee4c;
        case 0x31ee50u: goto label_31ee50;
        case 0x31ee54u: goto label_31ee54;
        case 0x31ee58u: goto label_31ee58;
        case 0x31ee5cu: goto label_31ee5c;
        case 0x31ee60u: goto label_31ee60;
        case 0x31ee64u: goto label_31ee64;
        case 0x31ee68u: goto label_31ee68;
        case 0x31ee6cu: goto label_31ee6c;
        case 0x31ee70u: goto label_31ee70;
        case 0x31ee74u: goto label_31ee74;
        case 0x31ee78u: goto label_31ee78;
        case 0x31ee7cu: goto label_31ee7c;
        case 0x31ee80u: goto label_31ee80;
        case 0x31ee84u: goto label_31ee84;
        case 0x31ee88u: goto label_31ee88;
        case 0x31ee8cu: goto label_31ee8c;
        case 0x31ee90u: goto label_31ee90;
        case 0x31ee94u: goto label_31ee94;
        default: break;
    }

    ctx->pc = 0x31e940u;

label_31e940:
    // 0x31e940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31e940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_31e944:
    // 0x31e944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31e944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_31e948:
    // 0x31e948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31e948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_31e94c:
    // 0x31e94c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31e94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31e950:
    // 0x31e950: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31e950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31e954:
    // 0x31e954: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31e954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_31e958:
    // 0x31e958: 0x83838b50  lb          $v1, -0x74B0($gp)
    ctx->pc = 0x31e958u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937424)));
label_31e95c:
    // 0x31e95c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_31e960:
    if (ctx->pc == 0x31E960u) {
        ctx->pc = 0x31E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E95Cu;
        // 0x31e960: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E964u;
        goto label_31e964;
    }
    ctx->pc = 0x31E95Cu;
    {
        const bool branch_taken_0x31e95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E95Cu;
        // 0x31e960: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e95c) {
            ctx->pc = 0x31E9A0u;
            goto label_31e9a0;
        }
    }
    ctx->pc = 0x31E964u;
label_31e964:
    // 0x31e964: 0xc78c8078  lwc1        $f12, -0x7F88($gp)
    ctx->pc = 0x31e964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_31e968:
    // 0x31e968: 0x3c02c066  lui         $v0, 0xC066
    ctx->pc = 0x31e968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49254 << 16));
label_31e96c:
    // 0x31e96c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x31e96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_31e970:
    // 0x31e970: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31e970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_31e974:
    // 0x31e974: 0xc04b946  jal         func_12E518
label_31e978:
    if (ctx->pc == 0x31E978u) {
        ctx->pc = 0x31E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E974u;
        // 0x31e978: 0x70028389  pcpyld      $s0, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E97Cu;
        goto label_31e97c;
    }
    ctx->pc = 0x31E974u;
    SET_GPR_U32(ctx, 31, 0x31E97Cu);
    ctx->pc = 0x31E978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E974u;
    // 0x31e978: 0x70028389  pcpyld      $s0, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x31E974u, 0x31E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E97Cu;
label_31e97c:
    // 0x31e97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31e97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31e980:
    // 0x31e980: 0xc04bafa  jal         func_12EBE8
label_31e984:
    if (ctx->pc == 0x31E984u) {
        ctx->pc = 0x31E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E980u;
        // 0x31e984: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E988u;
        goto label_31e988;
    }
    ctx->pc = 0x31E980u;
    SET_GPR_U32(ctx, 31, 0x31E988u);
    ctx->pc = 0x31E984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E980u;
    // 0x31e984: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBE8u, 0x31E980u, 0x31E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E988u;
label_31e988:
    // 0x31e988: 0xc04bc02  jal         func_12F008
label_31e98c:
    if (ctx->pc == 0x31E98Cu) {
        ctx->pc = 0x31E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E988u;
        // 0x31e98c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E990u;
        goto label_31e990;
    }
    ctx->pc = 0x31E988u;
    SET_GPR_U32(ctx, 31, 0x31E990u);
    ctx->pc = 0x31E98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E988u;
    // 0x31e98c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F008u, 0x31E988u, 0x31E990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E990u;
label_31e990:
    // 0x31e990: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x31e990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
label_31e994:
    // 0x31e994: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31e994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e998:
    // 0x31e998: 0xe420c9e0  swc1        $f0, -0x3620($at)
    ctx->pc = 0x31e998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294953440), bits); }
label_31e99c:
    // 0x31e99c: 0xa3838b50  sb          $v1, -0x74B0($gp)
    ctx->pc = 0x31e99cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937424), (uint8_t)GPR_U32(ctx, 3));
label_31e9a0:
    // 0x31e9a0: 0x83838b54  lb          $v1, -0x74AC($gp)
    ctx->pc = 0x31e9a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937428)));
label_31e9a4:
    // 0x31e9a4: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_31e9a8:
    if (ctx->pc == 0x31E9A8u) {
        ctx->pc = 0x31E9ACu;
        goto label_31e9ac;
    }
    ctx->pc = 0x31E9A4u;
    {
        const bool branch_taken_0x31e9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e9a4) {
            ctx->pc = 0x31EA10u;
            goto label_31ea10;
        }
    }
    ctx->pc = 0x31E9ACu;
label_31e9ac:
    // 0x31e9ac: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x31e9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31e9b0:
    // 0x31e9b0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x31e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_31e9b4:
    // 0x31e9b4: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x31e9b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_31e9b8:
    // 0x31e9b8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x31e9b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_31e9bc:
    // 0x31e9bc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x31e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_31e9c0:
    // 0x31e9c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e9c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e9c4:
    // 0x31e9c4: 0x0  nop
    ctx->pc = 0x31e9c4u;
    // NOP
label_31e9c8:
    // 0x31e9c8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x31e9c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_31e9cc:
    // 0x31e9cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31e9ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31e9d0:
    // 0x31e9d0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_31e9d4:
    if (ctx->pc == 0x31E9D4u) {
        ctx->pc = 0x31E9D8u;
        goto label_31e9d8;
    }
    ctx->pc = 0x31E9D0u;
    {
        const bool branch_taken_0x31e9d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e9d0) {
            ctx->pc = 0x31E9E8u;
            goto label_31e9e8;
        }
    }
    ctx->pc = 0x31E9D8u;
label_31e9d8:
    // 0x31e9d8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31e9d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_31e9dc:
    // 0x31e9dc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31e9dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_31e9e0:
    // 0x31e9e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_31e9e4:
    if (ctx->pc == 0x31E9E4u) {
        ctx->pc = 0x31E9E8u;
        goto label_31e9e8;
    }
    ctx->pc = 0x31E9E0u;
    {
        const bool branch_taken_0x31e9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e9e0) {
            ctx->pc = 0x31EA00u;
            goto label_31ea00;
        }
    }
    ctx->pc = 0x31E9E8u;
label_31e9e8:
    // 0x31e9e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31e9e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31e9ec:
    // 0x31e9ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31e9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_31e9f0:
    // 0x31e9f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31e9f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_31e9f4:
    // 0x31e9f4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31e9f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_31e9f8:
    // 0x31e9f8: 0x0  nop
    ctx->pc = 0x31e9f8u;
    // NOP
label_31e9fc:
    // 0x31e9fc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31e9fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_31ea00:
    // 0x31ea00: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x31ea00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
label_31ea04:
    // 0x31ea04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31ea08:
    // 0x31ea08: 0xa424c9e8  sh          $a0, -0x3618($at)
    ctx->pc = 0x31ea08u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294953448), (uint16_t)GPR_U32(ctx, 4));
label_31ea0c:
    // 0x31ea0c: 0xa3838b54  sb          $v1, -0x74AC($gp)
    ctx->pc = 0x31ea0cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937428), (uint8_t)GPR_U32(ctx, 3));
label_31ea10:
    // 0x31ea10: 0x83838b58  lb          $v1, -0x74A8($gp)
    ctx->pc = 0x31ea10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937432)));
label_31ea14:
    // 0x31ea14: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_31ea18:
    if (ctx->pc == 0x31EA18u) {
        ctx->pc = 0x31EA1Cu;
        goto label_31ea1c;
    }
    ctx->pc = 0x31EA14u;
    {
        const bool branch_taken_0x31ea14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ea14) {
            ctx->pc = 0x31EA80u;
            goto label_31ea80;
        }
    }
    ctx->pc = 0x31EA1Cu;
label_31ea1c:
    // 0x31ea1c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x31ea1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31ea20:
    // 0x31ea20: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x31ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_31ea24:
    // 0x31ea24: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x31ea24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_31ea28:
    // 0x31ea28: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x31ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_31ea2c:
    // 0x31ea2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31ea2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31ea30:
    // 0x31ea30: 0x0  nop
    ctx->pc = 0x31ea30u;
    // NOP
label_31ea34:
    // 0x31ea34: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x31ea34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_31ea38:
    // 0x31ea38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31ea38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31ea3c:
    // 0x31ea3c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_31ea40:
    if (ctx->pc == 0x31EA40u) {
        ctx->pc = 0x31EA44u;
        goto label_31ea44;
    }
    ctx->pc = 0x31EA3Cu;
    {
        const bool branch_taken_0x31ea3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31ea3c) {
            ctx->pc = 0x31EA54u;
            goto label_31ea54;
        }
    }
    ctx->pc = 0x31EA44u;
label_31ea44:
    // 0x31ea44: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31ea44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_31ea48:
    // 0x31ea48: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31ea48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_31ea4c:
    // 0x31ea4c: 0x10000007  b           . + 4 + (0x7 << 2)
label_31ea50:
    if (ctx->pc == 0x31EA50u) {
        ctx->pc = 0x31EA54u;
        goto label_31ea54;
    }
    ctx->pc = 0x31EA4Cu;
    {
        const bool branch_taken_0x31ea4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ea4c) {
            ctx->pc = 0x31EA6Cu;
            goto label_31ea6c;
        }
    }
    ctx->pc = 0x31EA54u;
label_31ea54:
    // 0x31ea54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31ea54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31ea58:
    // 0x31ea58: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_31ea5c:
    // 0x31ea5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31ea5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_31ea60:
    // 0x31ea60: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31ea60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_31ea64:
    // 0x31ea64: 0x0  nop
    ctx->pc = 0x31ea64u;
    // NOP
label_31ea68:
    // 0x31ea68: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31ea68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_31ea6c:
    // 0x31ea6c: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x31ea6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
label_31ea70:
    // 0x31ea70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31ea74:
    // 0x31ea74: 0xa424c9f0  sh          $a0, -0x3610($at)
    ctx->pc = 0x31ea74u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294953456), (uint16_t)GPR_U32(ctx, 4));
label_31ea78:
    // 0x31ea78: 0xa3838b58  sb          $v1, -0x74A8($gp)
    ctx->pc = 0x31ea78u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937432), (uint8_t)GPR_U32(ctx, 3));
label_31ea7c:
    // 0x31ea7c: 0x0  nop
    ctx->pc = 0x31ea7cu;
    // NOP
label_31ea80:
    // 0x31ea80: 0x83838b5c  lb          $v1, -0x74A4($gp)
    ctx->pc = 0x31ea80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937436)));
label_31ea84:
    // 0x31ea84: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_31ea88:
    if (ctx->pc == 0x31EA88u) {
        ctx->pc = 0x31EA8Cu;
        goto label_31ea8c;
    }
    ctx->pc = 0x31EA84u;
    {
        const bool branch_taken_0x31ea84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ea84) {
            ctx->pc = 0x31EAF0u;
            goto label_31eaf0;
        }
    }
    ctx->pc = 0x31EA8Cu;
label_31ea8c:
    // 0x31ea8c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x31ea8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31ea90:
    // 0x31ea90: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x31ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_31ea94:
    // 0x31ea94: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x31ea94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_31ea98:
    // 0x31ea98: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x31ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_31ea9c:
    // 0x31ea9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31ea9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31eaa0:
    // 0x31eaa0: 0x0  nop
    ctx->pc = 0x31eaa0u;
    // NOP
label_31eaa4:
    // 0x31eaa4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x31eaa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_31eaa8:
    // 0x31eaa8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31eaa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31eaac:
    // 0x31eaac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_31eab0:
    if (ctx->pc == 0x31EAB0u) {
        ctx->pc = 0x31EAB4u;
        goto label_31eab4;
    }
    ctx->pc = 0x31EAACu;
    {
        const bool branch_taken_0x31eaac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31eaac) {
            ctx->pc = 0x31EAC4u;
            goto label_31eac4;
        }
    }
    ctx->pc = 0x31EAB4u;
label_31eab4:
    // 0x31eab4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31eab4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_31eab8:
    // 0x31eab8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31eab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_31eabc:
    // 0x31eabc: 0x10000007  b           . + 4 + (0x7 << 2)
label_31eac0:
    if (ctx->pc == 0x31EAC0u) {
        ctx->pc = 0x31EAC4u;
        goto label_31eac4;
    }
    ctx->pc = 0x31EABCu;
    {
        const bool branch_taken_0x31eabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eabc) {
            ctx->pc = 0x31EADCu;
            goto label_31eadc;
        }
    }
    ctx->pc = 0x31EAC4u;
label_31eac4:
    // 0x31eac4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31eac4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31eac8:
    // 0x31eac8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_31eacc:
    // 0x31eacc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31eaccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_31ead0:
    // 0x31ead0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31ead0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_31ead4:
    // 0x31ead4: 0x0  nop
    ctx->pc = 0x31ead4u;
    // NOP
label_31ead8:
    // 0x31ead8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31ead8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_31eadc:
    // 0x31eadc: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x31eadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
label_31eae0:
    // 0x31eae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31eae4:
    // 0x31eae4: 0xa424c9f8  sh          $a0, -0x3608($at)
    ctx->pc = 0x31eae4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294953464), (uint16_t)GPR_U32(ctx, 4));
label_31eae8:
    // 0x31eae8: 0xa3838b5c  sb          $v1, -0x74A4($gp)
    ctx->pc = 0x31eae8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937436), (uint8_t)GPR_U32(ctx, 3));
label_31eaec:
    // 0x31eaec: 0x0  nop
    ctx->pc = 0x31eaecu;
    // NOP
label_31eaf0:
    // 0x31eaf0: 0xc6400094  lwc1        $f0, 0x94($s2)
    ctx->pc = 0x31eaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31eaf4:
    // 0x31eaf4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31eaf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31eaf8:
    // 0x31eaf8: 0x0  nop
    ctx->pc = 0x31eaf8u;
    // NOP
label_31eafc:
    // 0x31eafc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31eafcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31eb00:
    // 0x31eb00: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_31eb04:
    if (ctx->pc == 0x31EB04u) {
        ctx->pc = 0x31EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB00u;
        // 0x31eb04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EB08u;
        goto label_31eb08;
    }
    ctx->pc = 0x31EB00u;
    {
        const bool branch_taken_0x31eb00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB00u;
        // 0x31eb04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb00) {
            ctx->pc = 0x31EB20u;
            goto label_31eb20;
        }
    }
    ctx->pc = 0x31EB08u;
label_31eb08:
    // 0x31eb08: 0xc64028f0  lwc1        $f0, 0x28F0($s2)
    ctx->pc = 0x31eb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31eb0c:
    // 0x31eb0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31eb0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31eb10:
    // 0x31eb10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_31eb14:
    if (ctx->pc == 0x31EB14u) {
        ctx->pc = 0x31EB18u;
        goto label_31eb18;
    }
    ctx->pc = 0x31EB10u;
    {
        const bool branch_taken_0x31eb10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31eb10) {
            ctx->pc = 0x31EB20u;
            goto label_31eb20;
        }
    }
    ctx->pc = 0x31EB18u;
label_31eb18:
    // 0x31eb18: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x31eb18u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_31eb1c:
    // 0x31eb1c: 0x0  nop
    ctx->pc = 0x31eb1cu;
    // NOP
label_31eb20:
    // 0x31eb20: 0x92440821  lbu         $a0, 0x821($s2)
    ctx->pc = 0x31eb20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2081)));
label_31eb24:
    // 0x31eb24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31eb28:
    // 0x31eb28: 0x10830071  beq         $a0, $v1, . + 4 + (0x71 << 2)
label_31eb2c:
    if (ctx->pc == 0x31EB2Cu) {
        ctx->pc = 0x31EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB28u;
        // 0x31eb2c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EB30u;
        goto label_31eb30;
    }
    ctx->pc = 0x31EB28u;
    {
        const bool branch_taken_0x31eb28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x31EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB28u;
        // 0x31eb2c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb28) {
            ctx->pc = 0x31ECF0u;
            goto label_31ecf0;
        }
    }
    ctx->pc = 0x31EB30u;
label_31eb30:
    // 0x31eb30: 0x10860061  beq         $a0, $a2, . + 4 + (0x61 << 2)
label_31eb34:
    if (ctx->pc == 0x31EB34u) {
        ctx->pc = 0x31EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB30u;
        // 0x31eb34: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EB38u;
        goto label_31eb38;
    }
    ctx->pc = 0x31EB30u;
    {
        const bool branch_taken_0x31eb30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x31EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB30u;
        // 0x31eb34: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb30) {
            ctx->pc = 0x31ECB8u;
            goto label_31ecb8;
        }
    }
    ctx->pc = 0x31EB38u;
label_31eb38:
    // 0x31eb38: 0x1083003b  beq         $a0, $v1, . + 4 + (0x3B << 2)
label_31eb3c:
    if (ctx->pc == 0x31EB3Cu) {
        ctx->pc = 0x31EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB38u;
        // 0x31eb3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EB40u;
        goto label_31eb40;
    }
    ctx->pc = 0x31EB38u;
    {
        const bool branch_taken_0x31eb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x31EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB38u;
        // 0x31eb3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb38) {
            ctx->pc = 0x31EC28u;
            goto label_31ec28;
        }
    }
    ctx->pc = 0x31EB40u;
label_31eb40:
    // 0x31eb40: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
label_31eb44:
    if (ctx->pc == 0x31EB44u) {
        ctx->pc = 0x31EB48u;
        goto label_31eb48;
    }
    ctx->pc = 0x31EB40u;
    {
        const bool branch_taken_0x31eb40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x31eb40) {
            ctx->pc = 0x31EB90u;
            goto label_31eb90;
        }
    }
    ctx->pc = 0x31EB48u;
label_31eb48:
    // 0x31eb48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_31eb4c:
    if (ctx->pc == 0x31EB4Cu) {
        ctx->pc = 0x31EB50u;
        goto label_31eb50;
    }
    ctx->pc = 0x31EB48u;
    {
        const bool branch_taken_0x31eb48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eb48) {
            ctx->pc = 0x31EB58u;
            goto label_31eb58;
        }
    }
    ctx->pc = 0x31EB50u;
label_31eb50:
    // 0x31eb50: 0x10000069  b           . + 4 + (0x69 << 2)
label_31eb54:
    if (ctx->pc == 0x31EB54u) {
        ctx->pc = 0x31EB58u;
        goto label_31eb58;
    }
    ctx->pc = 0x31EB50u;
    {
        const bool branch_taken_0x31eb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eb50) {
            ctx->pc = 0x31ECF8u;
            goto label_31ecf8;
        }
    }
    ctx->pc = 0x31EB58u;
label_31eb58:
    // 0x31eb58: 0xa640082c  sh          $zero, 0x82C($s2)
    ctx->pc = 0x31eb58u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 0));
label_31eb5c:
    // 0x31eb5c: 0xa6400826  sh          $zero, 0x826($s2)
    ctx->pc = 0x31eb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2086), (uint16_t)GPR_U32(ctx, 0));
label_31eb60:
    // 0x31eb60: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_31eb64:
    // 0x31eb64: 0xa640082a  sh          $zero, 0x82A($s2)
    ctx->pc = 0x31eb64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2090), (uint16_t)GPR_U32(ctx, 0));
label_31eb68:
    // 0x31eb68: 0x24040097  addiu       $a0, $zero, 0x97
    ctx->pc = 0x31eb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
label_31eb6c:
    // 0x31eb6c: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x31eb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
label_31eb70:
    // 0x31eb70: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x31eb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_31eb74:
    // 0x31eb74: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x31eb74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
label_31eb78:
    // 0x31eb78: 0xa64407f2  sh          $a0, 0x7F2($s2)
    ctx->pc = 0x31eb78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 4));
label_31eb7c:
    // 0x31eb7c: 0xa24007f5  sb          $zero, 0x7F5($s2)
    ctx->pc = 0x31eb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 0));
label_31eb80:
    // 0x31eb80: 0xae4307ec  sw          $v1, 0x7EC($s2)
    ctx->pc = 0x31eb80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
label_31eb84:
    // 0x31eb84: 0x1000005c  b           . + 4 + (0x5C << 2)
label_31eb88:
    if (ctx->pc == 0x31EB88u) {
        ctx->pc = 0x31EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB84u;
        // 0x31eb88: 0xa2450821  sb          $a1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EB8Cu;
        goto label_31eb8c;
    }
    ctx->pc = 0x31EB84u;
    {
        const bool branch_taken_0x31eb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB84u;
        // 0x31eb88: 0xa2450821  sb          $a1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb84) {
            ctx->pc = 0x31ECF8u;
            goto label_31ecf8;
        }
    }
    ctx->pc = 0x31EB8Cu;
label_31eb8c:
    // 0x31eb8c: 0x0  nop
    ctx->pc = 0x31eb8cu;
    // NOP
label_31eb90:
    // 0x31eb90: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_31eb94:
    if (ctx->pc == 0x31EB94u) {
        ctx->pc = 0x31EB98u;
        goto label_31eb98;
    }
    ctx->pc = 0x31EB90u;
    {
        const bool branch_taken_0x31eb90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eb90) {
            ctx->pc = 0x31EBC8u;
            goto label_31ebc8;
        }
    }
    ctx->pc = 0x31EB98u;
label_31eb98:
    // 0x31eb98: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x31eb98u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
label_31eb9c:
    // 0x31eb9c: 0x24040099  addiu       $a0, $zero, 0x99
    ctx->pc = 0x31eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_31eba0:
    // 0x31eba0: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x31eba0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
label_31eba4:
    // 0x31eba4: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x31eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
label_31eba8:
    // 0x31eba8: 0xa64407f2  sh          $a0, 0x7F2($s2)
    ctx->pc = 0x31eba8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 4));
label_31ebac:
    // 0x31ebac: 0xa24007f5  sb          $zero, 0x7F5($s2)
    ctx->pc = 0x31ebacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 0));
label_31ebb0:
    // 0x31ebb0: 0xae4307ec  sw          $v1, 0x7EC($s2)
    ctx->pc = 0x31ebb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
label_31ebb4:
    // 0x31ebb4: 0xc64128f0  lwc1        $f1, 0x28F0($s2)
    ctx->pc = 0x31ebb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31ebb8:
    // 0x31ebb8: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x31ebb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ebbc:
    // 0x31ebbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31ebbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_31ebc0:
    // 0x31ebc0: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x31ebc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_31ebc4:
    // 0x31ebc4: 0xa2460821  sb          $a2, 0x821($s2)
    ctx->pc = 0x31ebc4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 6));
label_31ebc8:
    // 0x31ebc8: 0x924307f6  lbu         $v1, 0x7F6($s2)
    ctx->pc = 0x31ebc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2038)));
label_31ebcc:
    // 0x31ebcc: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
label_31ebd0:
    if (ctx->pc == 0x31EBD0u) {
        ctx->pc = 0x31EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBCCu;
        // 0x31ebd0: 0x3c010068  lui         $at, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EBD4u;
        goto label_31ebd4;
    }
    ctx->pc = 0x31EBCCu;
    {
        const bool branch_taken_0x31ebcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBCCu;
        // 0x31ebd0: 0x3c010068  lui         $at, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ebcc) {
            ctx->pc = 0x31ECF8u;
            goto label_31ecf8;
        }
    }
    ctx->pc = 0x31EBD4u;
label_31ebd4:
    // 0x31ebd4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31ebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_31ebd8:
    // 0x31ebd8: 0x9428c9f8  lhu         $t0, -0x3608($at)
    ctx->pc = 0x31ebd8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294953464)));
label_31ebdc:
    // 0x31ebdc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x31ebdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31ebe0:
    // 0x31ebe0: 0x3c06c120  lui         $a2, 0xC120
    ctx->pc = 0x31ebe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49440 << 16));
label_31ebe4:
    // 0x31ebe4: 0x24050098  addiu       $a1, $zero, 0x98
    ctx->pc = 0x31ebe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_31ebe8:
    // 0x31ebe8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x31ebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_31ebec:
    // 0x31ebec: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x31ebecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_31ebf0:
    // 0x31ebf0: 0xa6480828  sh          $t0, 0x828($s2)
    ctx->pc = 0x31ebf0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 8));
label_31ebf4:
    // 0x31ebf4: 0xa2470821  sb          $a3, 0x821($s2)
    ctx->pc = 0x31ebf4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 7));
label_31ebf8:
    // 0x31ebf8: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x31ebf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31ebfc:
    // 0x31ebfc: 0xc6400084  lwc1        $f0, 0x84($s2)
    ctx->pc = 0x31ebfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ec00:
    // 0x31ec00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31ec00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31ec04:
    // 0x31ec04: 0xe6400094  swc1        $f0, 0x94($s2)
    ctx->pc = 0x31ec04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 148), bits); }
label_31ec08:
    // 0x31ec08: 0xae460094  sw          $a2, 0x94($s2)
    ctx->pc = 0x31ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 6));
label_31ec0c:
    // 0x31ec0c: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x31ec0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
label_31ec10:
    // 0x31ec10: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x31ec10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
label_31ec14:
    // 0x31ec14: 0xa64507f2  sh          $a1, 0x7F2($s2)
    ctx->pc = 0x31ec14u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 5));
label_31ec18:
    // 0x31ec18: 0xa24407f5  sb          $a0, 0x7F5($s2)
    ctx->pc = 0x31ec18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 4));
label_31ec1c:
    // 0x31ec1c: 0x10000036  b           . + 4 + (0x36 << 2)
label_31ec20:
    if (ctx->pc == 0x31EC20u) {
        ctx->pc = 0x31EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC1Cu;
        // 0x31ec20: 0xae4307ec  sw          $v1, 0x7EC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EC24u;
        goto label_31ec24;
    }
    ctx->pc = 0x31EC1Cu;
    {
        const bool branch_taken_0x31ec1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC1Cu;
        // 0x31ec20: 0xae4307ec  sw          $v1, 0x7EC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec1c) {
            ctx->pc = 0x31ECF8u;
            goto label_31ecf8;
        }
    }
    ctx->pc = 0x31EC24u;
label_31ec24:
    // 0x31ec24: 0x0  nop
    ctx->pc = 0x31ec24u;
    // NOP
label_31ec28:
    // 0x31ec28: 0x96430828  lhu         $v1, 0x828($s2)
    ctx->pc = 0x31ec28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2088)));
label_31ec2c:
    // 0x31ec2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31ec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_31ec30:
    // 0x31ec30: 0xa6430828  sh          $v1, 0x828($s2)
    ctx->pc = 0x31ec30u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 3));
label_31ec34:
    // 0x31ec34: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x31ec34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_31ec38:
    // 0x31ec38: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_31ec3c:
    if (ctx->pc == 0x31EC3Cu) {
        ctx->pc = 0x31EC40u;
        goto label_31ec40;
    }
    ctx->pc = 0x31EC38u;
    {
        const bool branch_taken_0x31ec38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ec38) {
            ctx->pc = 0x31EC60u;
            goto label_31ec60;
        }
    }
    ctx->pc = 0x31EC40u;
label_31ec40:
    // 0x31ec40: 0x8e5904d4  lw          $t9, 0x4D4($s2)
    ctx->pc = 0x31ec40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1236)));
label_31ec44:
    // 0x31ec44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31ec44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31ec48:
    // 0x31ec48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31ec48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ec4c:
    // 0x31ec4c: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x31ec4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_31ec50:
    // 0x31ec50: 0x320f809  jalr        $t9
label_31ec54:
    if (ctx->pc == 0x31EC54u) {
        ctx->pc = 0x31EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC50u;
        // 0x31ec54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EC58u;
        goto label_31ec58;
    }
    ctx->pc = 0x31EC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31EC58u);
        ctx->pc = 0x31EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC50u;
        // 0x31ec54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EC50u, 0x31EC58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31EC58u;
label_31ec58:
    // 0x31ec58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31ec5c:
    // 0x31ec5c: 0xa6430786  sh          $v1, 0x786($s2)
    ctx->pc = 0x31ec5cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1926), (uint16_t)GPR_U32(ctx, 3));
label_31ec60:
    // 0x31ec60: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_31ec64:
    if (ctx->pc == 0x31EC64u) {
        ctx->pc = 0x31EC68u;
        goto label_31ec68;
    }
    ctx->pc = 0x31EC60u;
    {
        const bool branch_taken_0x31ec60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ec60) {
            ctx->pc = 0x31ECA0u;
            goto label_31eca0;
        }
    }
    ctx->pc = 0x31EC68u;
label_31ec68:
    // 0x31ec68: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x31ec68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
label_31ec6c:
    // 0x31ec6c: 0x24030099  addiu       $v1, $zero, 0x99
    ctx->pc = 0x31ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_31ec70:
    // 0x31ec70: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x31ec70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
label_31ec74:
    // 0x31ec74: 0x3c048004  lui         $a0, 0x8004
    ctx->pc = 0x31ec74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32772 << 16));
label_31ec78:
    // 0x31ec78: 0xa64307f2  sh          $v1, 0x7F2($s2)
    ctx->pc = 0x31ec78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 3));
label_31ec7c:
    // 0x31ec7c: 0xa24007f5  sb          $zero, 0x7F5($s2)
    ctx->pc = 0x31ec7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 0));
label_31ec80:
    // 0x31ec80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31ec80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31ec84:
    // 0x31ec84: 0xae4407ec  sw          $a0, 0x7EC($s2)
    ctx->pc = 0x31ec84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 4));
label_31ec88:
    // 0x31ec88: 0xc64128f0  lwc1        $f1, 0x28F0($s2)
    ctx->pc = 0x31ec88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31ec8c:
    // 0x31ec8c: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x31ec8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ec90:
    // 0x31ec90: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31ec90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_31ec94:
    // 0x31ec94: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x31ec94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_31ec98:
    // 0x31ec98: 0x10000017  b           . + 4 + (0x17 << 2)
label_31ec9c:
    if (ctx->pc == 0x31EC9Cu) {
        ctx->pc = 0x31EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC98u;
        // 0x31ec9c: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ECA0u;
        goto label_31eca0;
    }
    ctx->pc = 0x31EC98u;
    {
        const bool branch_taken_0x31ec98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC98u;
        // 0x31ec9c: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec98) {
            ctx->pc = 0x31ECF8u;
            goto label_31ecf8;
        }
    }
    ctx->pc = 0x31ECA0u;
label_31eca0:
    // 0x31eca0: 0xc6410094  lwc1        $f1, 0x94($s2)
    ctx->pc = 0x31eca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31eca4:
    // 0x31eca4: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x31eca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31eca8:
    // 0x31eca8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31eca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_31ecac:
    // 0x31ecac: 0x10000012  b           . + 4 + (0x12 << 2)
label_31ecb0:
    if (ctx->pc == 0x31ECB0u) {
        ctx->pc = 0x31ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECACu;
        // 0x31ecb0: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ECB4u;
        goto label_31ecb4;
    }
    ctx->pc = 0x31ECACu;
    {
        const bool branch_taken_0x31ecac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECACu;
        // 0x31ecb0: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ecac) {
            ctx->pc = 0x31ECF8u;
            goto label_31ecf8;
        }
    }
    ctx->pc = 0x31ECB4u;
label_31ecb4:
    // 0x31ecb4: 0x0  nop
    ctx->pc = 0x31ecb4u;
    // NOP
label_31ecb8:
    // 0x31ecb8: 0x924307f6  lbu         $v1, 0x7F6($s2)
    ctx->pc = 0x31ecb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2038)));
label_31ecbc:
    // 0x31ecbc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_31ecc0:
    if (ctx->pc == 0x31ECC0u) {
        ctx->pc = 0x31ECC4u;
        goto label_31ecc4;
    }
    ctx->pc = 0x31ECBCu;
    {
        const bool branch_taken_0x31ecbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ecbc) {
            ctx->pc = 0x31ECF8u;
            goto label_31ecf8;
        }
    }
    ctx->pc = 0x31ECC4u;
label_31ecc4:
    // 0x31ecc4: 0x8e5904d4  lw          $t9, 0x4D4($s2)
    ctx->pc = 0x31ecc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1236)));
label_31ecc8:
    // 0x31ecc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31ecc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31eccc:
    // 0x31eccc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31ecccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ecd0:
    // 0x31ecd0: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x31ecd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_31ecd4:
    // 0x31ecd4: 0x320f809  jalr        $t9
label_31ecd8:
    if (ctx->pc == 0x31ECD8u) {
        ctx->pc = 0x31ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECD4u;
        // 0x31ecd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ECDCu;
        goto label_31ecdc;
    }
    ctx->pc = 0x31ECD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31ECDCu);
        ctx->pc = 0x31ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECD4u;
        // 0x31ecd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31ECD4u, 0x31ECDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31ECDCu;
label_31ecdc:
    // 0x31ecdc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x31ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31ece0:
    // 0x31ece0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31ece0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31ece4:
    // 0x31ece4: 0xa6440786  sh          $a0, 0x786($s2)
    ctx->pc = 0x31ece4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1926), (uint16_t)GPR_U32(ctx, 4));
label_31ece8:
    // 0x31ece8: 0x10000003  b           . + 4 + (0x3 << 2)
label_31ecec:
    if (ctx->pc == 0x31ECECu) {
        ctx->pc = 0x31ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECE8u;
        // 0x31ecec: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ECF0u;
        goto label_31ecf0;
    }
    ctx->pc = 0x31ECE8u;
    {
        const bool branch_taken_0x31ece8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECE8u;
        // 0x31ecec: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ece8) {
            ctx->pc = 0x31ECF8u;
            goto label_31ecf8;
        }
    }
    ctx->pc = 0x31ECF0u;
label_31ecf0:
    // 0x31ecf0: 0x10000063  b           . + 4 + (0x63 << 2)
label_31ecf4:
    if (ctx->pc == 0x31ECF4u) {
        ctx->pc = 0x31ECF8u;
        goto label_31ecf8;
    }
    ctx->pc = 0x31ECF0u;
    {
        const bool branch_taken_0x31ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ecf0) {
            ctx->pc = 0x31EE80u;
            goto label_31ee80;
        }
    }
    ctx->pc = 0x31ECF8u;
label_31ecf8:
    // 0x31ecf8: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_31ecfc:
    if (ctx->pc == 0x31ECFCu) {
        ctx->pc = 0x31ED00u;
        goto label_31ed00;
    }
    ctx->pc = 0x31ECF8u;
    {
        const bool branch_taken_0x31ecf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ecf8) {
            ctx->pc = 0x31ED98u;
            goto label_31ed98;
        }
    }
    ctx->pc = 0x31ED00u;
label_31ed00:
    // 0x31ed00: 0x924307d6  lbu         $v1, 0x7D6($s2)
    ctx->pc = 0x31ed00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2006)));
label_31ed04:
    // 0x31ed04: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_31ed08:
    if (ctx->pc == 0x31ED08u) {
        ctx->pc = 0x31ED0Cu;
        goto label_31ed0c;
    }
    ctx->pc = 0x31ED04u;
    {
        const bool branch_taken_0x31ed04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ed04) {
            ctx->pc = 0x31ED98u;
            goto label_31ed98;
        }
    }
    ctx->pc = 0x31ED0Cu;
label_31ed0c:
    // 0x31ed0c: 0x9643082a  lhu         $v1, 0x82A($s2)
    ctx->pc = 0x31ed0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
label_31ed10:
    // 0x31ed10: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_31ed14:
    if (ctx->pc == 0x31ED14u) {
        ctx->pc = 0x31ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED10u;
        // 0x31ed14: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ED18u;
        goto label_31ed18;
    }
    ctx->pc = 0x31ED10u;
    {
        const bool branch_taken_0x31ed10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED10u;
        // 0x31ed14: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed10) {
            ctx->pc = 0x31ED88u;
            goto label_31ed88;
        }
    }
    ctx->pc = 0x31ED18u;
label_31ed18:
    // 0x31ed18: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x31ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_31ed1c:
    // 0x31ed1c: 0xa643082a  sh          $v1, 0x82A($s2)
    ctx->pc = 0x31ed1cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2090), (uint16_t)GPR_U32(ctx, 3));
label_31ed20:
    // 0x31ed20: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x31ed20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_31ed24:
    // 0x31ed24: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x31ed24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31ed28:
    // 0x31ed28: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x31ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_31ed2c:
    // 0x31ed2c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x31ed2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_31ed30:
    // 0x31ed30: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x31ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_31ed34:
    // 0x31ed34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31ed34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31ed38:
    // 0x31ed38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ed38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31ed3c:
    // 0x31ed3c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x31ed3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_31ed40:
    // 0x31ed40: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x31ed40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_31ed44:
    // 0x31ed44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31ed44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31ed48:
    // 0x31ed48: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_31ed4c:
    if (ctx->pc == 0x31ED4Cu) {
        ctx->pc = 0x31ED50u;
        goto label_31ed50;
    }
    ctx->pc = 0x31ED48u;
    {
        const bool branch_taken_0x31ed48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31ed48) {
            ctx->pc = 0x31ED60u;
            goto label_31ed60;
        }
    }
    ctx->pc = 0x31ED50u;
label_31ed50:
    // 0x31ed50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31ed50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_31ed54:
    // 0x31ed54: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x31ed54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_31ed58:
    // 0x31ed58: 0x10000008  b           . + 4 + (0x8 << 2)
label_31ed5c:
    if (ctx->pc == 0x31ED5Cu) {
        ctx->pc = 0x31ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED58u;
        // 0x31ed5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ED60u;
        goto label_31ed60;
    }
    ctx->pc = 0x31ED58u;
    {
        const bool branch_taken_0x31ed58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED58u;
        // 0x31ed5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed58) {
            ctx->pc = 0x31ED7Cu;
            goto label_31ed7c;
        }
    }
    ctx->pc = 0x31ED60u;
label_31ed60:
    // 0x31ed60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31ed60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31ed64:
    // 0x31ed64: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_31ed68:
    // 0x31ed68: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31ed68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_31ed6c:
    // 0x31ed6c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x31ed6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_31ed70:
    // 0x31ed70: 0x0  nop
    ctx->pc = 0x31ed70u;
    // NOP
label_31ed74:
    // 0x31ed74: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x31ed74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_31ed78:
    // 0x31ed78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31ed78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31ed7c:
    // 0x31ed7c: 0xc0a0b40  jal         func_282D00
label_31ed80:
    if (ctx->pc == 0x31ED80u) {
        ctx->pc = 0x31ED84u;
        goto label_31ed84;
    }
    ctx->pc = 0x31ED7Cu;
    SET_GPR_U32(ctx, 31, 0x31ED84u);
    ctx->pc = 0x282D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282D00u, 0x31ED7Cu, 0x31ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED84u;
label_31ed84:
    // 0x31ed84: 0x0  nop
    ctx->pc = 0x31ed84u;
    // NOP
label_31ed88:
    // 0x31ed88: 0x96430826  lhu         $v1, 0x826($s2)
    ctx->pc = 0x31ed88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2086)));
label_31ed8c:
    // 0x31ed8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31ed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31ed90:
    // 0x31ed90: 0xa6430826  sh          $v1, 0x826($s2)
    ctx->pc = 0x31ed90u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2086), (uint16_t)GPR_U32(ctx, 3));
label_31ed94:
    // 0x31ed94: 0x0  nop
    ctx->pc = 0x31ed94u;
    // NOP
label_31ed98:
    // 0x31ed98: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_31ed9c:
    if (ctx->pc == 0x31ED9Cu) {
        ctx->pc = 0x31EDA0u;
        goto label_31eda0;
    }
    ctx->pc = 0x31ED98u;
    {
        const bool branch_taken_0x31ed98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ed98) {
            ctx->pc = 0x31EDC0u;
            goto label_31edc0;
        }
    }
    ctx->pc = 0x31EDA0u;
label_31eda0:
    // 0x31eda0: 0x924307d6  lbu         $v1, 0x7D6($s2)
    ctx->pc = 0x31eda0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2006)));
label_31eda4:
    // 0x31eda4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_31eda8:
    if (ctx->pc == 0x31EDA8u) {
        ctx->pc = 0x31EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EDA4u;
        // 0x31eda8: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EDACu;
        goto label_31edac;
    }
    ctx->pc = 0x31EDA4u;
    {
        const bool branch_taken_0x31eda4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EDA4u;
        // 0x31eda8: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eda4) {
            ctx->pc = 0x31EDB8u;
            goto label_31edb8;
        }
    }
    ctx->pc = 0x31EDACu;
label_31edac:
    // 0x31edac: 0x10000004  b           . + 4 + (0x4 << 2)
label_31edb0:
    if (ctx->pc == 0x31EDB0u) {
        ctx->pc = 0x31EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EDACu;
        // 0x31edb0: 0xa64307f0  sh          $v1, 0x7F0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EDB4u;
        goto label_31edb4;
    }
    ctx->pc = 0x31EDACu;
    {
        const bool branch_taken_0x31edac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EDACu;
        // 0x31edb0: 0xa64307f0  sh          $v1, 0x7F0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31edac) {
            ctx->pc = 0x31EDC0u;
            goto label_31edc0;
        }
    }
    ctx->pc = 0x31EDB4u;
label_31edb4:
    // 0x31edb4: 0x0  nop
    ctx->pc = 0x31edb4u;
    // NOP
label_31edb8:
    // 0x31edb8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x31edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_31edbc:
    // 0x31edbc: 0xa64307f0  sh          $v1, 0x7F0($s2)
    ctx->pc = 0x31edbcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 3));
label_31edc0:
    // 0x31edc0: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_31edc4:
    if (ctx->pc == 0x31EDC4u) {
        ctx->pc = 0x31EDC8u;
        goto label_31edc8;
    }
    ctx->pc = 0x31EDC0u;
    {
        const bool branch_taken_0x31edc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31edc0) {
            ctx->pc = 0x31EE80u;
            goto label_31ee80;
        }
    }
    ctx->pc = 0x31EDC8u;
label_31edc8:
    // 0x31edc8: 0x8e4329c0  lw          $v1, 0x29C0($s2)
    ctx->pc = 0x31edc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
label_31edcc:
    // 0x31edcc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x31edccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31edd0:
    // 0x31edd0: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_31edd4:
    if (ctx->pc == 0x31EDD4u) {
        ctx->pc = 0x31EDD8u;
        goto label_31edd8;
    }
    ctx->pc = 0x31EDD0u;
    {
        const bool branch_taken_0x31edd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31edd0) {
            ctx->pc = 0x31EE80u;
            goto label_31ee80;
        }
    }
    ctx->pc = 0x31EDD8u;
label_31edd8:
    // 0x31edd8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x31edd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31eddc:
    // 0x31eddc: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x31eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_31ede0:
    // 0x31ede0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x31ede0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_31ede4:
    // 0x31ede4: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x31ede4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
label_31ede8:
    // 0x31ede8: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x31ede8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
label_31edec:
    // 0x31edec: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x31edecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_31edf0:
    // 0x31edf0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x31edf0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31edf4:
    // 0x31edf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31edf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31edf8:
    // 0x31edf8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x31edf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_31edfc:
    // 0x31edfc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x31edfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_31ee00:
    // 0x31ee00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31ee00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31ee04:
    // 0x31ee04: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_31ee08:
    if (ctx->pc == 0x31EE08u) {
        ctx->pc = 0x31EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE04u;
        // 0x31ee08: 0x96450826  lhu         $a1, 0x826($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2086)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EE0Cu;
        goto label_31ee0c;
    }
    ctx->pc = 0x31EE04u;
    {
        const bool branch_taken_0x31ee04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE04u;
        // 0x31ee08: 0x96450826  lhu         $a1, 0x826($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee04) {
            ctx->pc = 0x31EE1Cu;
            goto label_31ee1c;
        }
    }
    ctx->pc = 0x31EE0Cu;
label_31ee0c:
    // 0x31ee0c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31ee0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_31ee10:
    // 0x31ee10: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31ee10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_31ee14:
    // 0x31ee14: 0x10000008  b           . + 4 + (0x8 << 2)
label_31ee18:
    if (ctx->pc == 0x31EE18u) {
        ctx->pc = 0x31EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE14u;
        // 0x31ee18: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EE1Cu;
        goto label_31ee1c;
    }
    ctx->pc = 0x31EE14u;
    {
        const bool branch_taken_0x31ee14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE14u;
        // 0x31ee18: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee14) {
            ctx->pc = 0x31EE38u;
            goto label_31ee38;
        }
    }
    ctx->pc = 0x31EE1Cu;
label_31ee1c:
    // 0x31ee1c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31ee1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31ee20:
    // 0x31ee20: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_31ee24:
    // 0x31ee24: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31ee24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_31ee28:
    // 0x31ee28: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31ee28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_31ee2c:
    // 0x31ee2c: 0x0  nop
    ctx->pc = 0x31ee2cu;
    // NOP
label_31ee30:
    // 0x31ee30: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31ee30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_31ee34:
    // 0x31ee34: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x31ee34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_31ee38:
    // 0x31ee38: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_31ee3c:
    if (ctx->pc == 0x31EE3Cu) {
        ctx->pc = 0x31EE40u;
        goto label_31ee40;
    }
    ctx->pc = 0x31EE38u;
    {
        const bool branch_taken_0x31ee38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ee38) {
            ctx->pc = 0x31EE80u;
            goto label_31ee80;
        }
    }
    ctx->pc = 0x31EE40u;
label_31ee40:
    // 0x31ee40: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x31ee40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_31ee44:
    // 0x31ee44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31ee44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31ee48:
    // 0x31ee48: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_31ee4c:
    if (ctx->pc == 0x31EE4Cu) {
        ctx->pc = 0x31EE50u;
        goto label_31ee50;
    }
    ctx->pc = 0x31EE48u;
    {
        const bool branch_taken_0x31ee48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31ee48) {
            ctx->pc = 0x31EE80u;
            goto label_31ee80;
        }
    }
    ctx->pc = 0x31EE50u;
label_31ee50:
    // 0x31ee50: 0x964329de  lhu         $v1, 0x29DE($s2)
    ctx->pc = 0x31ee50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10718)));
label_31ee54:
    // 0x31ee54: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x31ee54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_31ee58:
    // 0x31ee58: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_31ee5c:
    if (ctx->pc == 0x31EE5Cu) {
        ctx->pc = 0x31EE60u;
        goto label_31ee60;
    }
    ctx->pc = 0x31EE58u;
    {
        const bool branch_taken_0x31ee58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ee58) {
            ctx->pc = 0x31EE80u;
            goto label_31ee80;
        }
    }
    ctx->pc = 0x31EE60u;
label_31ee60:
    // 0x31ee60: 0x8e4306ac  lw          $v1, 0x6AC($s2)
    ctx->pc = 0x31ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
label_31ee64:
    // 0x31ee64: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x31ee64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_31ee68:
    // 0x31ee68: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_31ee6c:
    if (ctx->pc == 0x31EE6Cu) {
        ctx->pc = 0x31EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE68u;
        // 0x31ee6c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EE70u;
        goto label_31ee70;
    }
    ctx->pc = 0x31EE68u;
    {
        const bool branch_taken_0x31ee68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE68u;
        // 0x31ee6c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee68) {
            ctx->pc = 0x31EE78u;
            goto label_31ee78;
        }
    }
    ctx->pc = 0x31EE70u;
label_31ee70:
    // 0x31ee70: 0xa6430786  sh          $v1, 0x786($s2)
    ctx->pc = 0x31ee70u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1926), (uint16_t)GPR_U32(ctx, 3));
label_31ee74:
    // 0x31ee74: 0x0  nop
    ctx->pc = 0x31ee74u;
    // NOP
label_31ee78:
    // 0x31ee78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31ee7c:
    // 0x31ee7c: 0xa2430821  sb          $v1, 0x821($s2)
    ctx->pc = 0x31ee7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
label_31ee80:
    // 0x31ee80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31ee80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_31ee84:
    // 0x31ee84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31ee84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31ee88:
    // 0x31ee88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31ee88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31ee8c:
    // 0x31ee8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ee8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31ee90:
    // 0x31ee90: 0x3e00008  jr          $ra
label_31ee94:
    if (ctx->pc == 0x31EE94u) {
        ctx->pc = 0x31EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE90u;
        // 0x31ee94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EE98u;
        goto label_fallthrough_0x31ee90;
    }
    ctx->pc = 0x31EE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE90u;
        // 0x31ee94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31ee90:
    ctx->pc = 0x31EE98u;
}
